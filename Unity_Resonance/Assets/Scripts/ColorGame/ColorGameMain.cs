using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using UnityEngine;
using UnityEngine.InputSystem;

namespace ColorGame
{
    public class ColorGameMain : MonoBehaviour
    {


        [SerializeField] private List<Material> teamMaterials;

        [SerializeField] private GameObject floor_prefab;
        [SerializeField] private Grid grid;
        [SerializeField] private ColorMetaData metaData;

        // private Dictionary<int, Material> materialDict;
        private ColorMetaData.AudioData _curAudio;

        private ColorMatch _curMatch;
        private Dictionary<int, ColorMatch> matchDict;
        
        private Mouse _curMouse;
        private Keyboard _curKeyboard;

        private static ColorGameMain _instance;
        public static ColorGameMain Instance
        {
            get=>_instance;
            private set{}
        }
        
        private int _curMatchId = 0;

        protected int MatchId
        {
            get => _curMatchId++;
            private set{}
        }

        private int _curMaterialId = 0;

        protected int MaterialId
        {
            get
            {
                if (_curMaterialId > teamMaterials.Count - 1)
                {
                    _curMaterialId -= (teamMaterials.Count - 1);
                    return _curMaterialId;
                }
                return _curMaterialId++;
            }
            private set{}
        }

        private int _curNpcId = 9000;

        protected int NpcId
        {
            get
            {
                return _curNpcId++;
            }
        }


        // private int _curBeat;
        [SerializeField] private AudioSource AudioSource;
        // [SerializeField] private float songStartTime;

        private void Awake()
        {
            if (!_instance)
            {
                _instance = this;
            }
            else
            {
                Destroy(this.gameObject);
            }
        }

        
        // Start is called before the first frame update
        void Start()
        {
            CreateFloor();
            //grab random song and create match
            var audioData = this.metaData.GetRandom();
            _curMatch = CreateMatch(audioData);
            _curAudio = audioData;
            AudioSource.clip = audioData.clip;
            // _curBeat = 0;
            AudioSource.Play();
            _curMatch.startTime = Time.time;
            
            //create team and join
            //inputs
            _curMouse = Mouse.current;
            _curKeyboard= Keyboard.current;

            // materialDict = new Dictionary<int, Material>();
            // var i = 0;
            // foreach (var material in teamMaterials)
            // {
            //     materialDict.Add(i,material);
            //     i++;
            // }


        }

        // Update is called once per frame
        void Update()
        {
            if (_curKeyboard != null)
            {
                var charMgr = CharManager.instance;
                if (_curKeyboard.cKey.wasPressedThisFrame)
                {
                    var view=charMgr.CreateCharView(1, new Vector2(.5f,.5f), $"WangWangMe", 0, Color.white);
                    charMgr.RegisterMe(1);
                }

                if (_curKeyboard.dKey.wasPressedThisFrame)
                {//create team for me and join
                    var material = teamMaterials[MaterialId];
                    var teamId = _curMatch.AddTeam(material);
                    var me=charMgr.GetMe();
                    me.SetTeam(teamId);
                }

                if (_curKeyboard.tKey.wasPressedThisFrame)
                {
                    var material = teamMaterials[MaterialId];
                    var teamId = _curMatch.AddTeam(material);
                }

                if (_curKeyboard.nKey.wasPressedThisFrame)
                {//create npc and join random team
                    var npc = CreateNpc();
                    var randomTeamId = _curMatch.AddPlayer2RandomTeam(npc.main.Id);
                    npc.team = randomTeamId;
                }
            }
        }

        private void FixedUpdate()
        {
            if (_curMatch != null)
            {
                if (!AudioSource.isPlaying)
                {
                    EndCurrentMatch();
                    //create a new match
                    var audioData = this.metaData.GetRandom();
                    _curMatch = CreateMatch(audioData);
                    _curAudio = audioData;
                    AudioSource.clip = audioData.clip;
                    // _curBeat = 0;
                    AudioSource.Play();
                    _curMatch.startTime = Time.time;
                    return;
                }
                var beat_calc = (Time.time - _curMatch.startTime) / _curMatch.audioData.interval;
                if ((int) beat_calc > _curMatch.beatPassed)
                {
                    _curMatch.beatPassed += 1;
                    ScoreMgr.Instance.Tick();
                    BeatCamera();
                }
            }

        }


        private void BeatCamera()
        {
            Camera camera= Camera.main;
            float initfocal = camera.focalLength;
            float focalchange = 3f;
            DOTween.To(() => camera.focalLength, x => camera.focalLength = x, initfocal+focalchange, _curAudio.interval * .2f).OnComplete(() =>
                DOTween.To(() => camera.focalLength, x => camera.focalLength = x, initfocal, _curAudio.interval * .4f));
        }

        public Material GetTeamMaterial(int id)
        {
            // return materialDict[id];
            var teams = _curMatch.teams;
            if (!teams.TryGetValue(id, out var team))
            {
                Debug.LogError($"team {id} does not exist");
                return null;
            }

            return team.material;
        }


        public void CreateFloor()
        {
            var floorParent = new GameObject("floor_parent");
            
            Vector3Int startVec = new Vector3Int(-20, 0, -20);
            Vector3Int endVec = new Vector3Int(20, 0, 20);
            for (int i = startVec.x; i < endVec.x; i++)
            {
                for (int j = startVec.z; j < endVec.z; j++)
                {
                    Vector3Int currentPos = new Vector3Int(i, 0, j);
                    Vector3 worldPos = grid.CellToWorld(currentPos);
                    var cellCreated = Instantiate(floor_prefab, floorParent.transform);
                    cellCreated.name = $"({i})_({j})";
                    cellCreated.transform.position = worldPos;
                    if ((i + j) % 2 == 0)
                    {
                        var cell = cellCreated.GetComponent<DanceFloorCell>();
                        cell.ToggleDark();
                    }
                    
                    
                }

            }
            
        }


        protected ColorMatch CreateMatch(ColorMetaData.AudioData audioData)
        {
            var matchId = MatchId;
            ColorMatch match = new ColorMatch(matchId, audioData);


            return match;
        }

        protected void EndCurrentMatch()
        {
            throw new Exception("not implemented");
        }

        protected BotPlayer CreateNpc()
        {
            var id = NpcId;
            var viewName = $"Npc{id}";
            var view = CharManager.instance.CreateNpcView(id, new Vector2(.5f, .5f), viewName, Color.white);
            view.name = viewName;
            var bot = view.transform.GetComponent<BotPlayer>();
            bot.TriggerEv("Ready");

            return bot;
        }
        //============
    }
}

