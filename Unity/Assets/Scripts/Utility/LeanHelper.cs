// // 导入基础模块
//
using System;
using System.Collections.Generic;
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
using Sirenix.Utilities;
using UnityEngine;
using UnityEngine.PlayerLoop;
using UnityEngine.Serialization;
using Random = System.Random;

//
namespace ET.Utility
{
    public class LeanHelper:MonoBehaviour
    {
        private LCQuery<LCObject> _appearancesQuery;
        private LCLiveQuery _liveQuery;
        private const string USER_CLASS_NAME = "XiugouUser";
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
        [FormerlySerializedAs("_currentGenUid")] public int currentGenUid = -1000;
        
        Dictionary<int, string> userId2ObjectId = new Dictionary<int, string>();
        Dictionary<string, int> objectId2UserId = new Dictionary<string, int>();
        private Dictionary<int, int> userId2AprcId = new Dictionary<int, int>();
        public static LeanHelper instance;

        // todo for performance we cache the object Ids of the users in the room. so we can use lcQuery.get instead of lcQuery.find.

        public async void UpdateViewForUserId(int userId)
        {
            string objectId;
            int aprcId;
            if (!userId2ObjectId.ContainsKey(userId))
            {
                Debug.Log("object id not found for user id " + userId + " creating new object id");
                LCQuery<LCObject> query = new LCQuery<LCObject>(USER_CLASS_NAME);
                query.WhereEqualTo(USER_ID, userId);
                var lcObject = await query.First();
                objectId = lcObject.ObjectId;
                userId2ObjectId.Add(userId, objectId);
                objectId2UserId.Add(objectId, userId);
                var user = lcObject as User;
                aprcId = user.AppearanceId;
            }
            else
            {
                objectId = userId2ObjectId[userId];
                var queried = await new LCQuery<LCObject>(USER_CLASS_NAME).Get(objectId) as User;
                aprcId = queried.AppearanceId;
            }

            if (userId2AprcId.ContainsKey(userId))
            {
                userId2AprcId[userId] = aprcId;
            }
            else
            {
                userId2AprcId.Add(userId, aprcId);
            }
            if (aprcId < 0)
            {
                Debug.Log("user id " + userId + " has no appearance id");
                return ;
            }

            CharMgr.instance.onAprcChangedQueue.Enqueue(() =>
            {
                CharMgr.instance.ChangeAprcFast(userId, aprcId);
            });
               // todo instantiate should be within main thread.     

            return;
        }

        private void OnApplicationPause(bool pauseStatus)
        {
            if (pauseStatus)
            {
                _liveQuery.Unsubscribe();
            }
            else
            {
                this.Awake();// move it to "reInit" function...
            }
        }



        class User:LCObject
        {
            public int UserId { get => (int)this[USER_ID]; set=>this[USER_ID]= value; }
            public int AppearanceId { get => (int)this[APPEARANCE_ID]; set=>this[APPEARANCE_ID]=value; }
            public int RoomId { get=>(int)this[ROOM_ID]; set=>this[ROOM_ID] = value; }

            public User() : base(USER_CLASS_NAME)
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
                TestUpdate().Start();
            }
        }
        
