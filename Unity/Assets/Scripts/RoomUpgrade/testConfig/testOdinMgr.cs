using System;
using UnityEngine;

namespace ET.RoomUpgrade.testConfig
{
    public class testOdinMgr:MonoBehaviour
    {
        protected Action dlg;
        [SerializeField] private testOdinConfig config;

        private void Awake()
        {
            if (config.actions.Count > 0)
            {
                foreach (var action in config.actions)
                {
                    // dlg += () => action.Value;
                }

            }
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.Keypad1))
            {
                exec();
            }
            else if (Input.GetKeyDown(KeyCode.Keypad2))
            {
                exec();
            }
        }

        public void exec()
        {
            dlg?.Invoke();
        }
    }
}