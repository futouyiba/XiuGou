using System.Collections.Generic;
using UnityEngine;

namespace ColorGame
{

    public class ColorMatchTeam
    {
        private int teamId;
        public Material material;
        public HashSet<int> playerIds;
        public float teamScore;
        

        public ColorMatchTeam(int id,Material mat)
        {
            this.teamId = id;
            this.material = mat;
            playerIds = new HashSet<int>();
        }

        public bool AddPlayer(int playerId)
        {
            if (playerIds.Contains(playerId))
            {
                Debug.LogError($"player {playerId} already in team {teamId}");
                return false;
            }

            playerIds.Add(playerId);
            return true;
        }
        
        


    }
    //store instance data for a match
    public class ColorMatch
    {
        public int matchId;
        public ColorMetaData.AudioData audioData;
        public Dictionary<int, ColorMatchTeam> teams;
        public bool IsOnGoing = true;
        public float startTime;

        private int _curTeamId = 0;

        protected int TeamId
        {
            get => ++_curTeamId;
            private set{}
        }
        
        // public List<CharacterMain> players;

        public int beatPassed;


        public ColorMatch(int matchId, ColorMetaData.AudioData audio)
        {
            this.matchId = matchId;
            this.audioData = audio;
            this.teams = new Dictionary<int, ColorMatchTeam>();
            ScoreMgr.Instance.AddTickDlg(Tick);
            IsOnGoing = true;
        }

        public int AddTeam(Material mat)
        {
            var newTeamId = TeamId;
            ColorMatchTeam teamCreated = new ColorMatchTeam(newTeamId, mat);
            teams.Add(newTeamId,teamCreated);
            return newTeamId;
        }

        public bool AddPlayer(int teamId, int playerId)
        {
            if (!teams.TryGetValue(teamId, out ColorMatchTeam teamGot))
            {
                Debug.LogError($"team {teamId} does not exist");
                return false;
            }

            return teamGot.AddPlayer(playerId);
        }

        public bool UpdateScore(int teamId, float score)
        {
            if (!teams.TryGetValue(teamId, out ColorMatchTeam teamGot))
            {
                Debug.LogError($"team {teamId} does not exist");
                return false;
            }

            teamGot.teamScore = score;
            return true;
        }


        public void Tick()
        {
            // this.beatPassed += 1;
        }
    }
}