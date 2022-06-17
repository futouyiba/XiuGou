using System;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using UnityEngine;

namespace ET.RoomUpgrade.testConfig
{
    
    public class testOdinConfig:SerializedMonoBehaviour
    {
        [NonSerialized,OdinSerialize] public Dictionary<int,List<ActionParam>> actions;
    }

    [Serializable]
    public class ActionParams
    {
        [OdinSerialize]
        public Action<int> dlg;
        [OdinSerialize]
        public int param;

        public void Invoke()
        {
            dlg.Invoke(param);
        }

    }

}