using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

namespace ET
{

    public interface Iimpacter
    {
        public void Impact(GameObject go);

    }
    public class Volcano : MonoBehaviour, Iimpacter
    {
        [SerializeField] private float knockPowerCap;

        [SerializeField] private float maxDist = 2;
        [SerializeField] private GameObject riseToPivot;
        [SerializeField] private GameObject mountPivot;
        [SerializeField] private GameObject avatar;
        private bool IsRising = true;

        private CharMain mounting;
        // Start is called before the first frame update
        void Start()
        {
            
        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Keypad7))
            {
                RiseUp();
            }
        }

        public void RiseUp()
        {
            IsRising = true;

            void RiseComplete()
            {
                IsRising = false;
                CharUnmount();
                avatar.tag = "Ground";
            }
            transform.DOMove(riseToPivot.transform.position, 3f).OnComplete(RiseComplete);
        }

        public void Leave()
        {
            
        }

        public void OnCollisionEnter(Collision collision)
        {
            //volvano collision enter does not recieving any message
            Debug.LogWarning($"{collision.gameObject.name} collided volcano");
            // if (IsRising)
            // {
            //     if (collision.gameObject.CompareTag("Character"))
            //     {
            //         var charMain = collision.gameObject.GetComponent<CharMain>();
            //         var charPosition = collision.transform.position;
            //         var dirVec = (charPosition - transform.position).normalized;
            //         var forceDirVec = (dirVec + Vector3.up).normalized;
            //         var dist = Vector3.Distance(charPosition, transform.position);
            //         var multiply = Mathf.Lerp(2, 0, dist) * knockPowerCap;
            //         charMain.AddForce(forceDirVec * multiply);
            //     }
            // }

        }


        public void Impact(GameObject gameObject)
        {
            var charMain = gameObject.GetComponent<CharMain>();
            var charPosition = gameObject.transform.position;
            var dirVec = (charPosition - transform.position).normalized;
            var forceDirVec = (dirVec + Vector3.up).normalized;
            var dist = Vector3.Distance(charPosition, transform.position);
            var multiply = Mathf.Lerp(6, 3, dist) * knockPowerCap;
            charMain.AddForce(forceDirVec * multiply);
        }


        /// <summary>
        /// 把这个人放在山尖上，固定住
        /// </summary>
        /// <param name="userId"></param>
        public void CharMount(int userId)
        {
            var charMain = CharMgr.instance.GetCharacter(userId);
            charMain.MoveLock();
            mounting = charMain;
            charMain.transform.position = mountPivot.transform.position;
            charMain.transform.parent = transform;

        }

        public void CharUnmount()
        {
            if (mounting)
            {
                mounting.MoveUnlock();
                mounting.transform.parent = null;
            }
        }

        public void GeneratePickups()
        {
            
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.DrawSphere(mountPivot.transform.position,.35f);
            Gizmos.DrawCube(riseToPivot.transform.position, new Vector3(0.5f, 0.5f, 0.5f));
        }
    }
}
