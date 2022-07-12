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
        public bool IsOn => _isOn;

        [ReadOnly]public GameObject shakingVcamObj;

        [SerializeField]protected float duration = .2f;

        [SerializeField]protected float intensity = .1f;

        [SerializeField]protected float interval = 1f;
        public enum ShakeDirectionList
        {
            Up,
            Down,
            Left,
            Right,
            Front,
            Back
        }

        public ShakeDirectionList ShakeDirection = ShakeDirectionList.Up;

        // private float shakeTimer = 0f;
        private float startTime = 0f;

        private Sequence curSeq = null;
        
        // Start is called before the first frame update
        void Start()
        {
            brain = GetComponent<CinemachineBrain>();
            startTime = Time.time;
            if (brain.ActiveVirtualCamera != null)
            {
                shakingVcamObj = brain.ActiveVirtualCamera.VirtualCameraGameObject;
            }
        }

        // Update is called once per frame
        void Update()
        {
            // if (shakeTimer > 0)
            // {
            //     shakeTimer -= Time.deltaTime;
            //     if (shakeTimer <= 0f)
            //     {
            //         var multiChannelPerlin = vcam.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
            //         multiChannelPerlin.m_AmplitudeGain = 0f;
            //     }
            // }

            if (!IsOn) return;
            
            var lastFrameTime = Time.time - Time.deltaTime;
            var thisFrameTime = Time.time;
            int lastBeatCyc = Mathf.FloorToInt((lastFrameTime - startTime) / interval);
            int thisBeatCyc = Mathf.FloorToInt((thisFrameTime - startTime) / interval);
            if (thisBeatCyc > lastBeatCyc)
            {
                // Shake();
                Shake2();
            }
            
        }

        void Shake()
        {
            // var multiChannelPerlin = vcam.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
            // multiChannelPerlin.m_AmplitudeGain = intensity;
            // shakeTimer = duration;
        }

        void Shake2()
        {
            if (curSeq != null)
            {
                curSeq.Kill();
            }
            curSeq = DOTween.Sequence();

            //curSeq.Append(transform.DOShakePosition(duration, intensity, 10, 0));
            switch (ShakeDirection)
            {
                case ShakeDirectionList.Up:
                    curSeq.Append(shakingVcamObj.transform.DOPunchPosition(new Vector3(0, intensity, 0), duration, 10));
                    break;
                case ShakeDirectionList.Down:
                    curSeq.Append(shakingVcamObj.transform.DOPunchPosition(new Vector3(0, -intensity, 0), duration, 10));
                    break;
                case ShakeDirectionList.Front:
                    curSeq.Append(shakingVcamObj.transform.DOPunchPosition(new Vector3(0, 0, -intensity), duration, 10));
                    break;
                case ShakeDirectionList.Back:
                    curSeq.Append(shakingVcamObj.transform.DOPunchPosition(new Vector3(0, 0, intensity), duration, 10));
                    break;
                case ShakeDirectionList.Left:
                    curSeq.Append(shakingVcamObj.transform.DOPunchPosition(new Vector3(-intensity, 0, 0), duration, 10));
                    break;
                case ShakeDirectionList.Right:
                    curSeq.Append(shakingVcamObj.transform.DOPunchPosition(new Vector3(intensity, 0, 0), duration, 10));
                    break;
            }

            curSeq.Play();
        }

        public void OnVCamChange()
        {
            Debug.LogWarning($"switched to  {brain.ActiveVirtualCamera.VirtualCameraGameObject.gameObject.name}");
            shakingVcamObj = brain.ActiveVirtualCamera.VirtualCameraGameObject;
        }
    }
}
