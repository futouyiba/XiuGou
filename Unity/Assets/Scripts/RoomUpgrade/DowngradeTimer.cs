using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Serialization;
using UnityEngine.Timeline;
using UnityEngine.UI;
using VLB;

namespace ET
{
    public class DowngradeTimer : MonoBehaviour
    {
        [SerializeField] private int InitTime;
        [SerializeField] private Text text;
        [SerializeField] private UnityEvent TimeUpDlg;
        [SerializeField] private Light alarmLight;
        [SerializeField] private float tweenIntensityMax;
        [SerializeField] private AudioSource alarmAudioSource;
        [SerializeField] private AudioClip alarmCountDown;
        [SerializeField] private AudioClip powerFault;
        [ReadOnly] public float TimerTime;
        [ReadOnly] public bool IsTimerOn;
        // Start is called before the first frame update
        void Start()
        {
            ResetTimer();
            Hide();
        }

        static int[] alarmTime = {9, 7, 5, 3, 2, 1};
        // Update is called once per frame
        void Update()
        {
            if (IsTimerOn)
            {
                int prevtime = Mathf.FloorToInt(TimerTime);
                TimerTime -= Time.deltaTime;
                int thistime = Mathf.FloorToInt(TimerTime);
                bool isSecChange = prevtime != thistime;
                if (isSecChange)
                {
                    if (TimerTime <= 0)
                    {
                        TimerTime = 0;
                        TimeUp();
                    }

                    
                    if (alarmTime.Contains(thistime))
                    {
                        Alarm();
                    }
                    text.text = OutPutString();
                } 

                
                
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
        
        [ButtonGroup("TestBtn")]
        [Button("Start")]
        public void StartTimer()
        {
            IsTimerOn = true;
        }

        // public void PauseTimer()
        // {
        //      
        // }
        [ButtonGroup("TestBtn")]
        [Button("Stop")]
        public void StopTimer()
        {
            IsTimerOn = false;
        }
        

        /// <summary>
        /// 隐藏UI
        /// </summary>
        [ButtonGroup("TestBtn")]
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
        [ButtonGroup("TestBtn")]
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
        [ButtonGroup("TestBtn")]
        [Button("TimeUp")]
        public void TimeUp()
        {
            StopTimer();
            TimeUpDlg?.Invoke();
            PowerFaultSE();
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

        protected void Alarm()
        {
            Sequence seq = DOTween.Sequence();
            //闪红灯
            var volLight = alarmLight.GetComponent<VolumetricLightBeam>();
            volLight.intensityFromLight = true;
            seq.Append(alarmLight.DOIntensity(tweenIntensityMax, .4f)
                .OnComplete(() => alarmLight.DOIntensity(0f, .4f)));
            
            // seq.Join()
            
            seq.Play();
            //警报音效
            if (alarmAudioSource.clip != alarmCountDown) alarmAudioSource.clip = alarmCountDown;
            alarmAudioSource.Play();
        }

        protected void PowerFaultSE()
        {
            //停电音效
            if (alarmAudioSource.clip != powerFault) alarmAudioSource.clip = powerFault;
            alarmAudioSource.Play();
        }
        
    }
}
