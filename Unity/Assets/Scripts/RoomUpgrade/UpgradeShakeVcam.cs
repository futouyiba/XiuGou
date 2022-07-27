using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.Timeline;

namespace ET
{
    [RequireComponent(typeof(CinemachineBrain))]
    public class UpgradeShakeVcam : MonoBehaviour
    {
        protected CinemachineBrain brain;

        [SerializeField] private bool _isOn;

        public void IsOn(bool isOn)
        {
            _isOn = isOn;
        }

        //震动时间(弃用)
        //[SerializeField, Range(0.01f, 1f)] protected float shaketime = .4f;
        //震动间隔(弃用）
        //[SerializeField, Range(0.01f, 8f)] protected float pausetime = .6f;
        //震动强度
        [SerializeField, Range(0.2f, 5f)] protected float strength = 2.5f;
        //振动频率
        [SerializeField, Range(0.5f, 4f)] protected float frequency = 2f;

        //测试单次震动强度
        //[SerializeField, Range(0.2f, 5f)] protected float strengthOnce = 2.5f;
        protected float strengthOnce = 2.5f;
        //测试单次振动时间（frequency和shaketime没有锁死，因此可以分别调整）
        //[SerializeField, Range(0.1f, 3f)] protected float timeOnce = 0.8f;
        protected float timeOnce = 0.8f;
        //测试单次振动时间（frequency和shaketime没有锁死，因此可以分别调整）
        //[SerializeField, Range(0.1f, 3f)] protected float frequencyOnce = 0.8f;
        protected float frequencyOnce = 0.8f;


        private CinemachineBasicMultiChannelPerlin[] cinemachineBasicMultiChannelPerlins;

        public NoiseSettings ShakingNoise;

        //震动(和震动间隔的)计时器
        private float shakeTimer = 0.2f;

        //单次震动计时器
        private float shakeOnceTimer = 0.2f;

        //是否是停止震动状态
        private bool shakeIsCut = false;

        //是否开启连续震动，因为只需要初始化一次，只用它一次
        private bool firstCamInit = false;


        //是否开启连续震动
        private bool shakeOnceStatus = false;




        // Start is called before the first frame update
        void Start()
        {
            //载入震动曲线
            ShakingNoise = Resources.Load<NoiseSettings>("CameraShakingNoise");
            brain = GetComponent<CinemachineBrain>();
            //监听镜头切换
            brain.m_CameraActivatedEvent.AddListener(CameraActivatedEvent);
            shakeTimer = 1 / (2 * frequency); //frequency和shaketime锁死，确保只震一次（但是切镜头相位会变，震感也会变）
            shakeOnceTimer = timeOnce;

        }

        // Update is called once per frame
        void Update()
        {

            /*if (Input.GetMouseButtonUp(1))
            {
                initOnceCam();
                Debug.Log("initOnceCam!");

            }

            if (Input.GetMouseButtonDown(2))
            {
                shakeOnceStatus = true;
                Debug.Log("Punch!");

            }

            ShakeOnce(shakeOnceStatus);
            */

            //十九级开启，相机切换事件也要改一句
            if (!_isOn) return;

            initCam(firstCamInit);

            CamMoveContinuous();

        }

        //单震初始相机的设置
        void initOnceCam()
        {
            brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCamera>().AddCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

            cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();

            foreach (var item in cinemachineBasicMultiChannelPerlins)
            {
                item.m_NoiseProfile = ShakingNoise;
                item.m_AmplitudeGain = 0;
                item.m_FrequencyGain = frequencyOnce;
            }
        }

        //单震一次
        void ShakeOnce(bool status)
        {

            if (shakeOnceTimer > 0 && status)
            {
                cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();

                shakeOnceTimer -= Time.deltaTime;
                float lerpValue = 0f;
                if (shakeOnceTimer <= 0f)
                {
                    lerpValue = 0f;
                    shakeOnceTimer = timeOnce;
                    shakeOnceStatus = false;
                }
                else if (shakeOnceTimer > timeOnce / 2)
                {
                    lerpValue = 2 * Mathf.Lerp(strengthOnce, 0f, shakeOnceTimer / timeOnce); //线性方式慢慢减小，防止跳变，m_AmplitudeGain最好不要离散变化

                }
                else if (shakeOnceTimer <= timeOnce / 2)
                {
                    lerpValue = 2 * Mathf.Lerp(0f, strengthOnce, shakeOnceTimer / timeOnce); //线性方式慢慢减小
                }
                Debug.Log(lerpValue);
                foreach (var item in cinemachineBasicMultiChannelPerlins)
                {
                    item.m_AmplitudeGain = lerpValue;
                    item.m_FrequencyGain = frequencyOnce;
                }
            }

        }

