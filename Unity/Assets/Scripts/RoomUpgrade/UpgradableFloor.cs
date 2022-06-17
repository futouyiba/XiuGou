using System.Collections;
using System.Collections.Generic;
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
        
    }
}
