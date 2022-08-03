using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace ET
{
    public class InviteView : MonoBehaviour
    {
        /// <summary>
        /// 搜索输入框
        /// </summary>
        [SerializeField]
        private TMP_InputField inputSearch;

        /// <summary>
        /// 返回按钮
        /// </summary>
        [SerializeField]
        private Button btnBack;

        /// <summary>
        /// InviteItem预制体
        /// </summary>
        [SerializeField]
        private GameObject InviteItemPrefab;

        /// <summary>
        /// 父物体
        /// </summary>
        [SerializeField]
        private Transform InviteItemParent;

        private List<GameObject> m_InviteItemObjList = new List<GameObject>();
        public delegate void delOneClick(InviteItemEntity entity);
        public delOneClick OnClick;
        private void Start()
        {
            btnBack.onClick.AddListener(OnBtnBackClick);
        }
        /// <summary>
        /// 返回按钮的回调函数
        /// </summary>
        private void OnBtnBackClick()
        {
            Destroy(this.gameObject);
            //this.gameObject.SetActive(false);
        }
        /// <summary>
        /// 设置邀请列表
        /// </summary>
        /// <param name="list"></param>
        public void SetUI(List<InviteItemEntity> list)
        {
            for (int i = 0; i < list.Count; i++)
            {
                GameObject go = Instantiate(InviteItemPrefab, InviteItemParent);
                go.SetActive(true);
                go.transform.localPosition = Vector3.zero;
                go.transform.localScale = Vector3.one;
                m_InviteItemObjList.Add(go);

                go.GetComponent<InviteItemView>().OnInviteClick = OnInviteClick;
                go.GetComponent<InviteItemView>().SetUI(list[i]);
            }
        }
        private void OnInviteClick(InviteItemEntity entity)
        {
            Debug.Log(entity.userID+"++++++++++++++++++++++++++++++++++++++++++");
            if (OnClick!=null)
            {
                OnClick(entity);
            }
        }
    }
}

