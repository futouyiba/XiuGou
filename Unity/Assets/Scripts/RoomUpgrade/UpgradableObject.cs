using System;
using System.Collections.Generic;
using Sirenix.Serialization;
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableObject: MonoBehaviour
    {
        // protected int level;
        [OdinSerialize] public List<Material> materialConfig;
        [OdinSerialize] public List<Light> lightConfig;
        [OdinSerialize] public List<Color> colorConfig;

        private void Start()
        {
            // LevelTo(1);
        }

        public virtual void LevelTo(int level)
        {
            throw new Exception("implement this function in child");
        }

    }
}