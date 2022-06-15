
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableSofa:UpgradableObject
    {
        private MeshRenderer renderer;

        private void Awake()
        {
            renderer = this.GetComponent<MeshRenderer>();
        }
        // public override void LevelTo(int level)
        // {
        //     MeshRenderer renderer = this.GetComponent<MeshRenderer>();
        //     switch (level)
        //     {
        //         case 1:
        //             renderer.material = materialConfig[0];
        //             break;
        //         case 5:
        //             renderer.material = materialConfig[1];
        //             break;
        //         case 6:
        //             renderer.material = materialConfig[2];
        //             break;
        //     }
        //     
        //         
        // }

        public void Init()
        {
            Material0();
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