        [Button("TestAdd")]
        public async Task TestAdd()
        {
            var query = new LCQuery<LCObject>(USER_CLASS_NAME);
            query.WhereEqualTo(USER_ID, mySupposedIdForTest);
            try
            {
                var users = await query.First(); //actually it should be only 1 user. 
                if (users != null)
                {
                    currentGenUid++;
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
                UserId = currentGenUid,
                RoomId = roomId,
                AppearanceId = currentGenUid
            };

            currentGenUid++;
            var savedUser = await user.Save();
            this.userId2ObjectId.TryAdd(currentGenUid, savedUser.ObjectId);
            this.objectId2UserId.TryAdd(savedUser.ObjectId, currentGenUid);
            Debug.Log($"user created, userId {currentGenUid}, objectId {savedUser.ObjectId}");
        }
        
        [Button("TestUpdate")]
        public async Task TestUpdate()
        {
            // var userId = UnityEngine.Random.Range(-1000, currentGenUid);
            var userId = this.mySupposedIdForTest;
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
            System.Diagnostics.Debug.Assert(user != null, nameof(user) + " != null");
            user.AppearanceId = appearanceId;
            var savedBack = await user.Save();
            // Debug.Log($"test update save back... {savedBack}");
            // CharMgr.instance.ChangeAprcFast(userId, appearanceId);

        }

        //
         private void Awake()
         {
             instance = this;
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
             LCObject.RegisterSubclass(USER_CLASS_NAME, ()=> new User());
             // TestSave();
             Init();
         }

         private void TestSave()
         {
             // var testUser = new User(){}
             // {
             //     userid
             // }
         }

         private async void Init()
         {
             var query = new LCQuery<User>(USER_CLASS_NAME);
             query.WhereExists("objectId");
             _liveQuery = await query.Subscribe();
             _liveQuery.OnCreate = ChangeOneAprcOnLiveQuery;
             _liveQuery.OnUpdate = (lcObject, resCollection) =>
             {
                 Debug.Log($"live query on update, lcObject is {lcObject}, resString is {resCollection}");
                 resCollection.ForEach(resEle => Debug.Log($"\n resElement: {resEle}"));
                 if (resCollection.Contains(APPEARANCE_ID))
                 {
                    ChangeOneAprcOnLiveQuery(lcObject);                     
                 }
             };
             
         }

         private void ChangeOneAprcOnLiveQuery(LCObject obj)
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

             var containsKey = CharMgr.instance.charDict.ContainsKey(user.UserId);
             if (!containsKey)
             {
                 Debug.Log("receive live query, but this userId don't exist in this scene...");
                 return;
             }
             var aprcId = (int)(obj[APPEARANCE_ID]);
             var mod = aprcId % CharMgr.instance.charPrefabs.Count;
             CharMain charMain = CharMgr.instance.GetCharacter(user.UserId);
             if (charMain==null)
             {
                 return;
             }
             if (charMain.AppearanceId == mod)
             {
                 Debug.Log($"user {user.UserId} aprc {user.AppearanceId}, same as current, not changing...");
                 return;
             }
             if (charMain != null)
             {
                 // CharMgr.instance.ChangeAppearance(aprcId, mod);
                 CharMgr.instance.onAprcChangedQueue.Enqueue(() =>
                 {
                     CharMgr.instance.ChangeAprcFast(user.UserId, mod);
                     charMain.AppearanceId = mod;
                 });
             }
             else
             {
                 Debug.LogError("charMain is null"); // when init, should get appearance before creation of char prefab.
             }
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

         public void LeanGetRefreshAllAprcIds()
         {
                var query = new LCQuery<LCObject>(USER_CLASS_NAME);
                query.WhereContainedIn(USER_ID, CharMgr.instance.charDict.Keys);
                query.Find().ContinueWith(t =>
                {
                    if (t.IsFaulted)
                    {
                        Debug.LogError(t.Exception);
                    }
                    else
                    {
                        var users = t.Result;
                        foreach (var user in users)
                        {
                            var aprcId = (int)(user[APPEARANCE_ID]);
                            Debug.Log($"userId {user[USER_ID]} appearanceId {aprcId}");
                            CharMgr.instance.onAprcChangedQueue.Enqueue(() =>
                            {
                               CharMgr.instance.ChangeAprcFast((int)user[USER_ID], aprcId); 
                            });
                        }
                    }
                });
         }

         public int mySupposedIdForTest = -1000;

         // [Button]
         // public async Task LeanCreateStartId()
         // {
             
         // }
         
         [Button("LeanGetRefreshMe")]
         public async Task LeanGetRefreshMe()
         {
             var charMain = CharMgr.instance.GetMe();
             int myId;
             if (charMain == null)
             {
                 myId = mySupposedIdForTest;
             }
             else
             {
                 myId = charMain.userId;
             }
             var query = new LCQuery<LCObject>(USER_CLASS_NAME);
             query.WhereEqualTo(USER_ID, myId);
            await query.Find().ContinueWith(async t =>
            {
                if (t.IsFaulted)
                {
                    Debug.LogError(t.Exception);
                }
                else
                {
                    var users = t.Result;
                    var found = false;
                    User myUser = null;
                    foreach (var user in users)
                    {
                        found = true;
                        myUser = (User)user;
                        var aprcId = (int)(user[APPEARANCE_ID]);
                        Debug.Log($"userId {user[USER_ID]} appearanceId {aprcId}");
                        CharMgr.instance.onAprcChangedQueue.Enqueue(() =>
                        {
                            CharMgr.instance.ChangeAprcFast((int)user[USER_ID], aprcId);
                        });
                        break;
                    }

                    if (!found)
                    {
                        Debug.Log($"my user id does not exist on leancloud, creating... you should call this function again...");
                        var createdUser = new User()
                        {
                            UserId = myId
                        };
                        await createdUser.Save();
                        // return;
                    }
                     
                     
                    if (myUser[APPEARANCE_ID] ==null || myUser.AppearanceId <= 0)
                    {
                        var seed = myId + (int)new DateTimeOffset(DateTime.Now).ToUnixTimeMilliseconds();
                        var randomCtor = new Random(seed);
                        var initAprcId = randomCtor.Next(1, CharMgr.instance.charPrefabs.Count);
                        var setIdRequest = LCObject.CreateWithoutData(USER_CLASS_NAME, myUser.ObjectId);
                        setIdRequest[APPEARANCE_ID] = initAprcId;
                        var saved = (await setIdRequest.Save(true)) as User;
                        if (saved ==null)
                        {
                            Debug.Log("saved is null when randomizing my user appearance. Could be init aprc failure...");
                            return;
                        }
                        // CharMgr.instance.onAprcChangedQueue.Enqueue(() =>
                        // {
                        //     CharMgr.instance.ChangeAprcFast(saved.UserId, saved.AppearanceId);
                        // });
                    }
                }
            });

         }
         
         public void LeanGetRefreshAprcId(int userId)
         {
             var query = new LCQuery<LCObject>(USER_CLASS_NAME);
             query.WhereEqualTo(USER_ID, userId);
             query.Find().ContinueWith(t =>
             {
                 if (t.IsFaulted)
                 {
                     Debug.LogError(t.Exception);
                 }
                 else
                 {
                     var users = t.Result;
                     if (users.Count == 0)
                     {
                         Debug.Log($"userId {userId} does not exist on leancloud");
                         var newLeanUser = LCObject.Create(USER_CLASS_NAME);
                         newLeanUser[USER_ID] = userId;
                         newLeanUser.Save();
                         return;
                     }
                     foreach (var lcObject in users)
                     {
                         var aprcId = (int)(lcObject[APPEARANCE_ID]);
                         if (aprcId==null || aprcId<=0)
                         {
                             
                         }
                         Debug.Log($"userId {lcObject[USER_ID]} appearanceId {aprcId}");
                         CharMgr.instance.onAprcChangedQueue.Enqueue(() =>
                         {
                             CharMgr.instance.ChangeAprcFast((int)lcObject[USER_ID], aprcId);
                         });
                     }
                 }
             });
         }
         
         public void LeanRefreshMyAprc()
         {
                var userId = CharMgr.instance.GetMe().userId;
                LeanGetRefreshAprcId(userId);
         }

         public void HardInitOrRest(int userId)
         {
                var query = new LCQuery<LCObject>(USER_CLASS_NAME);
                query.WhereEqualTo(USER_ID, userId);
                query.Find().ContinueWith(t =>
                {
                    if (t.IsFaulted)
                    {
                        Debug.LogError(t.Exception);
                    }
                    else
                    {
                        
                        var users = t.Result;
                        foreach (var user in users)
                        {
                            var aprcId = (int)(user[APPEARANCE_ID]);
                            Debug.Log($"userId {user[USER_ID]} appearanceId {aprcId}");
                            CharMgr.instance.onAprcChangedQueue.Enqueue(() =>
                            {
                                CharMgr.instance.ChangeAprcFast((int)user[USER_ID], aprcId);
                            });
                        }
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
                 {//todo refactor , so that leancloud, char main aprcId and sprite are synced.
                     charMain.AppearanceId = mod;
                     CharMgr.instance.ChangeAppearance(sgId, (int)(lcObject[APPEARANCE_ID]));
                 }
                 else
                 {
                     Debug.LogError("charMain is null");// when init, should get appearance before creation of char prefab.
                 }
             }
             // _liveQuery = await _appearancesQuery.Subscribe();
             _liveQuery.OnEnter = (obj, updateKeys) =>
             {

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