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

        //震动时间
        [SerializeField, Range(0.01f, 3f)] protected float shaketime = .4f;
        //震动间隔
        [SerializeField, Range(0.01f, 8f)] protected float pausetime = .6f;
        //震动强度
        [SerializeField, Range(0.01f, 5f)] protected float strength = 4f;
        //单次振动频率
        [SerializeField, Range(0.01f, 10f)] protected float frequency = 8f;

        private CinemachineBasicMultiChannelPerlin[] cinemachineBasicMultiChannelPerlins;
        
        public NoiseSettings ShakingNoise;

        //震动和震动间隔的计时器
        private float shakeTimer = 0.2f;

        //是否是停止震动状态
        private bool shakeIsCut = false;


        // Start is called before the first frame update
        void Start()
        {
            //载入震动曲线
            ShakingNoise = Resources.Load<NoiseSettings>("CameraShakingNoise");
            brain = GetComponent<CinemachineBrain>();
            //监听镜头切换
            brain.m_CameraActivatedEvent.AddListener(CameraActivatedEvent);
            shakeTimer = shaketime;
            
        }

        // Update is called once per frame
        void Update()
        {

            if (!_isOn) return;

            if (shakeTimer > 0)
            {
                shakeTimer -= Time.deltaTime;
                if (shakeTimer <= 0f)
                {
                    Noise2Cut(shakeIsCut);
                    shakeIsCut = !shakeIsCut;
                    shakeTimer = shakeIsCut ? shaketime : pausetime;

                }

            }

        }

        //关闭上一个摄像机的震动强度
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

        //设置当前摄像机的所有Noise参数
        void SetNoise2(ICinemachineCamera liveCamera)
        {

            //此时brain.ActiveVirtualCamera即liveCamera
            brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCamera>().AddCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

            cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();

            foreach (var item in cinemachineBasicMultiChannelPerlins)
            {
                if (shakeIsCut)
                {
                    item.m_AmplitudeGain = strength;
                }
                else
                {
                    item.m_AmplitudeGain = 0f;
                }
                item.m_FrequencyGain = frequency;
                item.m_NoiseProfile = ShakingNoise;

            }
        }

        //切换震动状态
        void Noise2Cut(bool cut)
        {

            cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();

            foreach (var item in cinemachineBasicMultiChannelPerlins)
            {
                if (cut)
                {
                    item.m_AmplitudeGain = 0f;
                }
                else
                {
                    item.m_AmplitudeGain = strength;
                }
                item.m_FrequencyGain = frequency;
            }
        }

        //当摄像机切换执行
        void CameraActivatedEvent(ICinemachineCamera liveCamera, ICinemachineCamera lastCamera)
        {
            if (_isOn)
            {
                EraseNoise(lastCamera);
                SetNoise2(liveCamera);
            }
        }

    }
}
