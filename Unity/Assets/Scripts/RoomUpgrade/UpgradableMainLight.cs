using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableMainLight:UpgradableObject
    {
        private GameObject lightObj;
        private LightController controller;
        private void Awake()
        {
            lightObj = transform.GetChild(0).gameObject;
            controller = GetComponent<LightController>();
        }
        // public override void LevelTo(int level)
        // {
        //     Light light = this.GetComponent<Light>();
        //     LightController controller = transform.parent.GetComponent<LightController>();
        //     
        //     switch (level)
        //     {
        //         case 1:
        //             light.intensity = 0f;
        //             break;
        //         case 2:
        //             light.intensity = 1.6f;
        //             controller.enabled = false;
        //             break;
        //         case 8:
        //             light.intensity = 1.6f;
        //             controller.enabled = true;
        //             break;
        //         
        //     }
        // }

        public void Init()
        {
            LightOff();
            ControllerOff();
        }

        public void LightOn()
        {
            lightObj.SetActive(true);
        }
        
        public void LightOff()
        {
            lightObj.SetActive(false);
        }

        public void ControllerOn()
        {
            controller.enabled = true;
        }
        
        public void ControllerOff()
        {
            controller.enabled = false;
        }
    }
}