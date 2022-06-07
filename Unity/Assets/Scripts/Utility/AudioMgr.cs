using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.Serialization;

namespace ET
{
    public class AudioMgr : MonoBehaviour
    {
        [SerializeField] private Vector2Int SpectRange;
        [SerializeField] private float OpenThreshold;
        [SerializeField] private float CloseThreshold;
        //观察多久的平均值
        [SerializeField] private float InspectDuration;
        [SerializeField] private float debugAverageGain;
        // private Queue<float> gains;
        protected float[] spectrumData;
        private int inspectCount;
        // private int OpenCount;
        private int CloseCount;

        private static AudioMgr _instance;
        public static AudioMgr Instance
        {
            get => _instance;
            private set => _instance = value; 
        }

        private void Awake()
        {
            if (_instance != null)
            {
                Debug.LogError("audio mgr already exists");
                Destroy(this.gameObject);
                return;
            }

            _instance = this;
        }

        // Start is called before the first frame update
        void Start()
        {
            // CreateBeatBlocks();
            spectrumData = new float[1024];
            inspectCount = Mathf.FloorToInt(InspectDuration / Time.fixedDeltaTime);
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        private void FixedUpdate()
        {
            AudioListener.GetSpectrumData(spectrumData, 0, FFTWindow.BlackmanHarris);
            // if (gains.Count >= inspectCount)
            // {
            //     gains.Dequeue();
            // }

            var sampleLength = Mathf.Clamp((SpectRange.y - SpectRange.x), 0, 1024);
            float[] sampleArray = new float[sampleLength];
            Array.Copy(spectrumData, sampleArray, sampleLength);
            var avg = sampleArray.Average();
            debugAverageGain = avg;
            // gains.Enqueue(avg);
            if (avg > OpenThreshold)
            {
                CloseCount = 0;
                CharMgr.instance.EveryOneDanceStart();
                LightMgr.Instance.SwitchMainLight(true);
            }
            else if (avg < CloseThreshold)
            {
                CloseCount += 1;
                if (CloseCount >= inspectCount)
                {
                    //停止跳舞
                    CharMgr.instance.EveryOneDanceStop();
                    //关灯
                    LightMgr.Instance.SwitchMainLight(false);
                }
            }
        }



        public float GetChannel(int channel)
        {
            if(channel<0 || channel>= spectrumData.Length)
            {
                return 0;
            }
            return spectrumData[channel];
        }

    
    }
}
