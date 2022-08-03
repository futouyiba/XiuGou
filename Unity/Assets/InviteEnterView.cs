using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//using System;

namespace ET
{
    public class InviteEnterView : MonoBehaviour
    {
        [SerializeField]
        private Button BtnInvite;

        private void Awake()
        {
            BtnInvite.onClick.AddListener(OnBtnClick);
        }

        private void OnBtnClick() {
            InvitePanelCtrl.Instance.OpenView();
        }
    }
}
