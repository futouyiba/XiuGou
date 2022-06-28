using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    public class SeatController : MonoBehaviour
    {
        [OdinSerialize] public SeatConfig config;
        
        // Start is called before the first frame update
        void Start()
        {
            foreach (var data in config.seats)
            {
                data.Value.Init();
            }
        }

        // Update is called once per frame
        void Update()
        {
        
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
            seatData.SetText("Seated");


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

    }
}
