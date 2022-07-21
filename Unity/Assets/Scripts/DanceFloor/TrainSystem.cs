using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    /// <summary>
    /// ��Ȧϵͳ
    /// </summary>
    public class TrainSystem : MonoBehaviour
    {
        public List<Transform> runCharacterList = new List<Transform>();//��������
        public static TrainSystem instance;

        #region ��Բ
        private float radius = 1.5f;//Բ�ΰ뾶
        //public int VertexCount = 50;//����ԲȦ�߶�����������ֵԽ��Խƽ��
        //public Vector3 Offset;//ԲȦλ�� 
        #endregion

        public float Radius
        {
            get { return radius; }
        }

        private void Awake()
        {
            instance = this;
        }

        void Update()
        {
            SetRadius(RoomUpgradeMgr.instance.currentLevel);

            //������л� ����/�˳���Ȧ
            if (Input.GetMouseButtonUp(0))
            {
                Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit, Mathf.Infinity, 1 << 10))
                {
                    Transform trans = hit.transform;
                    TrainState onRunTrain = trans.GetComponent<TrainState>();

                    if (onRunTrain.Index == -1)
                    {
                        trans.GetComponent<CharMain>().TrainStart();
                    }
                    else
                    {
                        trans.GetComponent<CharMain>().TrainStop();
                    }
                }
            }
            //������Ȧ
            if (Input.GetKey(KeyCode.E))
            {
                if (runCharacterList != null && runCharacterList.Count > 0)
                {
                    foreach (var item in runCharacterList)
                    {
                        item.GetComponent<CharMain>().TrainStop();
                    }
                    runCharacterList.Clear();
                }
            }

            //������������ʣ���ɫ��index���Ƴ����ܽ�ɫ
            if (runCharacterList != null && runCharacterList.Count > 0)
            {
                for (int i = runCharacterList.Count - 1; i >= 0; i--)
                {
                    if (runCharacterList[i].GetComponent<TrainState>().Index == -1)
                    {
                        for (int j = i + 1; j < runCharacterList.Count; j++)
                        {
                            runCharacterList[j].GetComponent<TrainState>().Index -= 1;
                        }
                        runCharacterList.Remove(runCharacterList[i]);
                    }
                }
            }
        }

        #region ������Ȧ�뾶
        /// <summary>
        /// ������Ȧ�뾶
        /// </summary>
        private void SetRadius(int currentLevel)
        {
            if (currentLevel >= 24)
            {
                radius = 2;
            }
            else if (currentLevel >= 7)
            {
                radius = 1.5f;
            }
            else if (currentLevel >= 3)
            {
                radius = 1;
            }
        } 
        #endregion

        ///// <summary>
        ///// ������Ȧ��С
        ///// </summary>
        //private void OnDrawGizmos()
        //{
        //    float deltaTheta = (2f * Mathf.PI) / VertexCount;
        //    float theta = 0f;
        //    Vector3 oldPos = transform.position;
        //    for (int i = 0; i < VertexCount + 1; i++)
        //    {
        //        Vector3 pos = new Vector3(Radius * Mathf.Cos(theta), 0f, Radius * Mathf.Sin(theta));
        //        Gizmos.DrawLine(oldPos, transform.position + pos + Offset);
        //        Gizmos.color = Color.red;
        //        oldPos = transform.position + pos + Offset;

        //        theta += deltaTheta;
        //    }
        //}
    }
}
