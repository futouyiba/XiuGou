using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Runtime.CompilerServices;
using Bolt;
using DG.Tweening;
using UnityEditor;
using UnityEngine;

namespace ET
{
    public class CameraBolt : MonoBehaviour
    {
        protected GameObject GoFollowing;
        protected bool IsFollowing;
        private static readonly Vector3 lookAtCamOffset = new Vector3(0f, 3.1f, 4.36f);
        private static readonly float lookAtCamRotX = 16f;
        private Quaternion initRot;
        private Vector3 initPos;

        private int fakeid = -1;

        [SerializeField]
        protected Animator animator;

        [SerializeField] protected GameObject testGo;
        [SerializeField] protected StateMachine sm;
        
        protected void FixedUpdate()
        {
            if (IsFollowing)
            {
                transform.position = this.GoFollowing.transform.position + lookAtCamOffset;
                // testGo.transform.position = this.GoFollowing.transform.position + lookAtCamOffset;
                var targetRot = initRot.eulerAngles + new Vector3(lookAtCamRotX, 0, 0);
                transform.rotation = Quaternion.Euler(targetRot);
            }
        }

        protected Vector3 GetFollowPos(Vector3 charPos)
        {
            return charPos + lookAtCamOffset;
        }

        protected Quaternion GetFollowRot(Quaternion originRot)
        {
            var eulers = originRot.eulerAngles + new Vector3(lookAtCamRotX, 0, 0);
            return Quaternion.Euler(eulers);
        }

        public void testMet(string info)
        {
            // go.SetActive(false);
            Debug.Log(info);
        }

        public void Init()
        {
            var transform1 = this.transform;
            this.initPos = transform1.position;
            this.initRot = transform1.rotation;
            Debug.Log($"camera bolt init finished! initpos is {initPos}m, initRot is {initRot.eulerAngles}");
        }

        public void LookAtHelper()
        {
            // var cha = CharMgr.GetRandomChar();
            if (fakeid == -1)
            {
                var randChar = CharMgr.GetRandomChar();
                if (randChar == null) return;
                else
                {
                    this.fakeid = ((KeyValuePair<int, CharMain>) randChar).Key;
                }
            }
            var cha=CharMgr.instance.GetCharacter(fakeid);
            if (cha != null)
            {
                LookAtClose(cha.gameObject);
            }
            else
            {
                TriggerEvent("Unfollow");
            }

        }

        public void LookAtClose(GameObject Go2Follow)
        {
            Debug.Log($"look at go: {Go2Follow.name}");
            animator.enabled = false;
            GoFollowing = Go2Follow;
            IsFollowing = true;
        }

        public void StopLookAtClose()
        {
            IsFollowing = false;
            GoFollowing = null;
            animator.enabled = true;
        }

        public void ResetCamera()
        {
            Transform transform2 = this.transform;
            transform2.position = this.initPos;
            transform2.rotation = this.initRot;
        }
        
        public void PlayAnimate(string stateName)
        {
            if (this.animator.enabled == false)
            {
                animator.enabled = true;
            }
            this.animator.Play($"Base Layer.{stateName}");
            // StartCoroutine(WaitForTime(time));
        }

        private IEnumerator WaitForTime(float time)
        {
            yield return new WaitForSeconds(time);
        }

        public static void TriggerEvent(string ev)
        {
            var go = Camera.main.gameObject;
            if (!go)
            {
                Debug.LogError("camera main do not exist");
                return;
            }
            var sm = go.GetComponent<StateMachine>();
            sm.TriggerUnityEvent(ev);
        }

        public void TriggerFollow()
        {
            if (!IsFollowing) TriggerEvent("FollowRand");
            else TriggerEvent("Unfollow");
        }

        /// <summary>
        /// 用动画把摄像机复位到原来的地方
        /// </summary>
        public void TweenReset()
        {
            TweenGoto(this.initPos, "TransIdle", this.initRot);
            // var duration = .5f;
            // Transform transform2 = this.transform;
            // transform2.DOMove(this.initPos, duration).OnComplete(()=>sm.TriggerUnityEvent("TransFinish"));
            // transform2.DORotateQuaternion(this.initRot, duration);
        }

        public void Tween2Idle()
        {
            TweenGoto(this.initPos, "Idle", this.initRot);
        }
        public void Tween2Follow()
        {
            var cha = CharMgr.GetRandomChar();
            if (cha!=null)
            {
                this.fakeid = ((KeyValuePair<int,CharMain>)cha).Key;
                var targetPos = GetFollowPos( ((KeyValuePair<int,CharMain>)cha).Value.transform.position);
                var targetRot = GetFollowRot(this.initRot);
                TweenGoto(targetPos, "Follow",targetRot);
            }
            else
            {
                sm.TriggerUnityEvent("Follow");
            }

        }

        protected void TweenGoto(Vector3 targetPos,string nextEv, Quaternion? targetRot=null)
        {
            var duration = 1f;
            Transform tf = this.transform;
            tf.DOMove(targetPos, duration).OnComplete(() => sm.TriggerUnityEvent(nextEv));
            if (targetRot != null)
            {
                tf.DORotateQuaternion((Quaternion)targetRot, duration);
            }
        }
        
        
        
        
    }
}
