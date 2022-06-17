using System;
using UnityEngine;

namespace ET.RoomUpgrade
{
    public class UpgradableOnOffObj:MonoBehaviour
    {
        [SerializeField] private GameObject[] onOffObjs;

        private void Awake()
        {
            Switch(0);
        }

        public void Switch(int isOn)
        {
            if (isOn == 0)
            {
                foreach (var obj in onOffObjs)
                {
                    obj.SetActive(false);
                }

            }
            else if (isOn == 1)
            {
                foreach (var obj in onOffObjs)
                {
                    obj.SetActive(true);
                }
            }
            else
            {
                Debug.LogError($"bad param isOn={isOn}");
            }
        }
    }
}