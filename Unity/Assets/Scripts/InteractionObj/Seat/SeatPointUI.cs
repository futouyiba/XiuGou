using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace ET
{
    public class SeatPointUI : ClickableObject
    {
        public delegate void delOnClick(SeatData seatData);
        public delOnClick onClick;
        private SeatData m_SeatData;
        private Transform m_target;

        #region UI�ؼ�
        [SerializeField]
        private Image speakState;

        [SerializeField]
        private Image playerPhoto;

        #endregion
        /// <summary>
        /// ��ʼ������
        /// </summary>
        /// <param name="camera"></param>
        /// <param name="target"></param>
        /// <param name="canvas"></param>
        public Transform Target
        {
            get { return m_target; }
            set { m_target = value; }
        }
        public void SetSeatData(SeatData seatData)
        {
            m_SeatData = seatData;
        }
   
        /// <summary>
        /// ��������״̬
        /// </summary>
        /// <param name="currentState"></param>
        public void SetState(float value)
        {
            speakState.color = GetState(value);
        }

        private Color GetState(float value) {
            if (value<0.5) return Color.white;
            return (value > 1.5f) ? Color.red : Color.green;
        }

        /// <summary>
        /// ���ý�ɫͷ��
        /// </summary>
        /// <param name="playerSpr"></param>
        public void SetPhoto(Sprite playerSpr)
        {
            Show(true);
            //playerPhoto.sprite = playerSpr;
        }

        /// <summary>
        /// �Ƿ���ʾ�����Ϣ
        /// </summary>
        /// <param name="isShow"></param>
        public void Show(bool isShow)
        {
            speakState.gameObject.SetActive(isShow);
            playerPhoto.gameObject.SetActive(isShow);
        }
        private void Update()
        {
            if (Input.GetKey(KeyCode.P))
            {
                if (onClick != null) onClick(m_SeatData);
            }
        }
        protected override void OnClick()
        {
            //if (onClick != null) onClick(m_SeatData);
        }
    }
}
