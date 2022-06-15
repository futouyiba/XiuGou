using System;
using System.Collections.Generic;
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableObject: MonoBehaviour
    {
        // protected int level;
        [SerializeField] protected List<Material> materialConfig;
        [SerializeField] protected List<Light> lightConfig;
        [SerializeField] protected List<Color> colorConfig;

        private void Start()
        {
            LevelTo(1);
        }

        public virtual void LevelTo(int level)
        {
            throw new Exception("implement this function in child");
        }

    }
}