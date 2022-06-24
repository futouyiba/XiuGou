using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using UnityEngine;
using UnityEngine.UI;

namespace ET
{
    public class SeatConfig : SerializedMonoBehaviour
    {

        [NonSerialized,OdinSerialize] public Dictionary<int, SeatData> seats;
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }


       


    }

    
    [Serializable]
    public class SeatData
    {
        [OdinSerialize]
        public int seatId;
        [OdinSerialize]
        public Transform pivot;
        [OdinSerialize]
        public GameObject sitCharObj;
        [OdinSerialize]
        public Button btn;
        [OdinSerialize]
        public Text btnText;
        [OdinSerialize] public Transform leavePivot;

        public void Init()
        {
            if (btn)
            {
                btnText= btn.transform.GetChild(0).GetComponent<Text>();
                SetText("Empty");
            }
        }

        public void SetText(string text)
        {
            btnText.text = text;
        }

        public bool IsTaken => sitCharObj != null;

        public Vector3 pivotPos => pivot.position;
    }
}
