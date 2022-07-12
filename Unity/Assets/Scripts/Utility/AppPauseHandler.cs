using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace ET
{
    public class AppPauseHandler : MonoBehaviour
    {

        [SerializeField] private RoomUpgradeMgr roomUpMgr;
        
        // Start is called before the first frame update
        void Start()
        {
        
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        private void OnApplicationPause(bool pauseStatus)
        {
            throw new NotImplementedException();
        }


        protected void DisposeScene()
        {
            roomUpMgr.ResetAll();
            CharMgr.instance.ResetCharacters();
        }
        
        
        
    }
}
