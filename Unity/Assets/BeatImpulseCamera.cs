using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;

namespace ET
{
    public class BeatImpulseCamera : MonoBehaviour
    {
        private CinemachineImpulseSource impulseSource;
        public bool bRespondEnergy = false;
        public bool bRespondKick = true;
        [SerializeField] private bool bRespondSnare;
        [SerializeField] private bool bRespondHitHat;


        // Start is called before the first frame update
        void Start()
        {
            impulseSource = GetComponent<CinemachineImpulseSource>();
            GetComponent<BeatDetection>().CallBackFunction = (info =>
            {
                Debug.Log($"beat detected, info is {info}");
                switch (info.messageInfo)
                {
                    case BeatDetection.EventType.Energy:
                        if (bRespondEnergy)
                        {
                            impulseSource.GenerateImpulse();
                        }
                        break;
                    case BeatDetection.EventType.Kick:
                        if (bRespondKick)
                        {
                            impulseSource.GenerateImpulse();
                        }
                        break;
                    case BeatDetection.EventType.Snare:
                        if (bRespondSnare)
                        {
                            impulseSource.GenerateImpulse();
                        }
                        break;
                    case BeatDetection.EventType.HitHat:
                        if (bRespondHitHat)
                        {
                            impulseSource.GenerateImpulse();
                        }
                        break;
                    
                }
            });
        }



        // Update is called once per frame
        void Update()
        {
        
        }
    }
}
