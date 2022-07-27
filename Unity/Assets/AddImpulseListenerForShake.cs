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
    public class AddImpulseListenerForShake : MonoBehaviour
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
            brain.m_CameraActivatedEvent.AddListener(CameraActivatedEvent);


        }

        // Update is called once per frame
        void Update()
        {
            if (!_isOn) return;
        }

        void AddImpulseListener(ICinemachineCamera liveCamera)
        {
            liveCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCameraBase>().AddExtension(ShakeForMusic);
        }

        void CameraActivatedEvent(ICinemachineCamera liveCamera, ICinemachineCamera lastCamera)
        {
            if (_isOn)
            {
                AddImpulseListener(liveCamera);
            }
        }
    }
}
