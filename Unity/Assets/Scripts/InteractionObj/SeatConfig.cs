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

    // [Serializable]
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

        /// <summary>
        /// ��λ��ӵ����
        /// </summary>
        public CharMain owner;

        /// <summary>
        /// ÿ����λ����ʾ����
        /// </summary>
        public SeatPointUI seatPointUI = null;//SeatUI

        /// <summary>
        /// SeatUIλ��
        /// </summary>
        [OdinSerialize]
        public Transform m_SeatUIPos;

        /// <summary>
        /// SeatUIԤ����
        /// </summary>
        private GameObject m_SeatUIPrefab;

        /// <summary>
        /// ��ʼ��SeatUIԤ���壬��ָ��λ��
        /// </summary>
        public void InitSeatUIPrefab()
        {
            m_SeatUIPrefab = Resources.Load<GameObject>("Prefabs/UI/SeatPointItem 1");
            GameObject seatUIObj =GameObject.Instantiate(m_SeatUIPrefab);
            seatUIObj.transform.SetParent(m_SeatUIPos);
            seatUIObj.transform.localScale = Vector3.one;
            seatUIObj.transform.localPosition = Vector3.zero;

            seatPointUI = seatUIObj.GetComponent<SeatPointUI>();
            seatPointUI.SetSeatData(this);
            seatPointUI.gameObject.SetActive(false);
        }
        public void Init()
        {
            if (btn)
            {
                btnText= btn.transform.GetChild(0).GetComponent<Text>();
                SetText("Empty");
            }
            InitSeatUIPrefab(); //��ʼ��SeatUIԤ���壬��ָ��λ��
            // pivot.GetComponent<SeatPoint>().SetSeatData(this);
        }

        public void SetText(string text)
        {
            if(btnText) btnText.text = text;
        }

        public bool IsTaken => sitCharObj != null;


        public Vector3 pivotPos => pivot.position;
    }
}
