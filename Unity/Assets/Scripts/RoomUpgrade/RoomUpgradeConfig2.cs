using System;
using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using UnityEngine;

namespace ET
{
    public class RoomUpgradeConfig2 : SerializedMonoBehaviour
    {
        [NonSerialized,OdinSerialize] public Dictionary<int,List<ActionParam>> actions;
        // Start is called before the first frame update

    }
    
    [Serializable]
    public class ActionParam
    {
        [OdinSerialize]
        public Action<int> dlg;
        [OdinSerialize]
        public int param;

        public void Invoke()
        {
            dlg?.Invoke(param);
        }

    }
}
