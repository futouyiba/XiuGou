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

        private PlayableDirector _playableDirector;

        // Start is called before the first frame update
        void Start()
        {
            _playableDirector = this.GetComponent<PlayableDirector>();
            foreach (var camLvlRoot in VCamLvlRoots)
            {
                camLvlRoot.SetActive(false);
            }
        }

        public void PlayAssetByLevel(int lvl)
        {
            _playableDirector.Stop();
            foreach (var camLvlRoot in VCamLvlRoots)
            {
                camLvlRoot.SetActive(false);
            }

            VCamLvlRoots[lvl].SetActive(true);
            _playableDirector.Play(PlayableAssets[lvl]);
        }
    }
}