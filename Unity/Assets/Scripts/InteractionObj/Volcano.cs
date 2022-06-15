using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using Random = UnityEngine.Random;

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
        [SerializeField] private Animation animation;
        [SerializeField] private Transform pickupOrigin;
        private bool IsRising = true;

        private CharMain mounting;

        private Vector3 initPos;

        [Header("Pickup Config")] 
        [SerializeField] private List<GameObject> pickupPrefabs;

        [SerializeField] private List<int> pickupWeights;

        [SerializeField] private int generateAmount;

        [SerializeField] private Vector2 launchVel;
        // Start is called before the first frame update
        void Start()
        {
            animation.Stop();
            initPos = this.transform.position;
        }

        // Update is called once per frame
        void Update()
        {
            if (Input.GetKeyDown(KeyCode.Keypad7))
            {
                RiseUp();
            }

            if (Input.GetKeyDown(KeyCode.Keypad8))
            {
                Leave();
            }
        }

        public void RiseUp()
        {
            IsRising = true;
            animation.Play("shake");
            void RiseComplete()
            {
                IsRising = false;
                CharUnmount();
                avatar.tag = "Ground";
                animation.Play("light");
                for (int i = 0; i < 10; i++)
                {
                    animation.PlayQueued("light");
                }
                GeneratePickups();

            }
            transform.DOMove(riseToPivot.transform.position, 3.333f).OnComplete(RiseComplete);
        }

        public void Leave()
        {
            IsRising = true;
            animation.Play("shake");
            avatar.tag = "Impacter";
            void LeaveComplete()
            {
                IsRising = false;
            }
            transform.DOMove(initPos, 3.333f).OnComplete(LeaveComplete);
        }

        public void OnCollisionEnter(Collision collision)
        {
            //volvano collision enter does not recieving any message
            // Debug.LogWarning($"{collision.gameObject.name} collided volcano");
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
            var transform1 = charMain.transform;
            transform1.position = mountPivot.transform.position;
            transform1.parent = transform;

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
            for (int i = 0; i < generateAmount; i++)
            {
                var pickupPrefab = GetPickupByWeight();
                var pickupInst = Instantiate(pickupPrefab, transform);
                pickupInst.transform.position = pickupOrigin.position;
                var rotUp = Random.Range(0, 360f);
                var launchDir = (Quaternion.AngleAxis(rotUp, Vector3.up) * Vector3.forward + Vector3.up).normalized;
                var vel = Random.Range(launchVel.x, launchVel.y);
                pickupInst.GetComponent<Rigidbody>().velocity = launchDir * vel;

            }
        }

        public GameObject GetPickupByWeight()
        {
            if (pickupPrefabs.Count != pickupWeights.Count)
            {
                Debug.LogError($"prefabs are {pickupPrefabs.Count}, but weights are {pickupWeights.Count}");
                return null;
            }

            int cycCount = pickupPrefabs.Count;
            var weightTotal = pickupWeights.Sum();
            int randomChosen = Random.Range(0, weightTotal);
            int curWeight = 0;
            GameObject result = null;
            for (int i = 0; i < cycCount; i++)
            {
                curWeight += pickupWeights[i];
                if (curWeight > randomChosen)
                {
                    result = pickupPrefabs[i];
                    break;
                }
            }
            return result;
        }

        private void OnDrawGizmosSelected()
        {
            Gizmos.DrawSphere(mountPivot.transform.position,.35f);
            Gizmos.DrawCube(riseToPivot.transform.position, new Vector3(0.5f, 0.5f, 0.5f));
        }


        protected void PlayAnimation()
        {
            
        }


    }
}
