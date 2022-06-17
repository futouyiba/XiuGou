using System;
using System.Collections;
using System.Collections.Generic;
using ET.Utility;
using Sirenix.OdinInspector;
using UnityEngine;

namespace ET
{
    public class RoomUpgradeMgr : MonoBehaviour
    {
        [SerializeField] private RoomUpgradeConfig2 config;
        private int currentAmount;
        [ReadOnly] public int currentLevel=0;
        public Action<int> levelUp;
        private void Start()
        {
            CharMgr.instance.AddCharAmountUpdateDlg(CharAmountChanged);
            // CharMgr.instance.CreateTestGuysByNum(1);
        }

        protected void CharAmountChanged(int amount)
        {
            var startAmout = currentAmount;
            var endAmount = amount;
            //先不管往回走的
            if(endAmount<startAmout) return;
            currentAmount = amount;
            var info = config.actions;
            List<ActionParam> toExec = new List<ActionParam>();
            
            foreach (var item in info)
            {
                if (item.Key >= startAmout && item.Key <= endAmount)
                {
                    toExec.AddRange(item.Value);
                }
            }

            if (toExec.Count > 0)
            {
                currentLevel++;
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
    }
}
