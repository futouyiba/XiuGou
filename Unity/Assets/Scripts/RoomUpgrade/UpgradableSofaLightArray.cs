using System.Collections;
using System.Collections.Generic;
using RoomUpgrade;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    public class UpgradableSofaLightArray : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }
        
        [OdinSerialize] public List<Light> sofaLights;

        public void LightOn()
        {
            foreach (var sofaLight in sofaLights)
            {
                sofaLight.enabled = true;
            }
            
        }

        public void LightOff()
        {
            foreach (var sofaLight in sofaLights)
            {
                sofaLight.enabled = false;
            }
        }
        
    }
}
