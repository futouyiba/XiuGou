using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace ColorGame
{
    public class DanceFloorCell : MonoBehaviour
    {
        //<teamid, userids>
        private Dictionary<int, List<int>> scoreDict;
        private List<CharacterMain> toReg;
        private int leadTeamId;
        [SerializeField] protected MeshRenderer meshRenderer;
        [SerializeField] private bool isDark;
        [SerializeField] private Color darkColor;
        
        // Start is called before the first frame update
        void Start()
        {
            scoreDict = new Dictionary<int, List<int>>();
            toReg = new List<CharacterMain>();
            leadTeamId = -1;
            ScoreMgr.Instance.AddTickDlg(this.Tick);
        }

        // Update is called once per frame
        void Update()
        {
            
        }

        private void OnTriggerEnter(Collider other)
        {
            var charComp = other.transform.parent.GetComponent<CharacterMain>();
            if (!charComp)
            {
                Debug.LogWarning($"{other.gameObject.name} entered the floor");
                return;
            }
            toReg.Add(charComp);
            // Debug.LogWarning($"{other.gameObject.name} entered the floor");    
        }

        private void OnTriggerExit(Collider other)
        {
            var charComp = other.transform.parent.GetComponent<CharacterMain>();
            if (!charComp)
            {
                Debug.LogWarning($"{other.gameObject.name} exited the floor");
                return;
            }

            if (toReg.Contains(charComp))
            {
                toReg.Remove(charComp);
                return;
            }
            else 
            {
                UnregUser(charComp.teamId, charComp.ID);
            }

            // Debug.LogWarning($"{other.gameObject.name} exited the floor");
        }

        private bool RegUser(int teamId, int uid)
        {

            if (scoreDict.ContainsKey(teamId))
            {
                var teamData = scoreDict[teamId];
                if (teamData.Contains(uid))
                {
                    Debug.LogError($"user {uid} already existed");
                    return false;
                }
                teamData.Add(uid);
            }
            else
            {
                scoreDict.Add(teamId, new List<int>(){uid});
            }

            return true;

        }

        private bool UnregUser(int teamId, int uid)
        {
            var dictRes = scoreDict.TryGetValue(teamId, out List<int> teamData);
            if (!dictRes)
            {
                Debug.LogError($"{teamId} data does not exist");
                return false;
            }

            try
            {
                teamData.Remove(uid);
                if (teamData.Count == 0)
                {
                    scoreDict.Remove(teamId);
                }
            }
            catch(Exception e) 
            {
                Debug.LogError(e);
                return false;
            }

            return true;
        }

        public void Tick()
        {
            if (scoreDict.Count > 0)
            {
                //有好几个人踩在这里，计分
                var total = 0;
                Dictionary<int, float> weightDict = new Dictionary<int, float>();
                var head_team_id = -1;
                var head_team_weight = 0;
                foreach (var info in scoreDict)
                {
                    var weight = info.Value.Count;
                    if (head_team_weight < weight)
                    {
                        head_team_weight = weight;
                        head_team_id = info.Key;
                    }
                    total += weight;
                    weightDict.Add(info.Key, weight);
                }

                foreach (var info in weightDict)
                {
                    ScoreMgr.Instance.AddScore(info.Key, info.Value/total);
                }

                
                if (leadTeamId != head_team_id && head_team_id != -1)
                {
                    leadTeamId = head_team_id;
                    meshRenderer.material = ColorGameMain.Instance.GetTeamMaterial(head_team_id);
                }
                
            }
            else
            {
                //不需要更新，把这一分给之前最后离开的人
                if(leadTeamId!=-1) ScoreMgr.Instance.AddScore(leadTeamId, 1f);
            }

            //看看有没有人要加入
            while(this.toReg.Count > 0)
            {
                var user = toReg.First();
                toReg.Remove(user);
                RegUser(user.teamId, user.ID);
                
            }

            ToggleDark();

        }

        public void ToggleDark()
        {
            if (isDark)
            {
                meshRenderer.material.SetColor("_Color", Color.white);
                isDark = false;
            }
            else
            {
                meshRenderer.material.SetColor("_Color", darkColor);
                isDark = true;
            }
        }
    }
}

