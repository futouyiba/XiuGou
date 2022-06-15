using System;
using System.Collections;
using System.Collections.Generic;
using ET.Utility;
using UnityEngine;

namespace ET
{
    public class RoomUpgradeMgr : MonoBehaviour
    {
        [SerializeField] private RoomUpConfig config;
        private int currentAmount;
        public int currentLevel=1;
        public Action<int> levelUp;
        private void Start()
        {
            CharMgr.instance.AddCharAmountUpdateDlg(CharAmountChanged);
            CharMgr.instance.CreateTestGuysByNum(1);
        }

        protected void CharAmountChanged(int amount)
        {
            var startAmout = currentAmount;
            var endAmount = amount;
            //先不管往回走的
            if(endAmount<startAmout) return;
            currentAmount = amount;
            var info = config.LevelInfos;
            List<LevelInfo> toExec = new List<LevelInfo>();
            
            foreach (var item in info)
            {
                if (item.GuysNeeded >= startAmout && item.GuysNeeded <= endAmount)
                {
                    toExec.Add(item);
                }
            }

            if (toExec.Count > 0)
            {
                currentLevel++;
                levelUp?.Invoke(currentLevel);
                foreach (var exec in toExec)
                {
                    exec.Effects?.Invoke();
                    // var actions = dict[exec];
                    // foreach (var action in actions)
                    // {
                    //     action.Invoke();
                    // }
                }
            }

        }
    }
}
