using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using DG.Tweening;
using UnityEngine;

namespace ColorGame
{
    public class ColorGameMain : MonoBehaviour
    {


        [SerializeField] private List<Material> teamMaterials;

        [SerializeField] private GameObject floor_prefab;
        [SerializeField] private Grid grid;
        [SerializeField] private ColorMetaData metaData;

        private Dictionary<int, Material> materialDict;
        private ColorMetaData.AudioData _curAudio;

        private static ColorGameMain _instance;
        public static ColorGameMain Instance
        {
            get
            {
                return _instance;
            }
            private set{}
        }


        private int _curBeat;
        [SerializeField] private AudioSource AudioSource;
        [SerializeField] private float songStartTime;

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
            var audioData = this.metaData.GetRandom();
            _curAudio = audioData;
            AudioSource.clip = audioData.clip;
            _curBeat = 0;
            AudioSource.Play();
            songStartTime = Time.time;
            materialDict = new Dictionary<int, Material>();
            var i = 0;
            foreach (var material in teamMaterials)
            {
                materialDict.Add(i,material);
                i++;
            }

            CreateFloor();
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        private void FixedUpdate()
        {
            var beat_calc = (Time.time - songStartTime) / _curAudio.interval;
            if ((int) beat_calc > _curBeat)
            {
                _curBeat += 1;
                ScoreMgr.Instance.Tick();
                BeatCamera();
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
            return materialDict[id];
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

    }
}

