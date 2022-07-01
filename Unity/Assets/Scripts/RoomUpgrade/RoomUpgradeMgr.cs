using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Cinemachine;
using ET.Utility;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Playables;

namespace ET
{
    public class RoomUpgradeMgr : MonoBehaviour
    {
        [SerializeField] private RoomUpConfig config;
        private int currentAmount = -1;
        [ReadOnly] public int currentLevel=0;
        // public Action<int> levelUp;

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

        /// <summary>
        /// 2022.6.30改动委托，因为需要Play Timeline时，区分是否跳过表现
        /// 
        /// </summary>
        /// <param name="amount"></param>
        protected void CharAmountChanged(int amount)
        {
            var startAmout = currentAmount;
            var endAmount = amount;
            //先不管往回走的
            if(endAmount<startAmout) return;
            currentAmount = amount;
            var info = config.LevelInfos;
            List<UnityEvent> toExec = new List<UnityEvent>();
            var camHandler = new CameraActionHandler();
            
            foreach (var item in info)
            {
                if (item.GuysNeeded > startAmout && item.GuysNeeded <= endAmount)
                {
                    //2022.6.30 todo：
                    //分别加入委托，在执行时，找出等级最高的CameraBehaviour
                    //其他都skip，只有最高等级的正常Play
                    camHandler.AddAction(item.TheLvl, item.cameraBehaviour);
                    toExec.Add(item.otherBehaviour);
                    currentLevel = currentLevel < item.TheLvl ? item.TheLvl : currentLevel;
                }
            }
            
            //execute camera actions
            camHandler.Invoke();
            
            //execute other actions
            if (toExec.Count > 0)
            {
                // currentLevel++;
                // levelUp?.Invoke(currentLevel);
                
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


        public void SwitchCamAndPlay(CinemachineVirtualCamera targetCam, PlayableDirector targetDirector)
        {
            
        }
    }


    public class CameraActionHandler
    {
        protected KeyValuePair<int, Action<bool>> high;
        protected Dictionary<int, Action<bool>> low;

        public CameraActionHandler()
        {
            high = new KeyValuePair<int, Action<bool>>();
            low = new Dictionary<int, Action<bool>>();
        }

        public void Invoke()
        {
            foreach (var item in low)
            {
                item.Value?.Invoke(true);
            }
            high.Value?.Invoke(false);
        }

        public void AddAction(int lvl, Action<bool> dlg)
        {
            if (dlg == null)
            {
                return;
            }
            if (high.Equals(default(KeyValuePair<int, Action<bool>>)))
            {
                high = new KeyValuePair<int, Action<bool>>(lvl, dlg);
                return;
            }
            if (lvl > high.Key)
            {
                low.Add(high.Key, high.Value);
                high = new KeyValuePair<int, Action<bool>>(lvl, dlg);
                
            }
            else
            {
                low.Add(lvl, dlg);
            }
        }
        
    }
}
