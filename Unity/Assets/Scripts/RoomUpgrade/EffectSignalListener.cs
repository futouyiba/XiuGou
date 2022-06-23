using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using DG.Tweening;
using UnityEngine;

namespace ET
{
    public class EffectSignalListener : MonoBehaviour
    {
        [SerializeField] private CinemachineVirtualCamera vcam;
        [SerializeField] private float shakeStr;
        [SerializeField] private float duration;
        // [SerializeField]
        private float initFov;
        // protected ICinemachineCamera currentCam => brain.ActiveVirtualCamera;

        protected Sequence curSeq;
        // Start is called before the first frame update
        void Start()
        {
            initFov = vcam.m_Lens.FieldOfView;
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void Beat()
        {
            curSeq?.Kill();
            curSeq = DOTween.Sequence();
            // var vcam = currentCam.VirtualCameraGameObject.GetComponent<CinemachineVirtualCamera>();
            transform.DOShakePosition(duration, shakeStr,10,0);
            // vcam.m_Lens.FieldOfView=
            // currentCam.lens
        } 
        
        public static float FocalLengthToVerticalFOV(float _focalLength, float sensorSize)
        {
            if (_focalLength < 0.001f)
                return 180f;
            return Mathf.Rad2Deg * 2.0f * Mathf.Atan(sensorSize * 0.5f / _focalLength);
        }
        
        
    }
}
