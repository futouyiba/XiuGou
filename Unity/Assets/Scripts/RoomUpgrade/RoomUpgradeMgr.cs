using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Cinemachine;
using ET.RoomUpgrade;
using ET.Utility;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Playables;
using UnityEngine.Rendering.Universal;

namespace ET
{
    public class RoomUpgradeMgr : SerializedMonoBehaviour
    {
        [NonSerialized, OdinSerialize] public RoomUpConfig config;
        private int currentAmount = -1;

        [ReadOnly] public int currentLevel = 0;
        // public Action<int> levelUp;

        //reset 用的所有配置
        [NonSerialized, OdinSerialize] public List<RoomUpObjectCollection> CamUpBehaviours;

        [NonSerialized, OdinSerialize] public CameraPointCollection CameraPointCollection;

        [NonSerialized, OdinSerialize] public List<GameObject> OtherInactives;

        [NonSerialized, OdinSerialize] public List<GameObject> OtherActives;

        [NonSerialized, OdinSerialize] public UpgradableCharMgr UpCharMgr;

        [NonSerialized, OdinSerialize] public DowngradeTimer DowngradeTimer;

        [NonSerialized, OdinSerialize] public StateMachine fsm;
        // [NonSerialized,OdinSerialize] public
        private static RoomUpgradeMgr _instance;

        public static RoomUpgradeMgr instance
        {
            get => _instance;
            private set { }
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

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.I))
            {
                PowerFaultStart();
            }

            if (Input.GetKeyDown(KeyCode.O))
            {
                CharAmountChanged(100);
            }
            
        }

        /// <summary>
        /// 2022.6.30改动委托，因为需要Play Timeline时，区分是否跳过表现
        /// 
        /// </summary>
        /// <param name="amount"></param>
        protected void CharAmountChanged(int amount)
        {

            //如果在停电时进来人，也不应该刷新
            if (IsSupressLight)
            {
                return;
            }
            var startAmout = currentAmount;
            var endAmount = amount;
            //先不管往回走的
            
            //20220706 是时候管往回走要怎么样了
            if (endAmount < startAmout)
            {
                // config.LevelInfos.
                return;
            }
            currentAmount = amount;
            var info = config.LevelInfos;
            List<UnityEvent> toExec = new List<UnityEvent>();
            var camHandler = new CameraActionHandler();

            foreach (var item in info)
            {
                if (item.GuysNeeded > startAmout && item.GuysNeeded <= endAmount)
                {
                    //2022.6.30 
                    //分别加入委托，在执行时，找出等级最高的CameraBehaviour
                    //其他都skip，只有最高等级的正常Play
                    camHandler.AddAction(item.TheLvl, item.cameraBehaviour);
                    toExec.Add(item.otherBehaviour);
                    currentLevel = currentLevel < item.TheLvl ? item.TheLvl : currentLevel;
                }
            }



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

            //execute camera actions
            camHandler.Invoke();

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
                // if (currentAmount == levelInfo.GuysNeeded)
                // {
                //     return 0;
                // }
                if (currentLevel + 1 == levelInfo.TheLvl)
                {
                    return levelInfo.GuysNeeded - currentAmount - 1;
                }
            }

            return 9999;
        }


        #region power fault

        private bool IsSupressLight = false;
        /// <summary>
        /// 倒计时到了，熄灯！
        /// </summary>
        public void PowerFaultStart()
        {
            Debug.LogWarning("power fault start");
            ResetAll();
            //停一段时间，再打开
            IsSupressLight = true;
            
            TimeMgr.instance.AddTimer(10000, PowerFaultEnd);
        }

        public void PowerFaultEnd()
        {
            Debug.LogWarning($"power fault end, char amount is {CharMgr.instance.CurrentCharAmount}");
            IsSupressLight = false;
            CharAmountChanged(CharMgr.instance.CurrentCharAmount);
        }
         
        protected void ResetAll()
        {
            foreach (var camUpBehaviour in CamUpBehaviours)
            {
                camUpBehaviour.ResetAll();
            }
            CameraPointCollection.ResetCollection();
            foreach (var active in OtherActives)
            {
                active.SetActive(true);
            }
         
            foreach (var inactive in OtherInactives)
            {
                inactive.SetActive(false);
            }
                     
            // UpCharMgr.LevelTo(0);
            UpCharMgr.FloatEnd();
            UpCharMgr.SetAnimationSpeed(0);
            //charmgr update char amount and level to new level
            currentLevel = 0;
            currentAmount = -1;
        }
        

        #endregion
       
        
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
