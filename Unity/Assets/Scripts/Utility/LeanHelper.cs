// // 导入基础模块
//
// using System;
// using System.Collections.ObjectModel;
// using System.Threading.Tasks;
// using LeanCloud;
// // 导入存储模块
// using LeanCloud.Storage;
// // 如有需要，导入即时通讯模块
// using LeanCloud.Realtime;
// // 如有需要，导入 LiveQuery 模块
// using LeanCloud.LiveQuery;
// using UnityEngine;
//
// namespace ET.Utility
// {
//     public class LeanHelper:MonoBehaviour
//     {
//         private LCQuery<LCObject> _appearancesQuery;
//         private LCLiveQuery _liveQuery;
//         private const string APPEARANCE_ID = "appearanceId";
//         private const string SHOW_GO_ID = "showGoId";
//         private const string ROOM_ID = "roomID";
//
//         private void Awake()
//         {
//             LCApplication.Initialize("t4lS8BvwwSb4glBCIPGP6LBF-gzGzoHsz", "qRMfUu2otuPBUb1bCMoukfjm", "https://please-replace-with-your-customized.domain.com");
//             LCLogger.LogDelegate = (LCLogLevel level, string info) =>
//             {
//                 switch (level)
//                 {
//                     case LCLogLevel.Debug:
//                         Debug.LogWarning($"[DEBUG] {DateTime.Now} {info}\n");
//                         break;
//                     case LCLogLevel.Warn:
//                         Debug.LogWarning($"[WARNING] {DateTime.Now} {info}\n");
//                         break;
//                     case LCLogLevel.Error:
//                         Debug.LogWarning($"[ERROR] {DateTime.Now} {info}\n");
//                         break;
//                     default:
//                         Debug.LogWarning(info);
//                         break;
//                 }
//             };
//         }
//
//         public void LeanChangeAppearance(int showGoId, int appearanceId)
//         {
//             LCObject appearance = new LCObject("Appearance")
//             {
//                 [SHOW_GO_ID] = showGoId,
//                 [APPEARANCE_ID] = appearanceId
//             };
//             
//             appearance.Save().ContinueWith(t =>
//             {
//                 if (t.IsFaulted)
//                 {
//                     Debug.LogError(t.Exception);
//                 }
//                 else
//                 {
//                     Debug.Log("Save Success");
//                 }
//             });
//         }
//
//         public async Task LeanInitAppearances()
//         {
//             if (_appearancesQuery != null)
//             {
//                 _appearancesQuery = new LCQuery<LCObject>("appearance");
//             }
//             LCQuery<LCObject> appearancesQuery = new LCQuery<LCObject>("appearance");
//             _appearancesQuery = appearancesQuery;
//             _appearancesQuery.WhereEqualTo(ROOM_ID, this.roomId);
//             ReadOnlyCollection<LCObject> appearances = await _appearancesQuery.Find();
//             foreach (LCObject lcObject in appearances)
//             {
//                 var sgId = (int)(lcObject[SHOW_GO_ID]);
//                 CharMain charMain = CharMgr.instance.GetCharacter(sgId);
//                 if (charMain != null)
//                 {
//                     CharMgr.instance.ChangeAppearance(sgId, (int)(lcObject[APPEARANCE_ID]));
//                 }
//                 else
//                 {
//                     Debug.LogError("charMain is null");// when init, should get appearance before creation of char prefab.
//                 }
//             }
//             _liveQuery = await _appearancesQuery.Subscribe();
//             
//         }
//
//         public int roomId { get; set; }
//
//         public void LeanUserLeaveRoom(int showGoId)
//         {
//             
//         }
//     }
// }