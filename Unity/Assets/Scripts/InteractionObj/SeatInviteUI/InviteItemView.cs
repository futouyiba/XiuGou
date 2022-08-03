using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;
namespace ET
{
    /// <summary>
    /// ����Itemʵ����
    /// </summary>
    public class InviteItemEntity
    {
        public int userID;

        public string iconName;

        public string nickName;
    }
    /// <summary>
    /// ����Item������
    /// </summary>
    public class InviteItemEntityMgr : Singleton<InviteItemEntityMgr>
    {
        private Dictionary<int, InviteItemEntity> dicInviteItem;
        private List<InviteItemEntity> list;

        /// <summary>
        /// ��ʼ�������б���Ҫ������
        /// </summary>
        public void Init() {
            if (CharMgr.instance.charDict == null) return;
            list = new List<InviteItemEntity>();
            dicInviteItem = new Dictionary<int, InviteItemEntity>();
            foreach (var item in CharMgr.instance.charDict.Values)
            {
                InviteItemEntity entity = new InviteItemEntity();
                entity.userID = item.userId;
                entity.iconName = "";
                entity.nickName = item.GetName();
                dicInviteItem.Add(entity.userID, entity);
                list.Add(entity);
            }
        }
        /// <summary>
        /// ��ȡ�����б�����
        /// </summary>
        public List<InviteItemEntity> GetInviteEntityList() {
            Init();
            return list;
        }
        /// <summary>
        /// ͨ��ID��ȡItem
        /// </summary>
        /// <param name="id"></param>
        /// <returns></returns>
        public InviteItemEntity GetItemByID(int id) {
            if (dicInviteItem.ContainsKey(id))
            {
                return dicInviteItem[id];
            }
            return null;
        }
        public override void Dispose()
        {
            base.Dispose();
            dicInviteItem.Clear();
            list.Clear();
        }
    }

    /// <summary>
    /// UI��ʾ��
    /// </summary>
    public class InviteItemView : MonoBehaviour
    {
        [SerializeField]
        private Image imgPhoto;//���ͷ����ʾ

        [SerializeField]
        private TMP_Text txtNickName;//����ǳ�

        [SerializeField]
        private Button btnInvite;//���밴ť

        private InviteItemEntity m_CurrentInviteData;
        public Action<InviteItemEntity> OnInviteClick;//���밴ť�ĵ���¼�

        private void Start()
        {
            btnInvite.onClick.AddListener(OnBtnInviteClick);
        }
        public void SetUI(InviteItemEntity entity)
        {
            m_CurrentInviteData = entity;
            imgPhoto.sprite = Resources.Load<Sprite>(entity.iconName);
            txtNickName.text = entity.nickName;
        }

        private void OnBtnInviteClick()
        {
            if (OnInviteClick != null)
            {
                OnInviteClick(m_CurrentInviteData);
            }
        }
    }

}

