using System;
using System.Collections;
using System.Collections.Generic;
using ET.Utility;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;

namespace ET
{
    public class RoomUpgradeMgr : MonoBehaviour
    {
        [SerializeField] private RoomUpConfig config;
        private int currentAmount = -1;
        [ReadOnly] public int currentLevel=0;
        public Action<int> levelUp;

        private static RoomUpgradeMgr _instance;

        public static RoomUpgradeMgr instance
        {
            get => _instance;
            private set{}
        }

        private void Awake()
        {
            if (_instance == null)
            {
                _instance = this;
            }
            else
            {
                Destroy(this);
            }
        }


        private void Start()
        {
            CharMgr.instance.AddCharAmountUpdateDlg(CharAmountChanged);
            CharAmountChanged(0);
            // CharMgr.instance.CreateTestGuysByNum(1);
        }

        protected void CharAmountChanged(int amount)
        {
            var startAmout = currentAmount;
            var endAmount = amount;
            //先不管往回走的
            if(endAmount<startAmout) return;
            currentAmount = amount;
            var info = config.LevelInfos;
            List<UnityEvent> toExec = new List<UnityEvent>();
            
            foreach (var item in info)
            {
                if (item.GuysNeeded > startAmout && item.GuysNeeded <= endAmount)
                {
                    toExec.Add(item.Effects);
                    currentLevel = item.TheLvl;
                }
            }

            if (toExec.Count > 0)
            {
                // currentLevel++;
                levelUp?.Invoke(currentLevel);
                
                foreach (var exec in toExec)
                {
                    
                    exec.Invoke();
                    
                    // var actions = dict[exec];
                    // foreach (var action in actions)
                    // {
                    //     action.Invoke();
                    // }
                }
            }

        }

        public int AmountTillNextLv()
        {
            if (currentAmount < 0)
            {
                Debug.LogError($"not initialized");
                return -1;
            }

            foreach (var levelInfo in config.LevelInfos)
            {
                if (currentLevel + 1 == levelInfo.TheLvl)
                {
                    return levelInfo.GuysNeeded - currentAmount;
                }
            }
            return 9999;
        }
    }
}
