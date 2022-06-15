﻿using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableMainLight:UpgradableObject
    {
        public override void LevelTo(int level)
        {
            Light light = this.GetComponent<Light>();
            LightController controller = transform.parent.GetComponent<LightController>();
            
            switch (level)
            {
                case 1:
                    light.intensity = 0f;
                    break;
                case 2:
                    light.intensity = 1.6f;
                    controller.enabled = false;
                    break;
                case 8:
                    light.intensity = 1.6f;
                    controller.enabled = true;
                    break;
                
            }
        }
    }
}