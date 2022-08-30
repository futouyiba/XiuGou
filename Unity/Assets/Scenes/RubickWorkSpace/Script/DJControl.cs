using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

namespace ET
{
    public class DJControl : NetworkBehaviour
    {
        // Start is called before the first frame update
        public GameObject DJPuppy;
        void Start()
        {
        
        }

        [Command(requiresAuthority =false)]
        public void CmdSetDJ(NetworkIdentity DJId)
        {
            RpcSetDJ(DJId);
        }
        [ClientRpc]
        public void RpcSetDJ(NetworkIdentity DJId)
        {
            if (DJPuppy == null)
            {
                DJPuppy = NetworkClient.spawned[DJId.netId].gameObject;
                if (DJId == NetworkClient.localPlayer.GetComponent<NetworkIdentity>()) NetworkClient.localPlayer.transform.position = this.transform.position;
            }
            else if(DJPuppy== NetworkClient.localPlayer.gameObject)
            {
                DJPuppy = null;
                NetworkClient.localPlayer.transform.position += new Vector3(-5, 0, -5);
            }
            else
            {
                if (DJId == DJPuppy.GetComponent<NetworkIdentity>()) DJPuppy.transform.position += new Vector3(-5, 0, -5);
                DJPuppy = NetworkClient.spawned[DJId.netId].gameObject;
                if (DJId == NetworkClient.localPlayer.GetComponent<NetworkIdentity>()) NetworkClient.localPlayer.transform.position = this.transform.position;
            }
            
        }

        public void OnDJButtonClicked()
        {
            CmdSetDJ(NetworkClient.localPlayer.GetComponent<NetworkIdentity>());
        }
    }
}
