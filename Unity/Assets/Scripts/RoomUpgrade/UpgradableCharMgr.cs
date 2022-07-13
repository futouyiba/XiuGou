using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal;

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

        public void SetAnimationSpeed(int level)
        {

            float speed = 1f;
            if (!config.speedConfig.TryGetValue(level, out speed))
            {
                // Debug.LogError($"level {level} does not exist");
                // return;
                //20220701
                //没找到，找比等级小的，最接近的一个。
                //这个速度就是要找的速度
                var fallbackLvl = 0;
                foreach (var configItem in config.speedConfig)
                {
                    if (fallbackLvl < configItem.Key && configItem.Key < level)
                    {
                        fallbackLvl = configItem.Key;
                    }
                }

                speed = config.speedConfig[fallbackLvl];
            }
            Debug.LogWarning($"setting speed to {speed}");
            CharMgr.instance.curAnimateSpeed = speed;
            CharMgr.instance.UpdateExistingAnimateSpeed();

        }

        public void FloatStart()
        {
            // Debug.LogWarning($"float starting");
            CharMgr.instance.FloatStart();
        }

        public void FloatEnd()
        {
            // Debug.LogWarning($"float ending");
            CharMgr.instance.FloatEnd();
            
        }
        
        

        public void LevelTo(int level)
        {
            float speed = -1f;
            if (!config.speedConfig.TryGetValue(level, out speed))
            {
                // Debug.LogError($"level {level} does not exist");
                // return;
                //20220701
                //没找到，找比等级小的，最接近的一个。
                //这个速度就是要找的速度
                var fallbackLvl = 0;
                foreach (var configItem in config.speedConfig)
                {
                    if (fallbackLvl < configItem.Key && configItem.Key < level)
                    {
                        fallbackLvl = configItem.Key;
                    }
                }

                speed = config.speedConfig[fallbackLvl];
            }
            
            CharMgr.instance.curAnimateSpeed = speed;
            CharMgr.instance.UpdateExistingAnimateSpeed();
            
            //floating things
            if (level == 0)
            {
                CharMgr.instance.FloatStart();
            }
            else if (level == 3)
            {
                CharMgr.instance.FloatEnd();
            }
        }
    }
}
