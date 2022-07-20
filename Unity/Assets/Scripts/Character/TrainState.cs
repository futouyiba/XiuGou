using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    /// <summary>
    /// 角色跑火车
    /// </summary>
    public class TrainState : MonoBehaviour
    {
        private int index = -1;//在列表中的位置
        private Vector3 target;//移动到的目标点
        private float speed = 5;//移动速度
        private float rotateSpeed = 70;//旋转速度
        private float space = 0.3f;//角色间距
        private Vector3 InitPos;//角色的初始位置
        private bool isExit = false;
        public List<Transform> runCharacterList;
        public int Index
        {
            get { return index; }
            set { index = value; }
        }
        public bool IsExit
        {
            get { return isExit; }
            private set { }
        }
        private void Start()
        {
            runCharacterList = TrainSystem.instance.runCharacterList;
        }

        private void Update()
        {
            if (isExit)
            {
                ExitTrain();
            }
        }

        public void OnStart()
        {
            isExit = false;
            InitPos = transform.position;//记录run前的最后位置
            index = runCharacterList.Count;//设置所在跑酷list的index
            runCharacterList.Add(this.transform);//添加到跑酷队列
        }
        public void OnUpdate()
        {
            if (Input.GetKey(KeyCode.E))//结束跑酷
            {
                this.gameObject.GetComponent<CharMain>().TrainStop();
                runCharacterList.Clear();
            }
            JoinTrain(TrainSystem.instance.transform, TrainSystem.instance.Radius);
        }
        public void OnExit()
        {
            Reset();
        }


        /// <summary>
        /// 加入火车
        /// </summary>
        /// <param name="center"></param>
        /// <param name="r"></param>
        /// <param name="runCharacterList"></param>
        public void JoinTrain(Transform center, float r)
        {
            if (index == 0)
            {
                target = center.position + (transform.position - center.position).normalized * r;
                target.y = transform.position.y;
                Vector3 dir = (target - transform.position).normalized;
                if (Vector3.Distance(transform.position, target) > 0.02f)
                {
                    transform.Translate(dir * speed * Time.deltaTime, Space.World);
                }
                else
                {
                    transform.RotateAround(center.position, Vector3.up, rotateSpeed * Time.deltaTime);
                    transform.rotation = Quaternion.LookRotation(Vector3.back);
                }
            }
            else if (index > 0)
            {
                if (Vector3.Distance(transform.position, runCharacterList[index - 1].position) > space)
                {
                    transform.Translate((runCharacterList[index - 1].position - transform.position).normalized * speed * Time.deltaTime, Space.World);
                }
                else
                {
                    Vector3 target = target = center.position + (transform.position - center.position).normalized * r;
                    target.y = transform.position.y;
                    Vector3 dir = (target - transform.position).normalized;
                    if (Vector3.Distance(transform.position, target) > 0.1f)
                    {
                        transform.Translate(dir * speed * Time.deltaTime, Space.World);
                    }
                }

            }
        }

        /// <summary>
        /// 退出火车
        /// </summary>
        public void ExitTrain()
        {

            Vector3 dir = (InitPos - transform.position).normalized;
            if (Vector3.Distance(transform.position, InitPos) > 0.02f)
            {
                transform.Translate(dir * speed * Time.deltaTime,Space.World);
            }
            else
            {
                isExit = false;
            }
        }

        public void Reset()
        {
            index = -1;
            isExit = true;
        }
    }
}
