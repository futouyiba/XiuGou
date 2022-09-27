using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.Serialization;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace ET
{
    public class SeatController : MonoBehaviour
    {
        //UserProfileSoundEffect temp;
        [OdinSerialize] public SeatConfig config;

        /// <summary>
        /// 优先级，在注册时越小排在越前面
        /// </summary>
        [SerializeField] public int Priority = 9000;
        /// <summary>
        /// 能装几个人
        /// </summary>
        [SerializeField] public int Capability = 0;

        private CharMain owner = null;//SeatOwner

        [SerializeField]
        private List<CharMain> list = null;//在座的人

        public CharMain Owner
        {
            get { return owner; }
        }

        // Start is called before the first frame update
        void Start()
        {
            foreach (var data in config.seats)
            {
                data.Value.Init();
                data.Value.seatPointUI.onClick = OnSeatUIClick;
            }
           //temp = AudioMgr.Instance.gameObject.GetComponent<UserProfileSoundEffect>();
        }

        // Update is called once per frame
        void Update()
        {
            foreach (var data in config.seats)
            {
                // data.Value.seatPointUI.SetState(UnityEngine.Random.Range(0.3f, 0.7f));//temp.state
            }
        }
        private void OnSeatUIClick(SeatData seatData)
        {
            if (list == null) list = new List<CharMain>();
            if (list.Count >= Capability)//没有座位
            {
                RoomNotify.Instance.DisplayNotify("卡坐满了，找别的座位吧", 1);
                return;
            }
            if (seatData.IsTaken)
            {
                RoomNotify.Instance.DisplayNotify("卡坐有人了，找别的座位吧", 1);
                return;
            }
            CharMain me = CharMgr.instance.GetMe();
            
            //2-maxCount位
            if (owner != null)
            {
                //给owner发申请加入
                //me.RequestJoinSeat(owner);
                return;
            }
            //owner位
            SeatMgr.Instance.Sit(me.userId,this,seatData);
            if (me.IsSit)
            {
                Sprite s = Resources.Load<Sprite>("");
                seatData.seatPointUI.SetPhoto(s);//显示玩家头像
                seatData.owner = me;
                owner = me;
                list.Add(me);
            }
        }
        
        /// <summary>
        /// 在enable时向SeatMgr注册自己
        /// </summary>
        private void OnEnable()
        {
            SeatMgr.Instance.RegSofa(this);
        }

        private void OnDisable()
        {
            SeatMgr.Instance.UnregSofa(this);
        }

        private void OnTriggerEnter(Collider other)
        {
            throw new NotImplementedException();
        }

        public void SeatBtn(int seatId)
        {
            if(!config.seats.TryGetValue(seatId, out var seatData))
            {
                Debug.LogError($"seat {seatId} is not valid");
                return;
            }

            if (seatData.IsTaken)
            {
                LeaveSeat(seatId);
            }
            else
            {
                var me = CharMgr.instance.GetMe();
                if (!me)
                {
                    Debug.LogError($"me does not exist");
                    return;
                }
                TakeSeat(me.gameObject, seatId);
            }
        }


        public void TakeSeat(GameObject charObj, int seatId)
        {
            if (!charObj.CompareTag("Character"))
            {
                Debug.LogError($"target {charObj.name} is not character");
                return;
            }
            if(!config.seats.TryGetValue(seatId, out var seatData))
            {
                Debug.LogError($"seat {seatId} is not valid");
                return;
            }
            if (seatData.IsTaken)
            {
                Debug.LogError($"seat {seatId} is already taken");
                return;
            }
            
            var sitChar = charObj.GetComponent<CharMain>();
            sitChar.Sit();
            charObj.transform.position = seatData.pivotPos;
            seatData.sitCharObj = charObj;
            //seatData.SetText("Seated");


        }

        public void LeaveSeat(int seatId)
        {
            if(!config.seats.TryGetValue(seatId, out var seatData))
            {
                Debug.LogError($"seat {seatId} is not valid");
                return;
            }
            if (!seatData.IsTaken)
            {
                Debug.LogError($"seat {seatId} is not taken");
                return;
            }

            var leaveObj = seatData.sitCharObj;
            seatData.sitCharObj = null;
            leaveObj.transform.position = seatData.leavePivot.position;
            seatData.SetText("Empty");

            var sitChar = leaveObj.GetComponent<CharMain>();
            sitChar.UnSit();

        }
        
        private void OnDrawGizmos()
        {
            
            foreach (var seat in config.seats)
            {
                var pivot = seat.Value.pivot;
                var leave = seat.Value.leavePivot;
                if (!pivot) return;
                Gizmos.color=Color.cyan;
                Gizmos.DrawSphere(pivot.position, .3f);
                if (!leave) return;
                Gizmos.color= Color.yellow;
                Gizmos.DrawSphere(leave.position, .1f);
            }
        }

        public bool IsSeatTaken(int seatId)
        {
            if (!config.seats.TryGetValue(seatId, out SeatData data))
            {
                Debug.LogError($"seatid {seatId} not valid");
                return true;
            }

            if (data.sitCharObj) return true;
            else return false;
        }

    }
}
