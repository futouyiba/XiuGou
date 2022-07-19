using System;
using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using TMPro;
using UnityEngine;

namespace ET
{
    public class RoomNotify : MonoBehaviour
    {

        [ReadOnly] private int timerId;

        [SerializeField] private GameObject uiObj;

        [SerializeField] private TextMeshProUGUI tmp;

        #region singleton

        private static RoomNotify _instance;

        public static RoomNotify Instance
        {
            get => _instance;
            private set => _instance = value;
        }

        private void Awake()
        {
            if (_instance == null) _instance = this;
            else
            {
                Debug.LogError($"instance of roomnotify already exists");
                Destroy(gameObject);
            }
        }


        #endregion
        
        // Start is called before the first frame update
        void Start()
        {
            timerId= Int32.MinValue;
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        protected void Show()
        {
            uiObj.SetActive(true);
            
        }

        protected void Hide()
        {
            uiObj.SetActive(false);
        }

        protected void UpdateText(string text)
        {
            tmp.SetText(text);
        }

        [Button("Display Notify")]
        public void DisplayNotify(string text, int displayTime)
        {
            UpdateText(text);
            if (timerId > 0)
            {
                TimeMgr.instance.RemoveTimer(timerId);
            }
            Show();
            timerId = TimeMgr.instance.AddTimer(displayTime, EndNotify);
        }

        public void EndNotify()
        {
            timerId=Int32.MinValue;
            Hide();
        }
        
    }
}
