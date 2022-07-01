using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Timeline;

namespace ET
{
    public class testTimelineMgr : MonoBehaviour
    {

        [SerializeField] public PlayableDirector[] directors;
        // Start is called before the first frame update
        void Start()
        {
            foreach (var director in directors)
            {
                director.Stop();
            }

        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Keypad1))
            {
                PlayTimeline(0);
            }
            if (Input.GetKeyDown(KeyCode.Keypad2))
            {
                PlayTimeline(1,true);
                PlayTimeline(2);
            }
            if (Input.GetKeyDown(KeyCode.Keypad3))
            {
                PlayTimeline(2,true);
            }
        }

        public void PlayTimeline(int id, bool isSkip = false)
        {
            if (id >= directors.Length)
            {
                return;
            }

            // director.playableAsset = assets[id];
            var director = directors[id];
            director.Play();
            if (isSkip)
            {
                director.time = director.duration;
            }
        }
        
        
    }
}
