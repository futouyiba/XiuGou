using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Unity.VisualScripting;
using Mirror;


namespace ET
{
    public class InputCommend : NetworkBehaviour
    {
        //[SerializeField] private StateMachine CameraFSM;


        [SerializeField] private CameraState CameraState;
        [SerializeField] private TMP_InputField InputField;

        private List<string> CommendList = new List<string>();

        public ChatBubbleControl ChatBubbleControl;

        public DJControl DJControl;

        private bool BubbleAvailable = true;
        private float BubbleCooldownTime = 5f;

        private ClubNetworkManager clubNetworkManager;


        // Start is called before the first frame update
        void Start()
        {
            if (isClient)
            {
                //this.gameObject.GetComponent<NetworkIdentity>().AssignClientAuthority(ChatBubbleControl.gameObject.GetComponent<NetworkIdentity>().connectionToClient);
            }
            InitCommends();
            clubNetworkManager = FindObjectOfType<ClubNetworkManager>();
        }

        // Update is called once per frame
        void Update()
        {
            if (!BubbleAvailable)
            {
                BubbleCooldownTime -= Time.deltaTime;
                if (BubbleCooldownTime < 0)
                {
                    BubbleAvailable = true;
                    BubbleCooldownTime = 5f;
                }
            }
        
        }

        private void InitCommends()
        {
            CommendList.Add("DJ");
            CommendList.Add("Look Around");
            CommendList.Add("Screen");
            CommendList.Add("Audience");
            CommendList.Add("Me");

        }

        public void OnSubmit()
        {
            if (BubbleAvailable)
            {
                if(DJControl.DJPuppy == null || DJControl.DJPuppy.GetComponent<NetworkIdentity>() != NetworkClient.localPlayer)
                {
                    if (InputField.text != "")
                    {
                        if (InputField.text == CommendList[0])
                        {
                            CameraState.CameraFSMDJ();
                        }
                        else if (InputField.text == CommendList[1])
                        {
                            CameraState.CameraFSMLookAround();
                        }
                        else if (InputField.text == CommendList[2])
                        {
                            CameraState.CameraFSMScreen();
                        }
                        else if (InputField.text == CommendList[3])
                        {
                            CameraState.CameraFSMAudience();
                        }
                        else if (InputField.text == CommendList[4])
                        {
                            CameraState.CameraFSMMe();
                        }
                        //else Debug.Log(InputField.text);

                        ChatBubbleControl.CmdSetBubble(InputField.text, NetworkClient.localPlayer.transform.position, NetworkClient.localPlayer.GetComponent<NetworkIdentity>());
                        BubbleAvailable = false;
                    }
                }
                else
                {
                    if (InputField.text != "")
                    {
                        if (InputField.text == CommendList[0])
                        {
                            CameraState.CmdCameraFSMDJ();
                        }
                        else if (InputField.text == CommendList[1])
                        {
                            CameraState.CmdCameraFSMLookAround();
                        }
                        else if (InputField.text == CommendList[2])
                        {
                            CameraState.CmdCameraFSMScreen();
                        }
                        else if (InputField.text == CommendList[3])
                        {
                            int PuppyNum = clubNetworkManager.PuppyIds.Count;
                            NetworkIdentity TargetPuppy = clubNetworkManager.PuppyIds[Random.Range(0, PuppyNum)];
                            CameraState.CmdCameraFSMDJChosenAudience(TargetPuppy);
                        }
                        else if (InputField.text == CommendList[4])
                        {
                            CameraState.CmdCameraFSMMe();
                        }
                        //else Debug.Log(InputField.text);

                        ChatBubbleControl.CmdSetBubble(InputField.text, NetworkClient.localPlayer.transform.position, NetworkClient.localPlayer.GetComponent<NetworkIdentity>());
                        BubbleAvailable = false;
                    }
                }
                


                InputField.text = "";
            }
            else
            {
                Debug.Log("Slow down!");
            }
            
        }

        private void BubbleOff()
        {
            ChatBubbleControl.BubbleOff();
        }
    }
}
