using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public class UpgradableCharMgr : MonoBehaviour
    {
        [SerializeField] protected CharAnimateSpeedConfig config;
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void LevelTo(int level)
        {
            float speed = -1f;
            if (!config.speedConfig.TryGetValue(level, out speed))
            {
                Debug.LogError($"level {level} does not exist");
                return;
            }
            
            CharMgr.instance.curAnimateSpeed = speed;
            CharMgr.instance.UpdateExistingAnimateSpeed();
        }
    }
}
