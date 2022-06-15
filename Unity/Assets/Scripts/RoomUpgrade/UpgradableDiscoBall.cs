using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableDiscoBall:UpgradableObject
    {
        public override void LevelTo(int level)
        {
            GameObject lightObj = transform.GetChild(0).gameObject;
            RotateGameObject rotateScript = GetComponent<RotateGameObject>();
            switch (level)
            {
                case 1:
                    rotateScript.IsRotate = false;
                    lightObj.SetActive(false);
                    break;
                case 7:
                    rotateScript.IsRotate = false;
                    lightObj.SetActive(true);
                    break;
                case 11:
                    rotateScript.IsRotate = true;
                    lightObj.SetActive(true);
                    break;
            }
                
        }
    }
}