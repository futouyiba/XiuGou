using System.Collections;
using System.Collections.Generic;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    public class SeatMgr : MonoBehaviour
    {
        protected Dictionary<int, CharSeatData> sitData;
        [OdinSerialize] public Dictionary<int, SeatController> sofas;

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
