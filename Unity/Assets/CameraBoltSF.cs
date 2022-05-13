using System.Collections;
using System.Collections.Generic;
using Bolt;
using DG.Tweening;
using UnityEngine;

namespace ET
{
    public class CameraBoltSF : MonoBehaviour
    {
        [SerializeField] private StateMachine fsm;
        // Start is called before the first frame update
        protected GameObject GoFollowing;
        protected bool IsFollowing;
        private static readonly Vector3 lookAtCamOffset = new Vector3(0f, 3.1f, 4.36f);
        private static readonly float lookAtCamRotX = 16f;
        private Quaternion initRot;
        private Vector3 initPos;
        private int fakeid = -1;
        [SerializeField]
        public Animator animator;
        CharMain myCharMain;

        private Quaternion followRotQueternion;
        private Transform myCharTransform;
        private float lerpValue;
        private Transform cameraTransform;
        private Vector3 followEuler;
        [SerializeField] private float enterIdleLerpDuration;
        [SerializeField] private float enterFollowLerpDuration;

        public void Init()
        {
            // animator = GetComponent<Animator>();
            CameraBolt.cameraBoltSF = this;
            // fsm = GetComponent<StateMachine>();
            cameraTransform = this.transform;
            this.initPos = cameraTransform.position;
            this.initRot = cameraTransform.rotation;
            followEuler = initRot.eulerAngles + new Vector3(lookAtCamRotX, 0, 0);
            followRotQueternion = Quaternion.Euler(followEuler);
        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKey(KeyCode.V))
            {
                Debug.Log("keypad1 is pressed");
                fsm.TriggerUnityEvent("Idle2Follow");
            }

            if (Input.GetKey(KeyCode.Keypad4))
            {
                fsm.TriggerUnityEvent("Lerp2Idle");
            }
                
            if (Input.GetKey(KeyCode.Keypad2))
            {
                fsm.TriggerUnityEvent("Lerp2Follow");
            }

            if (Input.GetKey(KeyCode.Keypad3))
            {
                fsm.TriggerUnityEvent("Follow2Lerp");
            }
            
            if (!IsFollowing)
            {
                return;     
            }
            
            //following logic
            cameraTransform.position = Vector3.Lerp(cameraTransform.position, myCharTransform.position + lookAtCamOffset, lerpValue);
        }
        
        public void EnterFollow()
        {
            DOTween.Kill(cameraTransform);
            IsFollowing = true;
            if (myCharMain ==null)
            {
                myCharMain = CharMgr.instance.GetMe();
                myCharTransform = myCharMain.transform;
            }

            GoFollowing = myCharMain.gameObject;// for now
            // enterFollowLerpDuration = 1.5f;
            lerpValue = 0.0f;
            DOTween.To(() => lerpValue, x => lerpValue = x, 1f, enterFollowLerpDuration);
            cameraTransform.DORotate(followEuler, enterFollowLerpDuration);
        }
        
        public void EnterIdle()
        {
            DOTween.Kill(cameraTransform);
            IsFollowing = false;
            // enterIdleLerpDuration = 1.5f;
            lerpValue = 0f;
            DOTween.To(() => lerpValue, x => lerpValue = x, 1f, enterIdleLerpDuration);
            cameraTransform.DORotate(initRot.eulerAngles, enterIdleLerpDuration);
            cameraTransform.DOMove(initPos, enterIdleLerpDuration);
        }
        
        public void SwayAnimEnd()
        {
            fsm.TriggerUnityEvent("Sway2Idle");
        }
        
        public void SwayAnimStart()
        {
            DOTween.Kill(cameraTransform);
        }

        public void TriggerEvent(string ev)
        {
            fsm.TriggerUnityEvent(ev);
        }

        public void EnterSwayToFollow()
        {
            animator.StopPlayback();
            var duration = 1.0f;
            transform.DORotate(followRotQueternion.eulerAngles, duration);
            if (myCharMain ==null)
            {
               myCharMain = CharMgr.instance.GetMe();
               myCharTransform = myCharMain.transform;
            }
            transform.DOMove(myCharTransform.position + lookAtCamOffset, duration).OnComplete(() =>
            {
                fsm.TriggerUnityEvent("Sway2FollowTweenFinish");
            });

        }
    }
}
