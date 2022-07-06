using System.Collections;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;
using UnityEngine.Timeline;
using UnityEngine.UI;

namespace ET
{
    public class DowngradeTimer : MonoBehaviour
    {
        [SerializeField] private int InitTime;
        [SerializeField] private Text text;
        [SerializeField] private UnityEvent TimeUpDlg;
        [ReadOnly] public float TimerTime;
        [ReadOnly] public bool IsTimerOn;
        // Start is called before the first frame update
        void Start()
        {
            ResetTimer();
        }

        public void testTimeUp()
        {
            Debug.LogWarning("test time up!");
        }
        
        // Update is called once per frame
        void Update()
        {
            if (IsTimerOn)
            {
                TimerTime -= Time.deltaTime;
                if (TimerTime <= 0)
                {
                    TimerTime = 0;
                    TimeUp();
                }
                text.text = (OutPutString() != text.text) ? OutPutString() : text.text;
            }
        }

        /// <summary>
        /// 把计时器重置到TimerInSec
        /// </summary>
        [ButtonGroup("TestBtn")]
        [Button("Reset")]
        public void ResetTimer()
        {
            TimerTime = InitTime;
        }
        
        [Button("Start")]
        public void StartTimer()
        {
            IsTimerOn = true;
        }

        // public void PauseTimer()
        // {
        //      
        // }

        [Button("Stop")]
        public void StopTimer()
        {
            IsTimerOn = false;
        }
        

        /// <summary>
        /// 隐藏UI
        /// </summary>
        [Button("Hide")]
        public void Hide()
        {
            var image = GetComponent<Image>();
            image.enabled = false;
            text.gameObject.SetActive(false);
            var description = transform.GetChild(2).gameObject;
            description.SetActive(false);
        }

        /// <summary>
        /// 显示UI
        /// </summary>
        [Button("Show")]
        public void Show()
        {
            var image = GetComponent<Image>();
            image.enabled = true;
            text.gameObject.SetActive(true);
            var description = transform.GetChild(2).gameObject;
            description.SetActive(true);
        }

        /// <summary>
        /// 倒计时结束做什么
        /// </summary>
        [Button("TimeUp")]
        public void TimeUp()
        {
            StopTimer();
            TimeUpDlg?.Invoke();
        }


        /// <summary>
        /// 显示在UI上用的时间
        /// </summary>
        /// <returns></returns>
        protected string OutPutString()
        {
            var min = Mathf.FloorToInt(TimerTime / 60);
            var sec = Mathf.FloorToInt(TimerTime % 60);
            //todo: critical time应该表现有所不同，红字/闪烁?
            return $"{min}:{sec}";
        }
        
        
    }
}
