using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;

namespace ET
{
    public class BeatImpulseCamera : MonoBehaviour
    {
        private CinemachineImpulseSource impulseSource;
        
        // Start is called before the first frame update
        void Start()
        {
            impulseSource = GetComponent<CinemachineImpulseSource>();
            GetComponent<BeatDetection>().CallBackFunction = (info =>
            {
                switch (info.messageInfo)
                {
                    case BeatDetection.EventType.Energy:
                        impulseSource.GenerateImpulse();
                        break;
                    case BeatDetection.EventType.Kick:
                        impulseSource.GenerateImpulse();
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
