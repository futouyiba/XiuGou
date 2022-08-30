using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

namespace ET
{
    public class ScaleReaction : MonoBehaviour
    {
        public float Gain;
        public float Duration;
        public List<Transform > Targets;
        public bool Punching = false;
        private Vector3 OgScale;

        public bool SelfPunching = false;
        public float ReactGain;
        public bool Beat = false;

        public AudioSamplerTest MusicSampler;

        // Start is called before the first frame update
        void Start()
        {
            for (int i = 0; i < this.transform.childCount; i++)
            {
                Targets.Add(this.transform.GetChild(i));
            }
            OgScale = Targets[0].transform.localScale;
        }

        void Update()
        {
            SelfScaleReact();
        }

        public void ScaleReact()
        {
            //if (!Punching)
            {
                Punching = true;
                foreach (Transform t in Targets)
                {
                    //Tweener s = t.transform.DOPunchScale(new Vector3(Gain, Gain, Gain), Duration).OnKill(() => { Punching = false; });
                    //Tweener s = t.transform.DOShakeScale(Duration, new Vector3(Gain, Gain, Gain), 10, 90f, true).OnKill(() => { Punching = false; });
                    //s.Play();
                    //t.transform.DOPunchScale(new Vector3(Gain, Gain, Gain), Duration);
                    //t.transform.DOShakeScale(Duration, new Vector3(Gain, Gain, Gain), 10, 90f, true);
                    t.transform.DOPunchScale(new Vector3(-Gain, -Gain, -Gain), Duration, 20, 0).OnKill(() => { t.localScale = OgScale; });
                    //t.transform.DOPunchScale(new Vector3(-Gain, -Gain, -Gain), Duration, 10, 0.5f).OnKill(() => { Punching = false; });
                }
            }
            
        }

        private void SelfScaleReact()
        {
            if (!SelfPunching)
            {
                SelfPunching = true;
                foreach (Transform t in Targets)
                {
                    //Tweener s = t.transform.DOPunchScale(new Vector3(Gain, Gain, Gain), Duration).OnKill(() => { Punching = false; });
                    //Tweener s = t.transform.DOShakeScale(Duration, new Vector3(Gain, Gain, Gain), 10, 90f, true).OnKill(() => { Punching = false; });
                    //s.Play();
                    //t.transform.DOPunchScale(new Vector3(Gain, Gain, Gain), Duration);
                    //t.transform.DOShakeScale(Duration, new Vector3(Gain, Gain, Gain), 10, 90f, true);
                    if (!Beat)
                    {
                        float v = MusicSampler.GetVolume();
                        //Debug.Log(v);
                        if (v > 2) v = 2f;
                        if (v < 1) v = 1f;
                        t.transform.DOPunchScale(new Vector3(-Gain * v, -Gain * v, -Gain * v), Duration, 12, 0).OnKill(() => { SelfPunching = false; });
                    }
                    else
                    {
                        float v = MusicSampler.GetVolume();
                        //Debug.Log(v);
                        if (v > 2) v = 2f;
                        if (v < 1) v = 1f;
                        t.transform.DOPunchScale(new Vector3(-ReactGain * v, -ReactGain * v, -ReactGain * v), Duration, 12, 0.2f).OnKill(() => { SelfPunching = false; });
                    }
                    //t.transform.DOPunchScale(new Vector3(-Gain, -Gain, -Gain), Duration, 10, 0.5f).OnKill(() => { Punching = false; });
                }
                Beat = false;
            }

        }
        public void OnBeat()
        {
            Beat = true;
        }
    }
}
