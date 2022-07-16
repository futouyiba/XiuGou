using System;
using System.Collections;
using System.Collections.Generic;
using Cinemachine;
using UnityEngine;
using UnityEngine.Rendering.Universal;

namespace ET
{
    [RequireComponent(typeof(CinemachineBrain))]
    public class CamTargetGroupHelper : MonoBehaviour
    {

        [SerializeField]protected CinemachineTargetGroup targetGroup;
        protected CinemachineBrain brain;

        private void Awake()
        {
        }

        // Start is called before the first frame update
        void Start()
        {
            brain = GetComponent<CinemachineBrain>();
        }

        // Update is called once per frame
        void Update()
        {
            
        }

        public void AddChar(int userId, float weight, float radius)
        {
            var character = CharMgr.instance.GetCharacter(userId);
            if (!character)
            {
                Debug.LogError($"charObj {userId} does not exist");
                return;
            }
            targetGroup.AddMember(character.transform, weight, radius);
        }

        public void RmChar(int userId)
        {
            var character = CharMgr.instance.GetCharacter(userId);
            if (!character)
            {
                Debug.LogError($"charObj {userId} does not exist");
                return;
            }
            targetGroup.RemoveMember(character.transform);
        }
        
        public void OnVCamChange()
        {
            //assign target group to vcam
            brain.ActiveVirtualCamera.LookAt = targetGroup.Transform;
            
            // var vcam = brain.ActiveVirtualCamera.VirtualCameraGameObject.GetComponent<CinemachineVirtualCamera>();
        }
        
        
    }
}
