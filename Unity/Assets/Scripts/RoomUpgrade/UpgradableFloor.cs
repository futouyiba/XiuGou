using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableFloor : UpgradableObject
    {
        
        // Start is called before the first frame update
        void Start()
        {
            
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
    }
}
