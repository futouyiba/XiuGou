using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    /// <summary>
    /// 跑圈系统
    /// </summary>
    public class TrainSystem : MonoBehaviour
    {
        public List<Transform> runCharacterList = new List<Transform>();//所有跑者
        public static TrainSystem instance;

        #region 画圆
        private float radius = 1.5f;//圆形半径
        //public int VertexCount = 50;//定义圆圈边定点数量，数值越高越平滑
        //public Vector3 Offset;//圆圈位移 
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

            //鼠标点击切换 加入/退出跑圈
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
            //结束跑圈
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

            //退跑重新设置剩余角色的index，移除退跑角色
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

        #region 设置跑圈半径
        /// <summary>
        /// 设置跑圈半径
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
        ///// 绘制跑圈大小
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
