using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

namespace ET
{
    public class CamUpBehaviour : MonoBehaviour
    {
        private PlayableDirector director;

        private GameObject vcamObj;
        // Start is called before the first frame update
        void Start()
        {
            vcamObj = transform.GetChild(0).gameObject;
            director = transform.GetChild(1).GetComponent<PlayableDirector>();
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void PlayDirector(bool isSkip)
        {
            director.Play();
            if (isSkip)
            {
                director.time = director.duration;
            }
        }

        public void InitState()
        {
            vcamObj.SetActive(false);
            var activation = transform.GetChild(2).gameObject;
            activation.SetActive(false);
            director.Stop();
            director.time = 0f;
        }
    }
}
