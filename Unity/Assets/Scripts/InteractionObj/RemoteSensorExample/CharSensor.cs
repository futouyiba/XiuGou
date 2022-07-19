using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public class CharSensor : RemoteSensor
    {
        public override void OnCharacterEnter(int userId)
        {
            Debug.Log($"{userId} entered area");
        }

        public override void OnCharacterLeave(int userId)
        {
            Debug.Log($"{userId} left area");
        }
    }
}
