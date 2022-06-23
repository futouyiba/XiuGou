using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    public class EffectSignalEmitter : MonoBehaviour
    {
        [SerializeField] ParticleSystem particleSystem;
        
        [SerializeField] private float offset;

        [OdinSerialize] public List<EffectSignalListener> listeners;
        private bool isParticleActive => particleSystem.gameObject.activeSelf;

        private bool isEmitterActive = false;

        private bool isEmitterActiveLastFrame=false;
        
        private bool isSignalOn = false;

        private float SignalOnTime = 0f;

        private float NextSignalTime = 0f;
        // Start is called before the first frame update
        void Start()
        {
            offset %= particleSystem.main.duration;
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        private void FixedUpdate()
        {
            
            isEmitterActive = isParticleActive;
            if (isEmitterActive != isEmitterActiveLastFrame)
            {
                if (isEmitterActive) EmitterStart();
                else EmitterStop();
            }
            isEmitterActiveLastFrame = isEmitterActive;

            if (isSignalOn)
            {
                if (Mathf.Approximately(NextSignalTime, 0f))
                {
                    NextSignalTime = Time.time + offset;
                }
                if (NextSignalTime <= Time.time)
                {
                    Emmit();
                    NextSignalTime = Time.time + 1f/particleSystem.emission.rateOverTime.constant;
                }
            }
            
        }

        public void EmitterStart()
        {
            isSignalOn = true;
            SignalOnTime = Time.time;
        }

        public void EmitterStop()
        {
            isSignalOn = false;
            SignalOnTime = 0f;
        }

        public void Emmit()
        {
            // Debug.Log($"{Time.time} emmited, next time is {NextSignalTime}");
            if (listeners.Count > 0)
            {
                foreach (var listener in listeners)
                {
                    listener.Beat();
                }
            }
        }
    }
}
