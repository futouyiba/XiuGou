using System.Collections;
using System.Collections.Generic;
using ET;
using Sirenix.Serialization;
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableFloor : UpgradableObject
    {
        private MeshRenderer renderer;

        [OdinSerialize] public List<GameObject> floorPrefabs;

        private GameObject currentFloor;
        // Start is called before the first frame update
        void Awake()
        {
            renderer = this.GetComponent<MeshRenderer>();    
        }

        // Update is called once per frame
        void Update()
        {
        
        }

        public override void LevelTo(int level)
        {
            MeshRenderer renderer = this.GetComponent<MeshRenderer>();
            switch (level)
            {
                case 1:
                    renderer.material = null;
                    break;
                case 3:
                    renderer.material = materialConfig[0];
                    break;
                case 9:
                    renderer.material = materialConfig[1];
                    break;
            }
        }


        public void Material0()
        {
            renderer.material = materialConfig[0];
        }
        
        public void Material1()
        {
            renderer.material = materialConfig[1];
        }

        public void Material2()
        {
            renderer.material = materialConfig[2];
        }

        public void ChangePrefab(int prefabId)
        {
            if (prefabId < 0 || prefabId >= floorPrefabs.Count)
            {
                Debug.LogError($"prefab Id={prefabId} is not valid, max is {floorPrefabs.Count}");
                return;
            }
            if (currentFloor)
            {
                Destroy(currentFloor);
            }

            currentFloor = Instantiate(floorPrefabs[prefabId], this.transform);
        }


        [SerializeField] protected List<GameObject> lightObjs;
        [SerializeField] protected DanceFloorPivot pivot; 
        /// <summary>
        /// 20220620 随着舞台升级改变灯光
        /// 改变的有：
        /// 1、舞台范围
        /// 2、灯光，指示大概范围
        /// </summary>
        /// <param name="id">变为第几个形态</param>
        public void ChangeRegion(int id)
        {
            if (id < 0 || id > 2)
            {
                Debug.LogError($"{id} is not valid");
                return;
            }
            pivot.UpdateBorder(id);
            foreach (var obj in lightObjs)
            {
                if (obj.activeSelf)
                {
                    obj.SetActive(false);
                    break;
                }
            }

            lightObjs[id].SetActive(true);

        }
        
    }
}
