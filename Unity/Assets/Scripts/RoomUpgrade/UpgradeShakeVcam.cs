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
        protected CinemachineImpulseListener ShakeForMusic;

        [SerializeField] private bool _isOn;

        public void IsOn(bool isOn)
        {
            _isOn = isOn;
        }

        // Start is called before the first frame update
        void Start()
        {

            brain = GetComponent<CinemachineBrain>();

            brain.m_CameraActivatedEvent.AddListener(CameraActivatedEvent);


        }

        // Update is called once per frame
        void Update()
        {
            if (!_isOn) return;
        }

        void AddImpulseListener(ICinemachineCamera liveCamera)
        {
            //liveCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().AddExtension(ShakeForMusic);
            if (liveCamera.VirtualCameraGameObject.GetComponent<CinemachineImpulseListener>() == null)
            {
                Debug.Log("AddExtension");
                liveCamera.VirtualCameraGameObject.AddComponent<CinemachineImpulseListener>();
                ShakeForMusic = liveCamera.VirtualCameraGameObject.GetComponent<CinemachineImpulseListener>();
                ShakeForMusic.m_ChannelMask = 1;
                ShakeForMusic.m_Gain = 1;
                ShakeForMusic.m_UseCameraSpace = true;

            }
            //不判断会加两次

            //ShakeForMusic.Awake();
            //ShakeForMusic.ConnectToVcam(true);
        }

        void DeleteImpulseListener(ICinemachineCamera lastCamera)
        {
            if (lastCamera.VirtualCameraGameObject.GetComponent<CinemachineImpulseListener>() != null)
            {
                Destroy(lastCamera.VirtualCameraGameObject.GetComponent<CinemachineImpulseListener>(), 0.5f);
            }
            //lastCamera.VirtualCameraGameObject.GetComponent<CinemachineImpulseListener>().m_Gain = 0;
        }

        void CameraActivatedEvent(ICinemachineCamera liveCamera, ICinemachineCamera lastCamera)
        {
            if (_isOn)
            {
                AddImpulseListener(liveCamera);
                DeleteImpulseListener(lastCamera);
            }
        }
    }
}
