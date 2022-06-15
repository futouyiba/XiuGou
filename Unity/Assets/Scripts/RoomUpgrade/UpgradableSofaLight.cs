using Sirenix.Serialization;
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableSofaLight:UpgradableObject
    {
        public GameObject lightObj;

        private void start()
        {
            
        }

        // public override void LevelTo(int level)
        // {
        //     GameObject lightObj = transform.GetChild(0).gameObject;
        //     LightController controller = transform.parent.GetComponent<LightController>();
        //     
        //     switch (level)
        //     {
        //         case 1:
        //             lightObj.SetActive(false);
        //             break;
        //         case 5:
        //             lightObj.SetActive(true);
        //             break;
        //             
        //         
        //     }
        // }


    }
}