using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using Sirenix.Utilities;
using UnityEngine;

namespace ET
{
    public class CpPrepare : MonoBehaviour
    {
        // Start is called before the first frame update
        public void Parepare()
        {
            CharMgr.instance.charDict.ForEach(keyValuePair =>
            {
                keyValuePair.Value.moveSpeed = 0;
                this.GetComponent<CinemachineTargetGroup>().AddMember(keyValuePair.Value.transform, 1, 0 );
            });  
        }


    }
}
