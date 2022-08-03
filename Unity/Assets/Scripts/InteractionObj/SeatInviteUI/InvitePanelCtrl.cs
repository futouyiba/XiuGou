using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
namespace ET
{
    public class InvitePanelCtrl : Singleton<InvitePanelCtrl>
    {
        /// <summary>
        /// 邀请界面
        /// </summary>
        private InviteView inviteView;

        /// <summary>
        /// 打开界面的方法
        /// </summary>
        public void OpenView() {
            OpenInviteView(() => {
                inviteView.SetUI(InviteItemEntityMgr.Instance.GetInviteEntityList());
            });
        }

        /// <summary>
        /// 打开邀请界面
        /// </summary>
        private void OpenInviteView(Action onShow = null) {
            
            GameObject obj = null;
            obj = Resources.Load<GameObject>("Prefabs/UI/PanelInvite");
            if (obj == null) return;
            obj = GameObject.Instantiate(obj);
            obj.transform.SetParent(RoomNotify.Instance.transform);//设置父物体
            obj.transform.localScale = Vector3.one;
            obj.transform.localPosition = Vector3.zero;
            obj.GetComponent<RectTransform>().sizeDelta = Vector2.zero;
            obj.SetActive(true);

            inviteView = obj.GetComponent<InviteView>();
            if (inviteView == null) return;
            inviteView.OnClick = OnInviteItemClick;
            if (onShow != null) onShow();
        }

        #region 回调函数
        private void OnInviteItemClick(InviteItemEntity entity)
        {
            Debug.Log(entity.userID + "------------------------------------");
        }
        #endregion
    }
}
