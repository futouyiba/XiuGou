using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using DG.Tweening.Core;
using DG.Tweening.Plugins.Options;
using UnityEngine;
using VLB;

namespace ET
{
    public class ColorTweenLight : MonoBehaviour
    {
        [SerializeField] private List<Light> lights;

        [SerializeField] private List<Color> colors;

        [SerializeField] private float step_duration;

        private int curColorId = 0;
        private Sequence curSequence;

        protected Color NextColor
        {
            get
            {
                int nextId = curColorId + 1;
                if (nextId >= colors.Count) nextId = 0;
                curColorId = nextId;
                return colors[nextId];
            }
        }
        
        // Start is called before the first frame update
        void Start()
        {
            foreach (var light in lights)
            {
                light.color = colors[curColorId];
            }

            Tween2ColorChained();
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        private  TweenerCore<Color,Color,ColorOptions> Tween2Color(Light light, Color target)
        {
            return light.DOColor(target, step_duration);
        }

        private  TweenerCore<Color,Color,ColorOptions> Tween2Color(Light light, Color target, Action onComplete)
        {
            return light.DOColor(target, step_duration).OnComplete(onComplete.Invoke);
        }

        private TweenerCore<Color, Color, ColorOptions> Tween2Color(VolumetricLightBeam beam, Color target)
        {
            return DOTween.To(() => beam.color, x => beam.color = x, target, step_duration);
        }

        public void Tween2ColorChained()
        {
            if (curSequence != null)
            {
                curSequence.Kill();
                curSequence = DOTween.Sequence();
            }

            var targetColor = NextColor;
            for (int i = 0; i < lights.Count; i++)
            {
                if (i == 0)
                {
                    curSequence.Append(Tween2Color(lights[i], targetColor, Tween2ColorChained));
                    curSequence.Join(Tween2Color(lights[i].GetComponent<VolumetricLightBeam>(), targetColor));
                }
                else
                {
                    curSequence.Join(Tween2Color(lights[i], targetColor));
                    curSequence.Join(Tween2Color(lights[i].GetComponent<VolumetricLightBeam>(), targetColor));
                }
            }
            
        }
        
    }
}
