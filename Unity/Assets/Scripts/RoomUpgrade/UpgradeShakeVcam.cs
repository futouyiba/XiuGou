using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using DG.Tweening;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.Timeline;

namespace ET
{
    // [RequireComponent(typeof(CinemachineVirtualCamera))]
    public class UpgradeShakeVcam : MonoBehaviour
    {
        // protected CinemachineVirtualCamera vcam;

        protected float intensity = .1f;

        protected float duration = .2f;

        protected float interval = 1f;
        
        // private float shakeTimer = 0f;
        private float startTime = 0f;

        private Sequence curSeq = null;
        
        // Start is called before the first frame update
        void Start()
        {
            // vcam = GetComponent<CinemachineVirtualCamera>();
            startTime = Time.time;
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
                curSeq = DOTween.Sequence();
            }

            curSeq.Append(transform.DOShakePosition(duration, intensity, 10, 0));
            curSeq.Play();
        }
    }
}
