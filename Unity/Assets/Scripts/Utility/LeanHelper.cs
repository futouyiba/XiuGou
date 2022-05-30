// 导入基础模块

using System;
using LeanCloud;
// 导入存储模块
using LeanCloud.Storage;
// 如有需要，导入即时通讯模块
using LeanCloud.Realtime;
// 如有需要，导入 LiveQuery 模块
using LeanCloud.LiveQuery;
using UnityEngine;

namespace ET.Utility
{
    public class LeanHelper:MonoBehaviour
    {
        private void Awake()
        {
            LCApplication.Initialize("t4lS8BvwwSb4glBCIPGP6LBF-gzGzoHsz", "qRMfUu2otuPBUb1bCMoukfjm", "https://please-replace-with-your-customized.domain.com");
            LCLogger.LogDelegate = (LCLogLevel level, string info) =>
            {
                switch (level)
                {
                    case LCLogLevel.Debug:
                        Debug.LogWarning($"[DEBUG] {DateTime.Now} {info}\n");
                        break;
                    case LCLogLevel.Warn:
                        Debug.LogWarning($"[WARNING] {DateTime.Now} {info}\n");
                        break;
                    case LCLogLevel.Error:
                        Debug.LogWarning($"[ERROR] {DateTime.Now} {info}\n");
                        break;
                    default:
                        Debug.LogWarning(info);
                        break;
                }
            };
        }

        public void ChangeAppearance(int appearanceId)
        {
            LCObject appearance = new LCObject("Appearance");
            appearance.Set("appearanceId", appearanceId);
            appearance.SaveAsync().ContinueWith(t =>
            {
                if (t.IsFaulted)
                {
                    Debug.LogError(t.Exception);
                }
                else
                {
                    Debug.Log("Save Success");
                }
            });
        }
    }
}