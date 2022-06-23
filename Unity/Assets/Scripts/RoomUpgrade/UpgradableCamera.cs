using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;

namespace ET
{
    public class UpgradableCamera : MonoBehaviour
    {
        [SerializeField] CameraAnimationConfig config;

        [SerializeField] private CinemachineVirtualCamera vcam;
        
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        protected void AttachToTransform(Transform follow)
        {
            vcam.Follow = follow;
        }

        protected void PlayAnimation(Animation anim)
        {
            anim.Play();
        }

        public void AttachAndPlay(Transform follow, Animation anim)
        {
            AttachToTransform(follow);
            PlayAnimation(anim);
        }


        public void ftStart0()
        {
            
        }
        
        
        
    }
}
