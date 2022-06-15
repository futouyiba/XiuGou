using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableDogLight:UpgradableObject
    {
        private GameObject lightObj;
        private void Start()
        {
            lightObj = transform.GetChild(0).gameObject;
        }
        public override void LevelTo(int level)
        {
            GameObject lightObj = transform.GetChild(0).gameObject;
            switch (level)
            {
                case 1:
                    lightObj.SetActive(false);
                    break;
                case 10:
                    lightObj.SetActive(true);
                    break;
            }
                
        }

        public void LightOff()
        {
            lightObj.SetActive(false);
        }
        
        public void LightOn()
        {
            lightObj.SetActive(true);
        }
    }
}