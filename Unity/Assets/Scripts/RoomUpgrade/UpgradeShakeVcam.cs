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

        //��ʱ��(����)
        //[SerializeField, Range(0.01f, 1f)] protected float shaketime = .4f;
        //�𶯼��(���ã�
        //[SerializeField, Range(0.01f, 8f)] protected float pausetime = .6f;
        //��ǿ��
        [SerializeField, Range(0.2f, 5f)] protected float strength = 2.5f;
        //��Ƶ��
        [SerializeField, Range(0.5f, 4f)] protected float frequency = 2f;

        //���Ե�����ǿ��
        //[SerializeField, Range(0.2f, 5f)] protected float strengthOnce = 2.5f;
        protected float strengthOnce = 2.5f;
        //���Ե�����ʱ�䣨frequency��shaketimeû����������˿��Էֱ������
        //[SerializeField, Range(0.1f, 3f)] protected float timeOnce = 0.8f;
        protected float timeOnce = 0.8f;
        //���Ե�����ʱ�䣨frequency��shaketimeû����������˿��Էֱ������
        //[SerializeField, Range(0.1f, 3f)] protected float frequencyOnce = 0.8f;
        protected float frequencyOnce = 0.8f;


        private CinemachineBasicMultiChannelPerlin[] cinemachineBasicMultiChannelPerlins;

        public NoiseSettings ShakingNoise;

        //��(���𶯼����)��ʱ��
        private float shakeTimer = 0.2f;

        //�����𶯼�ʱ��
        private float shakeOnceTimer = 0.2f;

        //�Ƿ���ֹͣ��״̬
        private bool shakeIsCut = false;

        //�Ƿ��������𶯣���Ϊֻ��Ҫ��ʼ��һ�Σ�ֻ����һ��
        private bool firstCamInit = false;


        //�Ƿ���������
        private bool shakeOnceStatus = false;




        // Start is called before the first frame update
        void Start()
        {
            //����������
            ShakingNoise = Resources.Load<NoiseSettings>("CameraShakingNoise");
            brain = GetComponent<CinemachineBrain>();
            //������ͷ�л�
            brain.m_CameraActivatedEvent.AddListener(CameraActivatedEvent);
            shakeTimer = 1 / (2 * frequency); //frequency��shaketime������ȷ��ֻ��һ�Σ������о�ͷ��λ��䣬���Ҳ��䣩
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

            //ʮ�ż�����������л��¼�ҲҪ��һ��
            if (!_isOn) return;

            initCam(firstCamInit);

            CamMoveContinuous();

        }

        //�����ʼ���������
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

        //����һ��
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
                    lerpValue = 2 * Mathf.Lerp(strengthOnce, 0f, shakeOnceTimer / timeOnce); //���Է�ʽ������С����ֹ���䣬m_AmplitudeGain��ò�Ҫ��ɢ�仯

                }
                else if (shakeOnceTimer <= timeOnce / 2)
                {
                    lerpValue = 2 * Mathf.Lerp(0f, strengthOnce, shakeOnceTimer / timeOnce); //���Է�ʽ������С
                }
                Debug.Log(lerpValue);
                foreach (var item in cinemachineBasicMultiChannelPerlins)
                {
                    item.m_AmplitudeGain = lerpValue;
                    item.m_FrequencyGain = frequencyOnce;
                }
            }

        }

        //������
        void CamMoveContinuous()
        {
            if (shakeTimer > 0)
            {
                shakeTimer -= Time.deltaTime;
                float lerpV = 0f; //���Է�ʽ������С
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
                        lerpV = 2 * Mathf.Lerp(strength, 0f, shakeTimer / (1 / (2 * frequency))); //���Է�ʽ������С

                    }
                    else if (shakeTimer <= ((1 / (2 * frequency)) / 2))
                    {
                        lerpV = 2 * Mathf.Lerp(0f, strength, shakeTimer / (1 / (2 * frequency))); //���Է�ʽ��������

                    }

                }

                foreach (var item in cinemachineBasicMultiChannelPerlins)
                {
                    item.m_FrequencyGain = frequency;
                    item.m_AmplitudeGain = lerpV;
                }


            }
        }


        //�𶯿�����һ�����
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


        //�ر���һ�����������ǿ��,�ᵼ������л�˲����ֹͣ
        void EraseNoise(ICinemachineCamera lastCamera)
        {
            //ֻ�������������ȫ��
            //lastCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCamera>().AddCinemachineComponent<CinemachineBasicMultiChannelPerlin>();

            cinemachineBasicMultiChannelPerlins = lastCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();


            foreach (var item in cinemachineBasicMultiChannelPerlins)
            {
                item.m_AmplitudeGain = 0f;
            }
        }

        //�����л�ʱ��һ̨����Noise������m_AmplitudeGain�����ƴ���ǣ�����ǰһ�̵�
        void SetNoise2(ICinemachineCamera liveCamera)
        {

            //��ʱbrain.ActiveVirtualCamera��liveCamera
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

        //�л���״̬���Ѿ�������
        /*void Noise2Cut(bool cut)
        {
            float lerpV = 0f; //���Է�ʽ������С

            cinemachineBasicMultiChannelPerlins = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().GetComponentsInChildren<CinemachineBasicMultiChannelPerlin>();
            if (!cut)
            {
                lerpV = 0f;
            }
            else
            {
                if (shakeTimer > (1 / (2 * frequency)) / 2)
                {
                    lerpV = 2 * Mathf.Lerp(strength, 0f, shakeTimer / (1 / (2 * frequency)) / 2); //���Է�ʽ������С

                }
                else if(shakeTimer <= (1 / (2 * frequency)) / 2)
                {
                    lerpV = 2 * Mathf.Lerp(0f, strength, shakeTimer / (1 / (2 * frequency)) / 2); //���Է�ʽ��������
                }
                Debug.Log(lerpV);
            }

            foreach (var item in cinemachineBasicMultiChannelPerlins)
            {
                item.m_FrequencyGain = frequency;
                item.m_AmplitudeGain = lerpV;
            }
        }*/

        //��������л�ִ��
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
