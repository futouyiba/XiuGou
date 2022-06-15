using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableFloor : UpgradableObject
    {
        private MeshRenderer renderer;
        // Start is called before the first frame update
        void Start()
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
    }
}
