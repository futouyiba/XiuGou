using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    [RequireComponent(typeof(SeatMgr))]
    public class testSofaMgr : SerializedMonoBehaviour
    {
        private SeatMgr seatMgr;
        // Start is called before the first frame update
        void Start()
        {
            seatMgr = GetComponent<SeatMgr>();
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        [Header("testSit")]
        [NonSerialized, OdinSerialize] public int userId;
        [NonSerialized, OdinSerialize] public int micId;
        [ButtonGroup("Sits")][Button("Sit")]
        public void Sit()
        {
            seatMgr.Sit(userId, micId);
        }

        [ButtonGroup("Sits")][Button("Unsit")]
        public void Unsit()
        {
            seatMgr.LeaveSeat(userId);
        }
    }
}
