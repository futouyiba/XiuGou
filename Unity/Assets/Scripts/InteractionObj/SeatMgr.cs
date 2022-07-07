using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.OdinInspector.Editor.StateUpdaters;
using Sirenix.Serialization;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace ET
{
    public class SeatMgr : SerializedMonoBehaviour
    {
        protected Dictionary<int, CharSeatData> sitData;
        // [OdinSerialize] public Dictionary<int, SeatController> sofas;
        private SortedList<int, SeatController> sofas;


        private static SeatMgr _instance;

        public static SeatMgr Instance
        {
            get => _instance;
            private set{}
        }

        private void Awake()
        {
            if (!_instance) _instance = this;
            else
            {
                Debug.LogError($"instance of seatMgr already exists");
                Destroy(this.gameObject);
            }
                
        }

        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }


        /// <summary>
        /// 某人要坐在某位置
        /// 检查这人是不是已经坐在其他地方了
        /// </summary>
        /// <param name="userId"></param>
        /// <param name="sofaId"></param>
        /// <param name="seatId"></param>
        public void Sit(int userId, int sofaId, int seatId)
        {
            //目标座位是不是有人了
            //这人是不是已经坐了
            if (sitData.TryGetValue(userId, out var value))
            {
                LeaveSeat(userId);

            }
            

            CharSeatData data = new CharSeatData(userId, sofaId, seatId);
            sitData.Add(userId,data);
            //让人移动到座位上，若座位需要有变化也应有变化
            if (!sofas.TryGetValue(sofaId, out var controller))
            {
                Debug.LogError($"sofa id {sofaId} is not valid, exiting");
                return;
            }

            var user = CharMgr.instance.GetCharacter(userId);
            if (!user)
            {
                Debug.LogError($"char {userId} does not exist, exiting");
                return;
            }
            
            controller.TakeSeat(user.gameObject, seatId);
            user.Sit();
            
        }

        public void LeaveSeat(int userId)
        {
            var user = CharMgr.instance.GetCharacter(userId);
            if (!user)
            {
                Debug.LogError($"char {userId} does not exist, exiting");
                return;
            }
            if (!sitData.TryGetValue(userId, out var value))
            {
                Debug.LogError($"char {userId} 's sit data is not found");
                return;
            }
            
            var seat = sofas[value.sofaId];
            seat.LeaveSeat(value.seatId);
            
            user.UnSit();
        }
        
        public void RegSofa(SeatController sofa)
        {
            if (sofas.TryGetValue(sofa.Priority, out var dupSofa))
            {
                Debug.LogError($"sofa with priority ={sofa.Priority} already exists");
                return;
            }

            sofas.Add(sofa.Priority, sofa);
        }

        public void UnregSofa(SeatController sofa)
        {
            if (!sofas.TryGetValue(sofa.Priority, out var sofaGot))
            {
                Debug.LogError($"sofa with priority ={sofa.Priority} does not exist");
                return;
            }

            if (sofaGot != sofa)
            {
                Debug.LogError($"sofa with priority does not match unregging sofa");
                return;
            }

            sofas.Remove(sofa.Priority);
        }

    }
    


    public class CharSeatData
    {
        public int userId;
        public int sofaId;
        public int seatId;

        public CharSeatData(int uid, int sofaId, int seatId)
        {
            userId = uid;
            this.sofaId = sofaId;
            this.seatId = seatId;
        }
    }
}
