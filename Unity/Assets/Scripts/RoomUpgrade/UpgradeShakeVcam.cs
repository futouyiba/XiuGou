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

        //��ʱ��
        [SerializeField, Range(0.01f, 3f)] protected float shaketime = .4f;
        //�𶯼��
        [SerializeField, Range(0.01f, 8f)] protected float pausetime = .6f;
        //��ǿ��
        [SerializeField, Range(0.01f, 5f)] protected float strength = 4f;
        //������Ƶ��
        [SerializeField, Range(0.01f, 10f)] protected float frequency = 8f;

        private CinemachineBasicMultiChannelPerlin[] cinemachineBasicMultiChannelPerlins;
        
        public NoiseSettings ShakingNoise;

        //�𶯺��𶯼���ļ�ʱ��
        private float shakeTimer = 0.2f;

        //�Ƿ���ֹͣ��״̬
        private bool shakeIsCut = false;


        // Start is called before the first frame update
        void Start()
        {
            //����������
            ShakingNoise = Resources.Load<NoiseSettings>("CameraShakingNoise");
            brain = GetComponent<CinemachineBrain>();
            //������ͷ�л�
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

        //�ر���һ�����������ǿ��
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

        //���õ�ǰ�����������Noise����
        void SetNoise2(ICinemachineCamera liveCamera)
        {

            //��ʱbrain.ActiveVirtualCamera��liveCamera
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

        //�л���״̬
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

        //��������л�ִ��
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
