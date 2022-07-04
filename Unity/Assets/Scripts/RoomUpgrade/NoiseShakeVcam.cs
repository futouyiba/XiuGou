using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;
using UnityEngine.Rendering.Universal;
using UnityEngine.Timeline;

namespace ET
{
    [RequireComponent(typeof(CinemachineVirtualCamera))]
    public class NoiseShakeVcam : MonoBehaviour
    {
        protected CinemachineVirtualCamera vcam;

        protected float intensity=5f;

        protected float duration = .3f;

        protected float interval = 1f;
        
        private float shakeTimer = 0f;
        private float startTime = 0f;
        
        
        // Start is called before the first frame update
        void Start()
        {
            vcam = GetComponent<CinemachineVirtualCamera>();
            startTime = Time.time;
        }

        // Update is called once per frame
        void Update()
        {
            if (shakeTimer > 0)
            {
                shakeTimer -= Time.deltaTime;
                if (shakeTimer <= 0f)
                {
                    var multiChannelPerlin = vcam.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
                    multiChannelPerlin.m_AmplitudeGain = 0f;
                }
            }

            var lastFrameTime = Time.time - Time.deltaTime;
            var thisFrameTime = Time.time;
            int lastBeatCyc = Mathf.FloorToInt((lastFrameTime - startTime) / interval);
            int thisBeatCyc = Mathf.FloorToInt((thisFrameTime - startTime) / interval);
            if (thisBeatCyc > lastBeatCyc)
            {
                Shake();
            }
            
        }

        void Shake()
        {
            var multiChannelPerlin = vcam.GetCinemachineComponent<CinemachineBasicMultiChannelPerlin>();
            multiChannelPerlin.m_AmplitudeGain = intensity;
            shakeTimer = duration;
        }
    }
}
