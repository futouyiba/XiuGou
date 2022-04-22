using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace ET
{
    
    public class CharMain : MonoBehaviour
    {
        protected bool IsMoving;
        protected Vector3 moveTarget = Vector3.positiveInfinity;
        
        [SerializeField]
        protected TextMeshPro nameTmp;

        [SerializeField] protected float moveSpeed;

        protected float direction = 1;
        private float oriScaleX;
        // Start is called before the first frame update
        void Start()
        {
            oriScaleX = transform.GetChild(0).localScale.x;
            Move(DanceFloorHelper.GetRandomDanceFloorPos());
        }

        // Update is called once per frame
        void Update()
        {
            // if (!this.IsMoving)
            // {
            //     Move(DanceFloorHelper.GetRandomDanceFloorPos());
            // }
        }
        
        /// <summary>
        /// 
        /// </summary>
        /// <param name="target">归一化的位置</param>
        public void Move(Vector2 target)
        {
            if (IsMoving)
            {
                Debug.LogError("char moving, will not exec");
                return;
            }

            var scenePos = DanceFloorHelper.PosUnified2Scene(target);
            var targetPos = new Vector3(scenePos.x, this.transform.position.y, scenePos.y);
            this.IsMoving = true;
            this.moveTarget = targetPos;
            var distance = Vector3.Distance(this.transform.position, this.moveTarget);
            var duration = distance / moveSpeed;
            //转身
            var spriteChild = this.transform.GetChild(0);
            if (scenePos.x>= this.transform.position.x)
            {
                if (direction<0)
                {
                    direction = 1f;
                    spriteChild.DOScaleX(direction*oriScaleX, 0.3f);
                }
            }
            else
            {
                if (direction > 0)
                {
                    direction = -1f;
                    spriteChild.DOScaleX(direction * oriScaleX, 0.3f);
                }
            }

            this.transform.DOMove(targetPos, duration).OnComplete(()=>StartCoroutine(MoveEnd()));
            // Debug.Log($"going to {target}");
        }

        public IEnumerator MoveEnd()
        {
            this.IsMoving = false;
            this.moveTarget = Vector3.positiveInfinity;
            //
            var task = Task.Run(()=>Wait(Random.Range(3, 8)));
            yield return new WaitUntil(()=>task.IsCompleted);
            // StartCoroutine(Wait(Random.Range(3, 8)));
            Move(DanceFloorHelper.GetRandomDanceFloorPos());
            
        }

        protected static IEnumerator Wait(int time)
        {
            Debug.Log($"{Time.time} starting wait for {time} secs");
            yield return new WaitForSeconds(time);
            Debug.Log($"{Time.time} ended wait for {time} secs");
        }
        
        public void SetName(string Name)
        {
            nameTmp.SetText(Name);
        }

        public void SetNameColor(Color color)
        {
            nameTmp.color = color;
        }

        public void CharLeave()
        {
            GameObject.Destroy(this.gameObject);
        }
    }
}
