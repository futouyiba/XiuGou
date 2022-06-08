using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public class VoidCatcher : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        // private void OnCollisionEnter(Collision collision)
        // {
        //     Debug.Log($"collided with {collision.gameObject.name}");
        // }

        private void OnTriggerEnter(Collider other)
        {
            var otherGo = other.gameObject;
            if (otherGo.CompareTag("Character"))
            {
                var charMain = otherGo.GetComponent<CharMain>();
                var userId = charMain.userId;
                var rb = otherGo.GetComponent<Rigidbody>();
                rb.velocity = Vector3.zero;
                CharMgr.instance.ResetCharPosition(userId);
                // Debug.Log($"triggered by {other.gameObject.name}");
            }
            
        }
    }
}
