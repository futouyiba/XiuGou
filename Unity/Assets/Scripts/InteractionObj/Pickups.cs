using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

namespace ET
{
    [RequireComponent(typeof(Rigidbody))]
    public class Pickups : MonoBehaviour
    {
        [SerializeField] private GameObject model;
        [SerializeField] private Rigidbody rb;
        [SerializeField] private GameObject pickupEffectPrefab;
        
        
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public void LockPos()
        {
            rb.constraints = RigidbodyConstraints.FreezeAll;
        }

        public void Grant(int userId)
        {
            var victimName = CharMgr.instance.GetCharacter(userId);
            Debug.LogWarning($"{victimName} picked up, grant benefits here");
        }

        private void OnCollisionEnter(Collision collision)
        {
            // Debug.LogWarning($"collider on {collision.gameObject.name} entered!");
            if (collision.gameObject.CompareTag("Ground"))
            {
                LockPos();
            }
            else if (collision.gameObject.CompareTag("Character"))
            {
                model.SetActive(false);
                var pickupEffect = Instantiate(this.pickupEffectPrefab, transform);
                var charMain = collision.gameObject.GetComponent<CharMain>();
                Grant(charMain.userId);
            }
        }

        private void OnTriggerEnter(Collider other)
        {
            // Debug.LogWarning($"trigger on {other.gameObject.name} entered!");
        }

        private void OnTriggerExit(Collider other)
        {
            
            if (other.transform.parent.CompareTag("Ground"))
            {
                Debug.LogWarning($"trigger on {other.gameObject.name} left!");    
            }
        }
        
        
        
        
    }
}
