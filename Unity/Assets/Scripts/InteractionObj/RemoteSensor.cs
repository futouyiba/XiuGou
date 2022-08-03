using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    [RequireComponent(typeof(Collider))]
    public abstract class RemoteSensor : MonoBehaviour
    {

        [SerializeField] private Collider triggerCollider;
        // Start is called before the first frame update
        void Start()
        {
            OnStart();
        }

        // Update is called once per frame
        void Update()
        {
            OnUpdate();
        }


        // protected void OnCollisionEnter(Collision collision)
        // {
        //     if (collision.gameObject.CompareTag("Character"))
        //     {
        //         OnCharacterEnter(100);
        //     }
        // }

        protected void OnTriggerEnter(Collider other)
        {
            
            if (other.CompareTag("Character"))
            {
                var charMain = other.GetComponent<CharMain>();
                OnCharacterEnter(charMain.userId);
            }
        }

        protected void OnTriggerExit(Collider other)
        {
            if (other.CompareTag("Character"))
            {
                var charMain = other.GetComponent<CharMain>();
                OnCharacterLeave(charMain.userId);
            }
        }

        protected void OnDrawGizmos()
        {
            var sphereCollider = triggerCollider as SphereCollider;
            if (!sphereCollider) return;
            Gizmos.DrawWireSphere(transform.position+sphereCollider.center, sphereCollider.radius);
        }

        protected virtual void OnStart() { }
        protected virtual void OnUpdate() { }
        public abstract void OnCharacterEnter(int userId);

        public abstract void OnCharacterLeave(int userId);

    }
}
