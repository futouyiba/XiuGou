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

        [SerializeField] private List<AudioClip> AudioClips;
        [SerializeField] protected List<Material> teamMaterials;
        [SerializeField] private float interval;
        [SerializeField] private float _bmp;

        [SerializeField] protected GameObject floor_prefab;
        [SerializeField] protected Grid grid;

        private Dictionary<int, Material> materialDict;

        private static ColorGameMain _instance;
        public static ColorGameMain Instance
        {
            get
            {
                return _instance;
            }
            private set{}
        }

        private float bpm
        {
            set
            {
                _bmp = value;
                interval = 60 / value;
            }
            get
            {
                return _bmp;
            }
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
            AudioSource.clip = AudioClips.First();
            bpm = 115;
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
            var beat_calc = (Time.time - songStartTime) / interval;
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
            DOTween.To(() => camera.focalLength, x => camera.focalLength = x, initfocal+focalchange, interval * .2f).OnComplete(() =>
                DOTween.To(() => camera.focalLength, x => camera.focalLength = x, initfocal, interval * .4f));

        }

        public Material GetTeamMaterial(int id)
        {
            return materialDict[id];
        }


        public void CreateFloor()
        {
            Vector3Int startVec = new Vector3Int(-20, 0, -20);
            Vector3Int endVec = new Vector3Int(20, 0, 20);
            for (int i = startVec.x; i < endVec.x; i++)
            {
                for (int j = startVec.z; j < endVec.z; j++)
                {
                    Vector3Int currentPos = new Vector3Int(i, 0, j);
                    Vector3 worldPos = grid.CellToWorld(currentPos);
                    var cellCreated = Instantiate(floor_prefab);
                    cellCreated.transform.position = worldPos;
                }

            }
            
        }

    }
}

