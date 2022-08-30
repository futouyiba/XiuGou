using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using LivelyChatBubbles;
using TMPro;
using Mirror;

namespace ET
{
    public class ChatBubbleControl : NetworkBehaviour
    {
        //public ChatBubble Bubble;
        public GameObject BubblePrefab;
        public GameObject Puppy;
        public GameObject BlankBubble;
        public List<GameObject> BubblePoolList;
        public GameObject BubblePool;

        public Queue<int> ActiveBubble;
        public int BubbleIndex;

        private Vector3 PoolPosition;
        

        // Update is called once per frame
        void Start()
        {
            if (isClient)
            {
                Puppy = NetworkClient.localPlayer.gameObject;
                ActiveBubble = new Queue<int>();
                if (hasAuthority)
                {
                    BubblePool = new GameObject("BubblePool");
                    InitBubble();
                    GameObject.Find("InputCanvas").GetComponent<InputCommend>().ChatBubbleControl = this;
                    this.transform.SetParent(Puppy.transform);
                }
            }
            
            //if (hasAuthority)
            {
                //GameObject.Find("InputCanvas").GetComponent<InputCommend>().ChatBubbleControl = this;
                //this.transform.SetParent(Puppy.transform);
                //Puppy.GetComponent<NetworkTransformChild>().target = this.transform;
            }

        }
        /*
        void FixedUpdate()
        {
            if (isClient)
            {
                if (BlankBubble.gameObject.activeInHierarchy)
                {
                    BlankBubble.transform.position = Puppy.transform.position;
                    Debug.Log("!!!");
                }
            }

        }
        */
        public void SetBubble_Abandoned(string message)
        {
            //Bubble.gameObject.SetActive(true);
            //Bubble.MessageComponent.text = message;

        }

        [Command]
        public void CmdSetBubble(string message,Vector3 pos,NetworkIdentity networkIdentity)
        {
            //this.GetComponent<NetworkIdentity>().AssignClientAuthority(connectionToClient);
            RpcSetBubble(message,pos,networkIdentity);
        }

        [ClientRpc]
        public void RpcSetBubble(string message,Vector3 pos, NetworkIdentity networkIdentity)
        {
             NetworkClient.localPlayer.GetComponent<ChatBubbleControl>().SetBubble(message, pos,networkIdentity);
        }

        public void SetBubble(string message, Vector3 pos,NetworkIdentity networkIdentity)
        {
            Debug.Log(message);

            FindAvailableBubb();
            //if blankbubble==null return
            BlankBubble.transform.position = pos;
            BlankBubble.transform.SetParent(NetworkClient.spawned[networkIdentity.netId].transform);//此为神来之笔，其中玄妙，不可言说（懒得记了
            //BlankBubble.transform.GetChild(0).localScale = new Vector3(message.Length * 0.1f,1,1);
            if (message.Length < 4)
            {
                BlankBubble.transform.GetChild(0).GetComponent<SpriteRenderer>().size = new Vector2(0.75f, 0.5f);
            }
            else BlankBubble.transform.GetChild(0).GetComponent<SpriteRenderer>().size = new Vector2(message.Length * 0.25f, 0.5f);
            //BlankBubble.transform.GetChild(0).GetComponent<RectTransform>().sizeDelta = new Vector2(message.Length * 0.1f, 0.5f);
            BlankBubble.gameObject.SetActive(true);
            BlankBubble.GetComponentInChildren<TMP_Text>().text = message;
            BubbleIndex = BubblePoolList.IndexOf(BlankBubble);
            ActiveBubble.Enqueue(BubbleIndex);
            Invoke("BubbleOff", 5f);
        }
        
        private void FindAvailableBubb()
        {
            foreach (GameObject b in BubblePoolList)
            {
                if (!b.activeInHierarchy)
                {
                    BlankBubble = b;
                    return;
                }
            }
        }
        

        public void SetOwner()
        {
            //Puppy.AttachedBubble = Bubble;
        }

        public void BubbleOff()
        {
            //BlankBubble.SetActive(false);
            BubbleIndex = ActiveBubble.Dequeue();
            BubblePoolList[BubbleIndex].gameObject.SetActive(false);
            BubblePoolList[BubbleIndex].transform.SetParent(BubblePool.transform);
        }
        
        private void InitBubble()
        {
            for(int i=0;i<10; i++)
            {
                GameObject b;
                b = Instantiate(BubblePrefab);
                BubblePoolList.Add(b);
                b.transform.SetParent(BubblePool.transform);
                b.SetActive(false);
            }
            //BubblePrefab.GetComponent<NetworkIdentity>().AssignClientAuthority(NetworkClient.localPlayer.gameObject.GetComponent<NetworkIdentity>().connectionToClient);
            //Puppy = NetworkClient.localPlayer.gameObject;
            ///BlankBubble = Puppy.GetComponent<Puppy>().Bubble;
            //BlankBubble = Instantiate(BubblePrefab);
            //NetworkServer.Spawn(BlankBubble);//Spawns an object and also assigns Client Authority to the specified client.
        }
        

        /*
        public override void OnStartClient()
        {
            base.OnStartClient();
            if (isClient)
            {
                //Puppy = NetworkClient.localPlayer.gameObject;
                InitBubble();
            }
        }
        
        public override void OnStartServer()
        {
            base.OnStartServer();
            if (isClient)
            {
                Puppy = NetworkClient.localPlayer.gameObject;
                Debug.Log(NetworkClient.localPlayer.gameObject);
                Debug.Log(isClient);
            }

        }
        */

    }
}
