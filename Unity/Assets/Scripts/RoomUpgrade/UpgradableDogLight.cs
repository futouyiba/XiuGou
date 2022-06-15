using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableDogLight:UpgradableObject
    {
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
    }
}