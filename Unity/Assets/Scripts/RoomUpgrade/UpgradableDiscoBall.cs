using Unity.VisualScripting;
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableDiscoBall:UpgradableObject
    {

        private GameObject lightObj;
        private RotateGameObject rotateScript;
        private void Start()
        {
            lightObj = transform.GetChild(0).gameObject;
            rotateScript = GetComponent<RotateGameObject>();
        }
        
        // public override void LevelTo(int level)
        // {
        //     GameObject lightObj = transform.GetChild(0).gameObject;
        //     RotateGameObject rotateScript = GetComponent<RotateGameObject>();
        //     switch (level)
        //     {
        //         case 1:
        //             rotateScript.IsRotate = false;
        //             lightObj.SetActive(false);
        //             break;
        //         case 7:
        //             rotateScript.IsRotate = false;
        //             lightObj.SetActive(true);
        //             break;
        //         case 11:
        //             rotateScript.IsRotate = true;
        //             lightObj.SetActive(true);
        //             break;
        //     }
        //         
        // }

        public void Init()
        {
            RotateOff();
            LightOff();
        }

        public void RotateOn()
        {
            rotateScript.IsRotate = true;
        }

        public void RotateOff()
        {
            rotateScript.IsRotate = false;
        }

        public void LightOn()
        {
            lightObj.SetActive(true);
        }
        
        public void LightOff()
        {
            lightObj.SetActive(false);
        }
    }
}