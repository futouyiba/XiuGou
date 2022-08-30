using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

namespace ET
{
    [AddComponentMenu("")]
    public class ClubNetworkManager : NetworkManager
    {
        //GameObject Bubble;
        GameObject ChatBubbleControl;
        public List<NetworkIdentity> PuppyIds;

        public override void OnServerAddPlayer(NetworkConnectionToClient conn)
        {
            GameObject player = Instantiate(playerPrefab);
            NetworkServer.AddPlayerForConnection(conn, player);
            //Bubble = Instantiate(spawnPrefabs.Find(prefab => prefab.name == "BlankBubble"));
            //NetworkServer.Spawn(Bubble);
            //ChatBubbleControl = GameObject.Find("ChatBubbleCanvas").GetComponent<ChatBubbleControl>();
            //if(!ChatBubbleControl.gameObject.GetComponent<NetworkIdentity>().hasAuthority) ChatBubbleControl.gameObject.GetComponent<NetworkIdentity>().AssignClientAuthority(conn);
            //ChatBubbleControl = Instantiate(spawnPrefabs.Find(prefab => prefab.name == "ChatBubbleCanvas"));
            //NetworkServer.Spawn(ChatBubbleControl, conn);
        }
        public override void OnServerDisconnect(NetworkConnectionToClient conn)
        {
            // destroy ball
            //if (Bubble != null)
                //NetworkServer.Destroy(Bubble);

            // call base functionality (actually destroys the player)
            base.OnServerDisconnect(conn);
        }

    }
}
