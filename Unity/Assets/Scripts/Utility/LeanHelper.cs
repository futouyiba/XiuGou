// // 导入基础模块
//
using System;
using System.Collections.ObjectModel;
using System.Threading.Tasks;
using LeanCloud;
// // 导入存储模块
using LeanCloud.Storage;
// 如有需要，导入即时通讯模块
using LeanCloud.Realtime;
// // 如有需要，导入 LiveQuery 模块
using LeanCloud.LiveQuery;
using Sirenix.OdinInspector;
using UnityEngine;
//
namespace ET.Utility
{
    public class LeanHelper:MonoBehaviour
    {
        private LCQuery<LCObject> _appearancesQuery;
        private LCLiveQuery _liveQuery;
        private const string USER_CLASS_NAME = "User";
        private const string USER_ID = "UserId";
        /// <summary>
        /// the string used for indexing the mongo storage.
        /// </summary>
        private const string APPEARANCE_ID = "aprcId";
        private const string SHOW_GO_ID = "showGoId";
        private const string ROOM_ID = "room";
        public string appId = "t4lS8BvwwSb4glBCIPGP6LBF-gzGzoHsz";
        public string appKey = "qRMfUu2otuPBUb1bCMoukfjm";
        public string restServer = "https://t4ls8bvw.lc-cn-n1-shared.com";
        public string socketServer = "cn-n1-cell1.leancloud.cn";
        public int roomId = -5555; // -5555表示测试房间；后续可以改成用户自己的房间号
        public int _currentGenUid = -1000;

        // todo for performance we cache the object Ids of the users in the room. so we can use lcQuery.get instead of lcQuery.find.

        class User:LCObject
        {
            public int UserId { get => (int)this[USER_ID]; set=>this[USER_ID]= value; }
            public int AppearanceId { get => (int)this[APPEARANCE_ID]; set=>this[APPEARANCE_ID]=value; }
            public int RoomId { get=>(int)this[ROOM_ID]; set=>this[ROOM_ID] = value; }

            public User() : base("User")
            {
            }
        }
        

        private void Update()
        {
            if (Input.GetKey(KeyCode.Keypad7))
            {
                TestAdd().Start();
            }

            if (Input.GetKey(KeyCode.Keypad8))
            {
                
            }
        }
        
        [Button("TestAdd")]
        public async Task TestAdd()
        {
            var query = new LCQuery<LCObject>(USER_CLASS_NAME);
            query.WhereEqualTo(USER_ID, _currentGenUid);
            try
            {
                var users = await query.First(); //actually it should be only 1 user. 
                if (users != null)
                {
                    Debug.Log("user already exists");
                    return;
                }
                else
                {
                    Debug.Log("user not exists, creating...");
                }
            }
            catch (Exception e)
            {
                Console.WriteLine(e);
                throw;
            }
            
            var user = new User()
            {
                UserId = _currentGenUid,
                RoomId = roomId,
                AppearanceId = _currentGenUid
            };

            _currentGenUid++;
            await user.Save();
        }
        
        [Button("TestUpdate")]
        public async Task TestUpdate()
        {
            var userId = UnityEngine.Random.Range(0, _currentGenUid);
            var query = new LCQuery<LCObject>(USER_CLASS_NAME);
            query.WhereEqualTo(USER_ID, userId);
            var u = await query.First();
            if (u == null)
            {
                Debug.Log("user not exists");
                return;
            }
            User user = LCObject.CreateWithoutData(USER_CLASS_NAME, u.ObjectId) as User;
            var appearanceId = UnityEngine.Random.Range(0, 100);
            user.AppearanceId = appearanceId;
            await user.Save();
        }

        //
         private void Awake()
         {
             LCApplication.Initialize(appId, appKey, restServer);
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
             LCObject.RegisterSubclass("User", ()=> new User());
         }

         public void LeanChangeAppearance(int showGoId, int appearanceId)
         {
             LCObject appearance = new LCObject(USER_CLASS_NAME)
             {
                 [SHOW_GO_ID] = showGoId,
                 [APPEARANCE_ID] = appearanceId
             };
             
             appearance.Save().ContinueWith(t =>
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

         public async Task LeanInitAppearances()
         {
             // if (_appearancesQuery != null)
             // {
                 // _appearancesQuery = new LCQuery<LCObject>(USER_CLASS_NAME); // todo use this cached query to query the data
             // }
             LCQuery<LCObject> appearancesQuery = new LCQuery<LCObject>(USER_CLASS_NAME);
             _appearancesQuery = appearancesQuery;
             _appearancesQuery.WhereEqualTo(ROOM_ID, this.roomId);
             ReadOnlyCollection<LCObject> appearances = await _appearancesQuery.Find();
             foreach (LCObject lcObject in appearances)
             {
                 var sgId = (int)(lcObject[APPEARANCE_ID]);
                 var mod = sgId % CharMgr.instance.charPrefabs.Count;
                 CharMain charMain = CharMgr.instance.GetCharacter(sgId);
                 if (charMain != null)
                 {
                     CharMgr.instance.ChangeAppearance(sgId, (int)(lcObject[APPEARANCE_ID]));
                 }
                 else
                 {
                     Debug.LogError("charMain is null");// when init, should get appearance before creation of char prefab.
                 }
             }
             _liveQuery = await _appearancesQuery.Subscribe();
             _liveQuery.OnEnter = (obj, updateKeys) =>
             {
                 var user = obj as User;
                 if (user == null)
                 {
                     // usually it happens when a user first time enters a room, and the server doesn't have the user's data yet. 
                     // since the user's unity receives "meEnter" first, and sends "setPos". before set pos the logic server has this user within the userList,
                     // but user's data is not on lean cloud server yet. so the user's data is null.
                     // When this happens. it is not a error, the user will create lcObject, and initialization would be done on liveQuery's "OnEnter".
                    Debug.LogError("lc live query on enter, yet user is null");
                    return;
                 }
                 var sgId = (int)(obj[APPEARANCE_ID]);
                 var mod = sgId % CharMgr.instance.charPrefabs.Count;
                 CharMain charMain = CharMgr.instance.GetCharacter(user.UserId);
                 if (charMain != null)
                 {
                     CharMgr.instance.ChangeAppearance(sgId, (int)(obj[APPEARANCE_ID]));
                 }
                 else
                 {
                     Debug.LogError("charMain is null");// when init, should get appearance before creation of char prefab.
                 }
             };
             // create should be called when a user enters a room but my user cannot be queryed from the server.
             // _liveQuery.OnCreate = (obj, updateKeys) =>
             // {
             //     var user = obj as User;
             //     if (user == null)
             //     {
             //        Debug.LogError("lc live query on create, yet user is null");
             //        return;
             //     }
             //     var sgId = (int)(obj[APPEARANCE_ID]);
             //     var mod = sgId % CharMgr.instance.charPrefabs.Count;
             //     CharMain charMain = CharMgr.instance.GetCharacter(user.UserId);
             //     if (charMain != null)
             //     {
             //         CharMgr.instance.ChangeAppearance(sgId, (int)(obj[APPEARANCE_ID]));
             //     }
             //     else
             //     {
             //         Debug.LogError("charMain is null");// when init, should get appearance before creation of char prefab.
             //     }
             // };
         }

//         public int roomId { get; set; }
//
//         public void LeanUserLeaveRoom(int showGoId)
//         {
//             
//         }
     }
}