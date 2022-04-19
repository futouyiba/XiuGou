using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using TMPro;
using UnityEngine;

namespace ET
{
    
    public class CharMain : MonoBehaviour
    {
        protected bool IsMoving;
        protected Vector3 moveTarget = Vector3.positiveInfinity;
        protected TextMeshPro nameTmp;
        

        [SerializeField] protected float moveSpeed;

        protected float direction = 1;
        private float oriScaleX;
        // Start is called before the first frame update
        void Start()
        {
            oriScaleX = transform.GetChild(0).localScale.x;
        }

        // Update is called once per frame
        void Update()
        {
            if (!this.IsMoving)
            {
                Move(DanceFloorHelper.GetRandomDanceFloorPos());
            }
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

            this.transform.DOMove(targetPos, duration).OnComplete(this.MoveEnd);
        }

        public void MoveEnd()
        {
            this.IsMoving = false;
            this.moveTarget = Vector3.positiveInfinity;
        }

        public void SetName(string Name)
        {
            nameTmp.SetText(name);
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
