using System;
using System.Collections.Generic;
using System.Linq;

namespace ColorGame
{
    public struct teamData
    {
        
    }
    public class ScoreMgr
    {
        private static ScoreMgr _instance;
        public static ScoreMgr Instance
        {
            get
            {
                if (_instance==null)
                {
                    _instance = new ScoreMgr();
                }

                return _instance;
            }
            private set{}
        }

        private Dictionary<int, float> teamDict;

        protected ScoreMgr()
        {
            teamDict = new Dictionary<int, float>();
        }

        public void AddScore(int teamId, float score)
        {
            if (!teamDict.ContainsKey(teamId))
            {
                teamDict.Add(teamId, score);
                return;
            }

            teamDict[teamId] += score;
        }


        private Action _dlgTick;
        private Action _dlgClear;
        public void AddTickDlg(Action dlg)
        {
            if(dlg!=null) _dlgTick += dlg;
        }

        public void RemoveTickDlg(Action dlg)
        {
            _dlgTick -= dlg;
        }

        public void Tick()
        {
            _dlgTick?.Invoke();
        }


        public IEnumerable<KeyValuePair<int, float>> ScoreList()
        {
            var sorted = from entry in teamDict orderby entry.Value descending select entry;
            return sorted;
        }

        public void ClearScore()
        {
            teamDict.Clear();
            _dlgClear?.Invoke();
        }

        public void AddClearDlg(Action dlg)
        {
            if(dlg!=null) _dlgClear += dlg;
        }
    }
}