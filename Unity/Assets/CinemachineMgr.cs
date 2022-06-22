using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using UnityEngine.Serialization;

namespace ET
{
    public class CinemachineMgr : MonoBehaviour
    {
        public List<GameObject> VCamLvlRoots;

        public List<PlayableAsset> PlayableAssets;

        public List<PlayableDirector> PlayableDirectors;

        private PlayableDirector _playableDirector;

        // Start is called before the first frame update
        void Awake()
        {
            _playableDirector = this.GetComponent<PlayableDirector>();
            foreach (var camLvlRoot in VCamLvlRoots)
            {
                camLvlRoot.SetActive(false);
            }

            Time.timeScale = 1.5f;
        }

        public void PlayAssetByLevel(int lvl)
        {
            Debug.Log($"play asset : level {lvl}");
            PlayableDirectors.ForEach(director =>
            {
                director.Stop();
            });
            foreach (var camLvlRoot in VCamLvlRoots)
            {
                camLvlRoot.SetActive(false);
            }

            VCamLvlRoots[lvl].SetActive(true);
            PlayableDirectors[lvl].Play();
        }
    }
}