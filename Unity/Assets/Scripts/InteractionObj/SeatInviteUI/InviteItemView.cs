using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
using TMPro;
namespace ET
{
    /// <summary>
    /// 邀请Item实体类
    /// </summary>
    public class InviteItemEntity
    {
        public int userID;

        public string iconName;

        public string nickName;
    }
    /// <summary>
    /// 邀请Item管理类
    /// </summary>
    public class InviteItemEntityMgr : Singleton<InviteItemEntityMgr>
    {
        private Dictionary<int, InviteItemEntity> dicInviteItem;
        private List<InviteItemEntity> list;

        /// <summary>
        /// 初始化邀请列表需要的数据
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
        /// 获取邀请列表数据
        /// </summary>
        public List<InviteItemEntity> GetInviteEntityList() {
            Init();
            return list;
        }
        /// <summary>
        /// 通过ID获取Item
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
    /// UI显示类
    /// </summary>
    public class InviteItemView : MonoBehaviour
    {
        [SerializeField]
        private Image imgPhoto;//玩家头像显示

        [SerializeField]
        private TMP_Text txtNickName;//玩家昵称

        [SerializeField]
        private Button btnInvite;//邀请按钮

        private InviteItemEntity m_CurrentInviteData;
        public Action<InviteItemEntity> OnInviteClick;//邀请按钮的点击事件

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

