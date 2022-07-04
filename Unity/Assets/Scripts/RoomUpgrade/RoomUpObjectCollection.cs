using System.Collections.Generic;
using UnityEngine;

namespace ET.RoomUpgrade
{
    /// <summary>
    /// 用来管理LvN下面的一系列房间物件
    /// 因为需要在解锁后关闭之前场景的所有物件，所以有此类
    /// </summary>
    public class RoomUpObjectCollection:MonoBehaviour
    {
        [SerializeField] protected List<CamUpBehaviour> camUpBehaviours;

        /// <summary>
        /// 其实InitState就会把activation部分关掉了，一般用这个足够了
        /// </summary>
        public void ResetAll()
        {
            foreach (var camUp in camUpBehaviours)
            {
                if(camUp==null) continue;
                camUp.InitState();
            }
        }
        
        /// <summary>
        /// 这个还会把每个物件的parent关掉，注意
        /// 用错函数可能会导致无法再次开启
        /// </summary>
        public void ResetAndDeactivateAll()
        {
            foreach (var camUp in camUpBehaviours)
            {
                if(camUp==null) continue;
                camUp.InitState();
                camUp.gameObject.SetActive(false);
            }

        }
        
        public void DeactiveAll()
        {
            foreach (var camUp in camUpBehaviours)
            {
                if(camUp==null) continue;
                camUp.gameObject.SetActive(false);
            }
        }

        public void ActiveAll()
        {
            foreach (var camUp in camUpBehaviours)
            {
                if(camUp==null) continue;
                camUp.gameObject.SetActive(true);
            }
        }

    }
}