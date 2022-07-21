using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    /// <summary>
    /// ��ɫ�ܻ�
    /// </summary>
    public class TrainState : MonoBehaviour
    {
        #region ����
        private int index = -1;//���б��е�λ��
        private Vector3 target;//�ƶ�����Ŀ���
        private float speed = 5;//�ƶ��ٶ�
        private float rotateSpeed = 70;//��ת�ٶ�
        private float space = 0.3f;//��ɫ���
        private Vector3 InitPos;//��ɫ�ĳ�ʼλ��
        private bool isExit = false;//�Ƿ��˳���Ȧ
        public List<Transform> runCharacterList;//��Ȧ��ɫ�б� 
        #endregion

        #region ����
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
        #endregion

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

        #region Train״̬�õ���3������
        public void OnStart()
        {
            isExit = false;
            InitPos = transform.position;//��¼runǰ�����λ��
            index = runCharacterList.Count;//���������ܿ�list��index
            runCharacterList.Add(this.transform);//��ӵ��ܿ����
        }
        public void OnUpdate()
        {
            JoinTrain(TrainSystem.instance.transform, TrainSystem.instance.Radius);
        }
        public void OnExit()
        {
            Reset();
        }
        #endregion


        #region ����/�˳�  ��Ȧ
        /// <summary>
        /// �����
        /// </summary>
        /// <param name="center"></param>
        /// <param name="r"></param>
        /// <param name="runCharacterList"></param>
        private void JoinTrain(Transform center, float r)
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
        /// �˳���
        /// </summary>
        private void ExitTrain()
        {

            Vector3 dir = (InitPos - transform.position).normalized;
            if (Vector3.Distance(transform.position, InitPos) > 0.02f)
            {
                transform.Translate(dir * speed * Time.deltaTime, Space.World);
            }
            else
            {
                isExit = false;
            }
        } 
        #endregion

        /// <summary>
        /// ����
        /// </summary>
        private void Reset()
        {
            index = -1;
            isExit = true;
        }
    }
}
