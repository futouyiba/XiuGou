using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace ET
{
    public class SeatMgr : SerializedMonoBehaviour
    {
        //<userid, seat data>
        protected Dictionary<int, CharSeatData> sitData;//所有有角色座位
        // [OdinSerialize] public Dictionary<int, SeatController> sofas;
        //<sofa id,sofa  controller>
        private SortedList<int, SeatController> sofas;//所有沙发

        

        #region singleton

        private static SeatMgr _instance;

        public static SeatMgr Instance
        {
            get => _instance;
            private set{}
        }

        #endregion
       

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
            sofas = new SortedList<int, SeatController>();
            sitData = new Dictionary<int, CharSeatData>();
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void Sit(int userId,SeatController seatCtrl, SeatData seatData) {
            GetMicID(seatCtrl.Priority, seatData.seatId);
            Sit(userId, GetMicID(seatCtrl.Priority,seatData.seatId)); 
        }

        /// <summary>
        /// 某人要坐在某位置
        /// 检查这人是不是已经坐在其他地方了
        /// </summary>
        /// <param name="userId"></param>
        /// <param name="sofaId"></param>
        /// <param name="seatId"></param>
        public void Sit(int userId, int micId)//坐位
        {
            //目标座位是不是有人了,20220708,除非出错，否则应该不会有人才对
            //这人是不是已经坐了
            CharSeatData originData = null;
            if (sitData.TryGetValue(userId, out originData))
            {
                if(originData.IsAlreadySat) LeaveSeat(userId);
            }
            else
            {
                originData = new CharSeatData(userId, micId);
                sitData.Add(userId, originData);
            }

            var sitInst = FindSeat(micId);
            if (!sofas.TryGetValue(sitInst.sofaId, out SeatController sofa))
            {
                Debug.LogError($"sofa id {sitInst.sofaId} is not valid, exiting");
                return;
            }

            if (sofa.IsSeatTaken(sitInst.seatId))
            {
                Debug.LogError($"seat {sitInst.seatId} on sofa {sitInst.sofaId} is taken ");
                return;
            }
            var user = CharMgr.instance.GetCharacter(userId);
            if (!user)
            {
                Debug.LogError($"char {userId} does not exist, exiting");
                return;
            }

          
            
            //让人移动到座位上，若座位需要有变化也应有变化
            sofa.TakeSeat(user.gameObject, sitInst.seatId);
            //user.Sit();
            originData.UpdateInstData(sitInst);
            
        }
   


        public void LeaveSeat(int userId)
        {
            var user = CharMgr.instance.GetCharacter(userId);
            if (!user)
            {
                Debug.LogError($"char {userId} does not exist, exiting");
                return;
            }
            if (!sitData.TryGetValue(userId, out var charSeatData))
            {
                Debug.LogError($"char {userId} 's sit data is not found");
                return;
            }
            
            //find sofa,leave seat
            
            var seat = sofas[charSeatData.instData.sofaId];
            seat.LeaveSeat(charSeatData.instData.seatId);
            
            //user unsit
            user.UnSit();
            
            //SeatInstData update
            charSeatData.instData = null;
        }
        /// <summary>
        /// 添加到字典
        /// </summary>
        /// <param name="sofa"></param>
        public void RegSofa(SeatController sofa)
        {
            if (sofas.TryGetValue(sofa.Priority, out var dupSofa))
            {
                Debug.LogError($"sofa with priority ={sofa.Priority} already exists");
                return;
            }

            sofas.Add(sofa.Priority, sofa);
        }

        /// <summary>
        /// 从字典移除
        /// </summary>
        /// <param name="sofa"></param>
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
            
            //所有这个沙发上的instData都需要Refresh
            foreach (var sit in sitData)
            {
                if (sit.Value.instData.sofaId == sofa.Priority)
                {
                    sit.Value.IsInstNeedRefresh = true;
                }
            }
        }
        private int GetMicID(int sofaID,int seatID)
        {
            int micID = 0;
            foreach (var sofa in sofas)
            {
                if (sofaID==sofa.Value.Priority)
                {
                    micID += seatID;
                    return micID;
                }
                micID += sofa.Value.Capability;
            }
            return -1;
        }

        protected SeatInstData FindSeat(int micId)
        {
            int sofaId = -1;
            int seatId = -1;
            var counter = 0;
            
            foreach (var sofa in sofas)
            {
                if (counter <= micId && counter + sofa.Value.Capability>micId)
                {
                    sofaId = sofa.Value.Priority;
                    for (int i = 0; i < sofa.Value.Capability; i++)
                    {
                        if (counter + i == micId)
                        {
                            seatId = i;
                        }
                    }

                    if (sofaId >= 0 && seatId >= 0)
                    {
                        SeatInstData instData = new SeatInstData
                        {
                            sofaId = sofaId,
                            seatId = seatId
                        };
                        return instData;
                    }
                }

                counter += sofa.Value.Capability;

            }
            Debug.LogError($"sofa position for {micId} does not found");
            return null;

        }


        public void RefreshSitInstDataDelayed(int afterTime)
        {
            TimeMgr.instance.AddTimer(afterTime, RefreshSitInstData);
        }
        public void RefreshSitInstData()
        {
            foreach (var sit in sitData)
            {
                if (sit.Value.IsInstNeedRefresh )
                {
                    var newInstData = FindSeat(sit.Value.micId);
                    if (newInstData==null)
                    {
                        Debug.LogError($"error finding new seat for {sit.Value.micId}");
                        continue;
                    }
                    sit.Value.UpdateInstData(newInstData);
                    
                    //找到对应sofa 然后takeseat
                    if (!sofas.TryGetValue(newInstData.sofaId, out var sofa))
                    {
                        Debug.LogError($"sofa {newInstData.sofaId} cannot find");
                        return;
                    }

                    var userObj = CharMgr.instance.GetCharacter(sit.Value.userId);
                    if (!userObj)
                    {
                        Debug.LogError($"user obj for {sit.Value.userId} does not exist");
                        return;
                    }
                    sofa.TakeSeat(userObj.gameObject, newInstData.seatId);
                }
                    
            }
        }

    }
    


    public class CharSeatData
    {
        
        public int userId;
        public int micId;
        //当角色坐的座位下线了，这个会被置为true
        public bool IsInstNeedRefresh = false;
        
        //abandon on seat refresh
        public SeatInstData instData;

        public CharSeatData(int uid, int micId)
        {
            userId = uid;
            this.micId = micId;
            // this.sofaId = sofaId;
            // this.seatId = seatId;
        }

        public void UpdateInstData(SeatInstData instData)
        {
            this.instData = instData;
        }

        public bool IsAlreadySat => (instData != null && !IsInstNeedRefresh);


    }

    public class SeatInstData
    {
        public int sofaId;
        public int seatId;

    }
    
    
}
