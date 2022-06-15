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
        private void Start()
        {
            CharMgr.instance.AddCharAmountUpdateDlg(CharAmountChanged);
        }

        protected void CharAmountChanged(int amount)
        {
            var startAmout = currentAmount;
            var endAmount = amount;
            //先不管往回走的
            if(endAmount<startAmout) return;
            currentAmount = amount;
            var dict = config.UnityActionsDict;
            List<int> toExec = new List<int>();
            
            foreach (var item in dict)
            {
                if (item.Key >= startAmout && item.Key < endAmount)
                {
                    toExec.Add(item.Key);
                }
            }

            if (toExec.Count > 0)
            {
                foreach (var exec in toExec)
                {
                    var actions = dict[exec];
                    foreach (var action in actions)
                    {
                        action.Invoke();
                    }
                }
            }

        }
    }
}
