
using UnityEngine;

namespace RoomUpgrade
{
    public class UpgradableSofa:UpgradableObject
    {
        public override void LevelTo(int level)
        {
            MeshRenderer renderer = this.GetComponent<MeshRenderer>();
            switch (level)
            {
                case 1:
                    renderer.material = materialConfig[0];
                    break;
                case 5:
                    renderer.material = materialConfig[1];
                    break;
                case 6:
                    renderer.material = materialConfig[2];
                    break;
            }
            
                
        }
    }
}