        //连续震动
        void CamMoveContinuous()
        {
            if (shakeTimer > 0)
            {
                shakeTimer -= Time.deltaTime;
                float lerpV = 0f; //线性方式慢慢减小
                //Noise2Cut(shakeIsCut);
                cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();
                if (shakeTimer <= 0f)
                {
                    shakeIsCut = !shakeIsCut;
                    shakeTimer = shakeIsCut ? 1 / (2 * frequency) : 1 / (2 * frequency);

                }
                if (!shakeIsCut)
                {
                    lerpV = 0f;
                }
                else
                {
                    if (shakeTimer > ((1 / (2 * frequency)) / 2))
                    {
                        lerpV = 2 * Mathf.Lerp(strength, 0f, shakeTimer / (1 / (2 * frequency))); //线性方式慢慢减小

                    }
                    else if (shakeTimer <= ((1 / (2 * frequency)) / 2))
                    {
                        lerpV = 2 * Mathf.Lerp(0f, strength, shakeTimer / (1 / (2 * frequency))); //线性方式慢慢增大

                    }

                }

                foreach (var item in cinemachineBasicMultiChannelPerlins)
                {
                    item.m_FrequencyGain = frequency;
                    item.m_AmplitudeGain = lerpV;
                }


            }
        }


        //震动开启第一个相机
        void initCam(bool flagInit)
        {
            if (!flagInit)
            {
                brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCamera>().AddCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

                cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();

                foreach (var item in cinemachineBasicMultiChannelPerlins)
                {
                    /*if (!shakeIsCut)
                    {
                        item.m_AmplitudeGain = strength;
                    }
                    else
                    {
                        item.m_AmplitudeGain = 0f;
                    }*/
                    item.m_AmplitudeGain = strength;
                    item.m_FrequencyGain = frequency;
                    item.m_NoiseProfile = ShakingNoise;
                }
            }
            firstCamInit = true;
        }


        //关闭上一个摄像机的震动强度,会导致相机切换瞬间震动停止
        void EraseNoise(ICinemachineCamera lastCamera)
        {
            //只留下面这句重置全部
            //lastCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCamera>().AddCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

            cinemachineBasicMultiChannelPerlins = lastCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();


            foreach (var item in cinemachineBasicMultiChannelPerlins)
            {
                item.m_AmplitudeGain = 0f;
            }
        }

        //设置切换时下一台机的Noise参数，m_AmplitudeGain（估计大概是）保留前一刻的
        void SetNoise2(ICinemachineCamera liveCamera)
        {

            //此时brain.ActiveVirtualCamera即liveCamera
            brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCamera>().AddCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

            cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();

            foreach (var item in cinemachineBasicMultiChannelPerlins)
            {
                /*if (!shakeIsCut)
                {
                    item.m_AmplitudeGain = strength;
                }
                else
                {
                    item.m_AmplitudeGain = 0f;
                }*/
                //item.m_AmplitudeGain = strength;
                item.m_FrequencyGain = frequency;
                item.m_NoiseProfile = ShakingNoise;

            }
        }

        //切换震动状态，已经不用了
        /*void Noise2Cut(bool cut)
        {
            float lerpV = 0f; //线性方式慢慢减小

            cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();
            if (!cut)
            {
                lerpV = 0f;
            }
            else
            {
                if (shakeTimer > (1 / (2 * frequency)) / 2)
                {
                    lerpV = 2 * Mathf.Lerp(strength, 0f, shakeTimer / (1 / (2 * frequency)) / 2); //线性方式慢慢减小

                }
                else if(shakeTimer <= (1 / (2 * frequency)) / 2)
                {
                    lerpV = 2 * Mathf.Lerp(0f, strength, shakeTimer / (1 / (2 * frequency)) / 2); //线性方式慢慢增大
                }
                Debug.Log(lerpV);
            }

            foreach (var item in cinemachineBasicMultiChannelPerlins)
            {
                item.m_FrequencyGain = frequency;
                item.m_AmplitudeGain = lerpV;
            }
        }*/

        //当摄像机切换执行
        void CameraActivatedEvent(ICinemachineCamera liveCamera, ICinemachineCamera lastCamera)
        {
            if (_isOn)
            {
                //EraseNoise(lastCamera);
                SetNoise2(liveCamera);
            }
        }

    }
}
