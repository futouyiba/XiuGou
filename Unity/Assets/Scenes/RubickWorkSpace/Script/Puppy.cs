using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Mirror;

namespace ET
{
    public class Puppy : NetworkBehaviour
    {
        public float speed = 20;
        //public Rigidbody2D rigidbody2d;

        public GameObject BubblePrefab;

        public GameObject Bubble;

        //public ChatBubbleControl ChatBubbleControl;

        // need to use FixedUpdate for rigidbody
        void FixedUpdate()
        {
            // only let the local player control the racket.
            // don't control other player's rackets
            if (isLocalPlayer && (FindObjectOfType<DJControl>().DJPuppy==null || (NetworkClient.localPlayer != FindObjectOfType<DJControl>().DJPuppy.gameObject.GetComponent<NetworkIdentity>())))
            {
                transform.Translate(new Vector3(Input.GetAxisRaw("Horizontal") * speed * Time.fixedDeltaTime, 0, 0));
                transform.Translate(new Vector3(0, 0, Input.GetAxisRaw("Vertical") * speed * Time.fixedDeltaTime));

            }
        }

        void Start()
        {
            if (isLocalPlayer)
            {
                //Bubble = Instantiate(BubblePrefab);//不放这儿出不来！！！妈的卡我一天
                //ChatBubbleControl = GameObject.Find("ChatBubbleCanvas").GetComponent<ChatBubbleControl>();
                //ChatBubbleControl.Puppy = this.gameObject;
                
            }
            ClubNetworkManager clubNetworkManager = FindObjectOfType<ClubNetworkManager>();
            clubNetworkManager.PuppyIds.Add(GetComponent<NetworkIdentity>());
        }

        /*
        public override void OnStartServer()
        {
            if (isLocalPlayer)
            {
                base.OnStartServer();
                NetworkServer.Spawn(Bubble);
            }
            
        }
        */
    }
}
