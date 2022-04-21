using System;
using System.Collections;
using System.Collections.Generic;
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

        [SerializeField]
        protected Animator animator;

        [SerializeField] protected GameObject testGo;
        
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
            var cha = CharMgr.GetRandomChar();
            LookAtClose(cha);
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
            this.animator.Play($"Base Layer.{stateName}");
            // StartCoroutine(WaitForTime(time));
        }

        private IEnumerator WaitForTime(float time)
        {
            yield return new WaitForSeconds(time);
        }
    }
}
