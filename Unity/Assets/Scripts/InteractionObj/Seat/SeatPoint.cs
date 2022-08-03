using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    /// <summary>
    /// ����Ƿ�trigger����λ
    /// </summary>
    public class SeatPoint : RemoteSensor
    {
        /// <summary>
        /// ÿ����λ
        /// </summary>
        private SeatData m_SeatData = null;

        public void SetSeatData(SeatData seatData) {
            m_SeatData = seatData;
        }

        public override void OnCharacterEnter(int userId)
        {
            if (userId != CharMgr.instance.GetMe().userId) return;
            if (m_SeatData == null) return;
            m_SeatData.seatPointUI.gameObject.SetActive(true);
            m_SeatData.seatPointUI.Show(false);
        }
        public override void OnCharacterLeave(int userId)
        {
            if (userId != CharMgr.instance.GetMe().userId) return;
            if (m_SeatData == null) return;
            m_SeatData.seatPointUI.gameObject.SetActive(false);
        }
    }
}
