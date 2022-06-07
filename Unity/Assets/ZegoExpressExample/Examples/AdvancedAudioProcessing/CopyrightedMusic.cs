using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;
using Newtonsoft.Json;
using System.IO;
using ZEGO;
using Newtonsoft.Json.Linq;
using System.Text;

public class CopyrightedMusic : MonoBehaviour
{
    Dropdown requestDropDown;
    Toggle toggleAux;
    Toggle toggleRepeat;
    Dropdown billinModeDropDown;
    Dropdown songIDDropDown;
    Dropdown resourceDropDown;
    Slider downloadProgressSlider;
    InputField requestJsonInput;
    InputField musicTokenInput;
    InputField krcLyricTokenInput;
    InputField playerStartPositionText;
    InputField playerIndexText;
    Dropdown playerAudioTrackIndexDropDown;
    InputField playerPublishVolumeInput;
    InputField playerPlayVolumeInput;
    InputField songIDInput;
    InputField resourceInput;
    InputField respondJsonInput;
    Slider playerProgressSlider;
    Text cacheSizeText;
    Text currentPitchText;
    Toggle enableAuxToggle;
    Toggle repeatToggle;

    ZegoExpressEngine engine;
    ZegoUser user = new ZegoUser();
    string roomID;
    string publishStreamID;
    
    bool isLoginRoom = false;
    bool isPublish = false;
    // Start is called before the first frame update
    ZegoCopyrightedMusic copyrightedMusicInstance;
    string path;
    
    private const int max_player_count = 4;
    private List<ZegoMediaPlayer> media_players = new List<ZegoMediaPlayer>();
    private List<string> request_apis = new List<string>();
    private Dictionary<string, string> request_apis_dics = new Dictionary<string, string>();
    private ZegoCopyrightedMusicRequestConfig request_config = new ZegoCopyrightedMusicRequestConfig();

    string select_resource_id;
    string select_song;
    uint audio_trace_count;
    int current_player_index = 0;
    Dictionary<int, List<string>> audioTrackIndexDic = new Dictionary<int, List<string>>();

    void Start()
    {
        CreateEngine();

        InitAll();

        // Create copyrighted music
        copyrightedMusicInstance = engine.CreateCopyrightedMusic();

        if (copyrightedMusicInstance != null)
        {
            Debug.Log(string.Format("CreateCopyrightedMusic success"));
        }

        copyrightedMusicInstance.onDownloadProgressUpdate = OnCopyrightedMusicDownloadProgressUpdate;
        copyrightedMusicInstance.onCurrentPitchValueUpdate = OnCurrentPitchValueUpdate;

        //Create media player
        for (int i = 0; i < max_player_count; i++)
        {
            var media_player = engine.CreateMediaPlayer();
            if(media_player != null)
            {
                Debug.Log(string.Format("CreateMediaPlayer success, index:{0}", media_player.GetIndex()));
                media_players.Add(media_player);

                media_player.onMediaPlayerPlayingProgress = OnMediaPlayerPlayingProgress;
                media_player.EnableAux(toggleAux.isOn);
                media_player.EnableRepeat(toggleRepeat.isOn);
            }
        }
#if UNITY_ANDROID && !UNITY_EDITOR
        StartCoroutine(LoadAndroidJson());
#else
        LoadJson();
#endif
    }

    // Update is called once per frame
    void Update()
    {
    }

    void OnDestroy()
    {
        Debug.Log("DestroyEngine");
        ZegoExpressEngine.DestroyEngine();
        engine = null;
    }

    void InitAll()
    {
        ZegoUtilHelper.InitLogView();

        user.userID = ZegoUtilHelper.UserID();
        user.userName = user.userID;

        roomID = "CopyrightedMusicRoom";
        publishStreamID = "CopyrightedMusicStream";

        GameObject.Find("InputField_RoomID").GetComponent<InputField>().text = roomID;
        // GameObject.Find("InputField_UserID").GetComponent<InputField>().text = user.userID;
        GameObject.Find("InputField_StreamID").GetComponent<InputField>().text = publishStreamID;

        toggleAux = GameObject.Find("Toggle_EnableAux").GetComponent<Toggle>();
        toggleRepeat = GameObject.Find("Toggle_Repeat").GetComponent<Toggle>();
        billinModeDropDown = GameObject.Find("Dropdown_BillingMode").GetComponent<Dropdown>();
        songIDDropDown = GameObject.Find("Dropdown_SongID").GetComponent<Dropdown>();
        resourceDropDown = GameObject.Find("Dropdown_Resource").GetComponent<Dropdown>();
        downloadProgressSlider = GameObject.Find("Slider_DownloadProgress").GetComponent<Slider>();
        respondJsonInput = GameObject.Find("InputField_RespondJson").GetComponent<InputField>();
        requestJsonInput = GameObject.Find("InputField_RequestJson").GetComponent<InputField>();
        musicTokenInput = GameObject.Find("InputField_MusicToken").GetComponent<InputField>();
        krcLyricTokenInput = GameObject.Find("InputField_KrcLyricToken").GetComponent<InputField>();
        playerStartPositionText = GameObject.Find("InputField_StartPosition").GetComponent<InputField>();
        playerIndexText = GameObject.Find("InputField_PlayerIndex").GetComponent<InputField>();
        playerAudioTrackIndexDropDown = GameObject.Find("Dropdown_AudioTrackIndex").GetComponent<Dropdown>();
        playerPublishVolumeInput = GameObject.Find("InputField_PublishVolume").GetComponent<InputField>();
        playerPlayVolumeInput = GameObject.Find("InputField_PlayVolume").GetComponent<InputField>();
        playerProgressSlider = GameObject.Find("Slider_Progress").GetComponent<Slider>();
        cacheSizeText = GameObject.Find("Text_CacheSize").GetComponent<Text>();
        songIDInput = GameObject.Find("InputField_SongID").GetComponent<InputField>();
        resourceInput = GameObject.Find("InputField_Resource").GetComponent<InputField>();
        currentPitchText = GameObject.Find("Text_CurrentPitch").GetComponent<Text>();
        enableAuxToggle = GameObject.Find("Toggle_EnableAux").GetComponent<Toggle>();
        repeatToggle = GameObject.Find("Toggle_Repeat").GetComponent<Toggle>();

        // Song ID list
        List<string> song_id_list = new List<string>() {
                "65973657",
                "101846593",
                "300785364",
                "287915293",
                "125282604",
                "345222868",
                "68431743",
                "245222868",
                "36365"
            };

        // Resource ID list
        List<string> resource_id_list = new List<string>() {
                "z_65973657_1",
                "z_101846593_1",
                "z_101846593_2",
                "z_300785364_1",
                "z_300785364_2",
                "z_287915293_1",
                "z_287915293_2",
                "z_125282604_1",
                "z_125282604_2",
                "z_345222868_1",
                "z_345222868_2",
                "z_125282604_1_hq",
                "z_125282604_1_sq",
            };

        List<string> billing_mode_list = new List<string>()
            {
                /** Pay-per-use. */
                "Count",
                /** Monthly billing by user. */
                "User",
                /** Monthly billing by room. */
                "Room"
            };

        songIDDropDown.AddOptions(song_id_list);
        resourceDropDown.AddOptions(resource_id_list);
        billinModeDropDown.AddOptions(billing_mode_list);
        playerIndexText.text = "0";
        playerStartPositionText.text = "0";

        select_resource_id = resourceDropDown.options[0].text;
        select_song = songIDDropDown.options[0].text;

        request_config.mode = ZegoCopyrightedMusicBillingMode.Count;
        request_config.songID = select_song;
    }

    void BindEventHandler()
    {
        engine.onRoomStateChanged = OnRoomStateChanged;
        engine.onRoomUserUpdate = OnRoomUserUpdate;
        engine.onPublisherStateUpdate = OnPublisherStateUpdate;
        engine.onLocalDeviceExceptionOccurred = OnLocalDeviceExceptionOccurred;
        engine.onDebugError = OnDebugError;
    }

    void OnRoomStateChanged(string roomID, ZegoRoomStateChangedReason reason, int errorCode, string extendedData)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnRoomStateChanged, roomID:{0}, reason:{1}, errorCode:{2}, extendedData:{3}", roomID, reason, errorCode, extendedData));
    }

    void OnRoomUserUpdate(string roomID, ZegoUpdateType updateType, List<ZegoUser> userList, uint userCount)
    {
        if (updateType == ZegoUpdateType.Add)
        {
            userList.ForEach((user) => {
                ZegoUtilHelper.PrintLogToView(string.Format("user {0} enter room {1}", user.userID, roomID));
            });
        }
        else
        {
            userList.ForEach((user) => {
                ZegoUtilHelper.PrintLogToView(string.Format("user {0} exit room {1}", user.userID, roomID));
            });
        }
    }

    void OnPublisherStateUpdate(string streamID, ZegoPublisherState state, int errorCode, string extendedData)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnPublisherStateUpdate, streamID:{0}, state:{1}, errorCode:{2}, extendedData:{3}", streamID, state, errorCode, extendedData));
    }

    void OnLocalDeviceExceptionOccurred(ZegoDeviceExceptionType exceptionType, ZegoDeviceType deviceType, string deviceID)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnLocalDeviceExceptionOccurred, exceptionType:{0}, deviceType:{1}, deviceID:{2}", exceptionType, deviceType, deviceID));
    }

    void OnDebugError(int errorCode, string funcName, string info)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnDebugError, errorCode:{0}, funcName:{1}, info:{2}", errorCode, funcName, info));
    }

    void OnCopyrightedMusicDownloadProgressUpdate(ZegoCopyrightedMusic copyrightedMusic, string resourceID, float progressRate)
    {
        downloadProgressSlider.value = (int)(progressRate * 100);
    }

    void OnCurrentPitchValueUpdate(ZegoCopyrightedMusic copyrightedMusic, string resourceID, int currentDuration, int pitchValue)
    {
        currentPitchText.text = pitchValue.ToString();
    }

    void OnMediaPlayerPlayingProgress(ZegoMediaPlayer mediaPlayer, ulong millisecond)
    {
        if (mediaPlayer.GetIndex() == (max_player_count - 1 - current_player_index))
        {
            //trackBar_MediaPlay.Value = (int)millisecond;
            playerProgressSlider.value = (int)millisecond;
        }
    }



    public void CreateEngine()
    {
        if (engine == null)
        {
            ZegoEngineProfile profile = new ZegoEngineProfile();
            profile.appID = ZegoUtilHelper.AppID();
            profile.scenario = ZegoScenario.General;
            ZegoUtilHelper.PrintLogToView(string.Format("CreateEngine, appID:{0}, appSign:{1}, scenerio:{2}", profile.appID, profile.appSign, profile.scenario));
            engine = ZegoExpressEngine.CreateEngine(profile);
            BindEventHandler();
        }
    }

    public void DestroyEngine()
    {
        ZegoUtilHelper.PrintLogToView("DestroyEngine");
        ZegoExpressEngine.DestroyEngine();
        engine = null;
    }

    void LoginRoom()
    {
        roomID = GameObject.Find("InputField_RoomID").GetComponent<InputField>().text;
        ZegoRoomConfig config = new ZegoRoomConfig();
        config.token = ZegoUtilHelper.Token();
        ZegoUtilHelper.PrintLogToView(string.Format("LoginRoom, roomID:{0}, userID:{1}, userName:{2}, token:{3}", roomID, user.userID, user.userName, config.token));
        engine.LoginRoom(roomID, user, config);

        GameObject.Find("Button_LoginRoom").GetComponent<Button>().GetComponentInChildren<Text>().text = "Logout Room";
    }

    void LogoutRoom()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("LogoutRoom"));
        engine.LogoutRoom();

        GameObject.Find("Button_LoginRoom").GetComponent<Button>().GetComponentInChildren<Text>().text = "Login Room";
    }

    void StartPreview()
    {
        ZegoUtilHelper.PrintLogToView("StartPreview");
        engine.StartPreview();
    }

    void StopPreview()
    {
        ZegoUtilHelper.PrintLogToView("StopPreview");
        engine.StopPreview();
    }

    void StartPublishingStream()
    {
        publishStreamID = GameObject.Find("InputField_StreamID").GetComponent<InputField>().text;
        //GameObject.Find("Text_PreviewStreamID").GetComponent<Text>().text = publishStreamID;
        ZegoUtilHelper.PrintLogToView(string.Format("StartPublishingStream, streamID:{0}", publishStreamID));
        engine.StartPublishingStream(publishStreamID);

        GameObject.Find("Button_StartPublishing").GetComponent<Button>().GetComponentInChildren<Text>().text = "Stop Publishing";
    }

    void StopPublishingStream()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("StopPublishingStream"));
        engine.StopPublishingStream();

        GameObject.Find("Button_StartPublishing").GetComponent<Button>().GetComponentInChildren<Text>().text = "Start Publishing";
    }

    public void OnButtonStartPublishing()
    {
        if (isPublish)
        {
            isPublish = false;
            StopPreview();
            StopPublishingStream();
        }
        else
        {
            isPublish = true;
            StartPreview();
            StartPublishingStream();
        }
    }

    public void Home()
    {
        DestroyEngine();
        // load scene home page
        SceneManager.LoadScene("HomePage");
    }

    public void OnButtonLoginRoom()
    {
        if (isLoginRoom)
        {
            isLoginRoom = false;
            LogoutRoom();
        }
        else
        {
            isLoginRoom = true;
            LoginRoom();
        }
    }

    public void OnButtonInitCopyrightedMusic()
    {
        ZegoCopyrightedMusicConfig config = new ZegoCopyrightedMusicConfig();
        config.user = new ZegoUser();
        config.user.userID = user.userID;
        config.user.userName = user.userName;

        ZegoUtilHelper.PrintLogToView(string.Format("InitCopyrightedMusic,userID:{0}, userName:{1}", config.user.userID, config.user.userName));
        copyrightedMusicInstance.InitCopyrightedMusic(config, (int errorCode) => {
            ZegoUtilHelper.PrintLogToView(string.Format("InitCopyrightedMusic, errorCode:{0}", errorCode));
        });
    }

    private void LoadJson()
    {
        string json_file = Application.streamingAssetsPath + "/ZegoResources/CopyrightedMusic.json";
        using (System.IO.StreamReader file = File.OpenText(json_file))
        {
            using (JsonTextReader reader = new JsonTextReader(file))
            {
                List<string> requestList = new List<string>();
                var json_obj = JObject.Parse(file.ReadToEnd());
                //dynamic result = Newtonsoft.Json.JsonConvert.DeserializeObject(file.ReadToEnd());
                foreach (var x in json_obj.Properties())
                {
                    ZegoUtilHelper.PrintLogToView(string.Format("{0}", x.ToString()));
                    request_apis.Add(x.ToString());
                    requestList.Add(x.Name);
                    request_apis_dics.Add(x.Name, x.Value.ToString());
                }

                if(requestList.Count > 0)
                {
                    requestDropDown = GameObject.Find("Dropdown_RequestJson").GetComponent<Dropdown>();
                    requestDropDown.AddOptions(requestList);
                }
            }
        }
        OnSelectRequestJson();
    }

    IEnumerator LoadAndroidJson()
    {
        string json_file = Application.streamingAssetsPath + "/ZegoResources/CopyrightedMusic.json";
        using(UnityWebRequest request = UnityWebRequest.Get(json_file))
        {
            yield return request.SendWebRequest();

            if(request.downloadHandler.isDone)
            {
                List<string> requestList = new List<string>();
                var json_obj = JObject.Parse(request.downloadHandler.text);
                //dynamic result = Newtonsoft.Json.JsonConvert.DeserializeObject(file.ReadToEnd());
                foreach (var x in json_obj.Properties())
                {
                    ZegoUtilHelper.PrintLogToView(string.Format("{0}", x.ToString()));
                    request_apis.Add(x.ToString());
                    requestList.Add(x.Name);
                    request_apis_dics.Add(x.Name, x.Value.ToString());
                }

                if (requestList.Count > 0)
                {
                    requestDropDown = GameObject.Find("Dropdown_RequestJson").GetComponent<Dropdown>();
                    requestDropDown.AddOptions(requestList);
                }
                OnSelectRequestJson();
            }
        }
        
    }

    public void OnSelectRequestJson()
    {
        int select_index = requestDropDown.value;
        string req_command, req_param;
        req_command = requestDropDown.options[select_index].text;
        req_param = request_apis_dics[req_command];
        

        var request_json = request_apis[select_index];
        requestJsonInput.text = req_param;
        ZegoUtilHelper.PrintLogToView(string.Format("Select json request:{0}", request_json));
    }

    public void OnButtonSendRequest()
    {
        if(requestDropDown.options.Count > 0)
        {
            string req_command, req_param;
            int select_index = requestDropDown.value;
            req_command = requestDropDown.options[select_index].text;
            //req_param = requestJsonInput.text;//request_apis_dics[req_command];
            //req_param = HttpUtility.UrlEncode(requestJsonInput.text, System.Text.Encoding.UTF8);//request_apis_dics[req_command];
            byte[] unicode_bytes = Encoding.Default.GetBytes(requestJsonInput.text);
            byte[] utf8_bytes = Encoding.Convert(Encoding.Unicode, Encoding.UTF8, unicode_bytes);
            req_param = ZegoUtilHelper.ConvertDefaultTextEncoding(requestJsonInput.text, Encoding.UTF8);
            ZegoUtilHelper.PrintLogToView(string.Format("SendExtendedRequest, req_command:{0}, req_param:{1}", req_command, req_param));
            copyrightedMusicInstance.SendExtendedRequest(req_command, req_param, (int errorCode, string commands, string result) => {
                ZegoUtilHelper.PrintLogToView(string.Format("OnCopyrightedMusicSendExtendedRequest,errorCode:{0}, commands:{1}, result:{2}", errorCode, commands, result));
            });
        }
    }

    public void OnButtonGetMusicByToken()
    {
        string token = musicTokenInput.text;
        ZegoUtilHelper.PrintLogToView(string.Format("GetMusicByToken, token:{0}", token));
        copyrightedMusicInstance.GetMusicByToken(token, (int errorCode, string resource) => {
            ZegoUtilHelper.PrintLogToView(string.Format("OnCopyrightedMusicGetMusicByToken, errorCode:{0}, resource:{1}", errorCode, resource));
        });
    }

    public void OnButtonGetKrcLyric()
    {
        string token = krcLyricTokenInput.text;
        ZegoUtilHelper.PrintLogToView(string.Format("GetKrcLyricByToken, token:{0}", token));
        copyrightedMusicInstance.GetKrcLyricByToken(token, (int errorCode, string lyrics) => {
            ZegoUtilHelper.PrintLogToView(string.Format("OnCopyrightedMusicGetKrcLyricByToken, errorCode:{0}, lyrics:{1}", errorCode, lyrics));
        });
    }

    public void OnButtonRequestSong()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("RequestSong, mode{0}, songID{1}", request_config.mode, request_config.songID));
        copyrightedMusicInstance.RequestSong(request_config, (int errorCode, string resource) =>
        {
            ZegoUtilHelper.PrintLogToView(string.Format("RequestSong result, errorCode:{0}, resource:{1}", errorCode, resource));
            if(errorCode == 0)
            {
                respondJsonInput.text = resource;
            }
        });
    }

    public void OnButtonDownload()
    {
        downloadProgressSlider.value = 0;
        ZegoUtilHelper.PrintLogToView(string.Format("Download, resoureID:{0}", select_resource_id));
        copyrightedMusicInstance.Download(select_resource_id, (int errorCode) => {
            ZegoUtilHelper.PrintLogToView(string.Format("OnCopyrightedMusicDownload, errorCode:{0}", errorCode));

            //Get cache size
            cacheSizeText.text = string.Format("{0}", copyrightedMusicInstance.GetCacheSize());
            
        });
    }

    public void OnButtonGetCacheSize()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("GetCacheSize"));
        var cache_size_ = copyrightedMusicInstance.GetCacheSize();
        cacheSizeText.text = cache_size_.ToString();
    }

    public void OnButtonClearCache()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("ClearCache"));
        copyrightedMusicInstance.ClearCache();
    }

    public void OnButtonPlay()
    {
        int current_player_index = int.Parse(playerIndexText.text);
        if(current_player_index >= max_player_count)
        {
            ZegoUtilHelper.PrintLogToView(string.Format("Player index out of range: {0}", current_player_index));
            return;
        }
        var media_player = media_players[current_player_index];

        int start_pos_ = int.Parse(GameObject.Find("InputField_StartPosition").GetComponent<InputField>().text);

        ZegoUtilHelper.PrintLogToView(string.Format("LoadCopyrightedMusicResourceWithPosition, resource:{0}, startPosition:{1}, mediaIndex:{2}", select_resource_id, start_pos_, current_player_index));
        media_player.LoadCopyrightedMusicResourceWithPosition(select_resource_id, start_pos_, (int errorCode) =>
        {
            ZegoUtilHelper.PrintLogToView(string.Format("OnLoadResourceCallback, errorCode:{0}", errorCode));

            if (errorCode == 0)
            {
                playerProgressSlider.maxValue = (int)media_player.GetTotalDuration();

                // Get current play volume
                int play_volume = media_player.GetPlayVolume();
                playerPlayVolumeInput.text = play_volume.ToString();

                // Get current publish volume
                int publish_volume = media_player.GetPublishVolume();
                playerPublishVolumeInput.text = publish_volume.ToString();

                // Get audio trace count
                List<string> track_index_ = new List<string>();
                audio_trace_count = media_player.GetAudioTrackCount();
                for(int i=0;i<audio_trace_count;i++)
                {
                    track_index_.Add(i.ToString());
                }
                audioTrackIndexDic[current_player_index] = track_index_;
                playerAudioTrackIndexDropDown.ClearOptions();
                playerAudioTrackIndexDropDown.AddOptions(track_index_);

                media_player.Start();
            }
        });
    }

    public void OnButtonPause()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("Pause, index:{0}", current_player_index));
        var media_player = media_players[current_player_index];
        media_player.Pause();
    }

    public void OnButtonResume()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("Resume, index:{0}", current_player_index));
        var media_player = media_players[current_player_index];
        media_player.Resume();
    }

    public void OnButtonStop()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("Stop, index:{0}", current_player_index));
        var media_player = media_players[current_player_index];
        media_player.Stop();
    }

    public void OnButtonSeekTo()
    {
        ulong seek_pos_ = ulong.Parse(GameObject.Find("InputField_SeekToPosition").GetComponent<InputField>().text);
        ZegoUtilHelper.PrintLogToView(string.Format("SeekTo, position:{0}, index:{1}", seek_pos_, current_player_index));
        var media_player = media_players[current_player_index];
        media_player.SeekTo(seek_pos_, (int errorCode)=> {
            ZegoUtilHelper.PrintLogToView(string.Format("SeekTo result, errorCode:{0}", errorCode));
        });
    }

    public void OnButtonGetDuration()
    {
        var media_player = media_players[current_player_index];
        ulong duration_ = media_player.GetTotalDuration();
        ZegoUtilHelper.PrintLogToView(string.Format("GetTotalDuration, duration:{0}, index:{1}", duration_, current_player_index));
        GameObject.Find("Text_Duration").GetComponent<Text>().text = duration_.ToString();
    }

    public void OnButtonGetCurrentProgress()
    {
        var media_player = media_players[current_player_index];
        ulong progress_ = media_player.GetCurrentProgress();
        ZegoUtilHelper.PrintLogToView(string.Format("GetCurrentProgress, progress:{0}, index:{1}", progress_, current_player_index));
    }

    public void OnButtonGetPublishVolume()
    {
        var media_player = media_players[current_player_index];
        int volume_ = media_player.GetPublishVolume();
        ZegoUtilHelper.PrintLogToView(string.Format("GetPublishVolume, volume:{0}, index:{1}", volume_, current_player_index));
        GameObject.Find("InputField_PublishVolume").GetComponent<InputField>().text = volume_.ToString();
        
    }

    public void OnButtonSetPublishVolume()
    {
        var media_player = media_players[current_player_index];
        int volume_ = int.Parse(GameObject.Find("InputField_PublishVolume").GetComponent<InputField>().text);
        media_player.SetPublishVolume(volume_);
        ZegoUtilHelper.PrintLogToView(string.Format("SetPublishVolume, volume:{0}, index:{1}", volume_, current_player_index));
    }
    public void OnButtonGetPlayVolume()
    {
        var media_player = media_players[current_player_index];
        int volume_ = media_player.GetPlayVolume();
        ZegoUtilHelper.PrintLogToView(string.Format("GetPlayVolume, volume:{0}, index:{1}", volume_, current_player_index));
        GameObject.Find("InputField_PlayVolume").GetComponent<InputField>().text = volume_.ToString();
    }
    public void OnButtonSetPlayVolume()
    {
        var media_player = media_players[current_player_index];
        int volume_ = int.Parse(GameObject.Find("InputField_PlayVolume").GetComponent<InputField>().text);
        media_player.SetPlayVolume(volume_);
        ZegoUtilHelper.PrintLogToView(string.Format("SetPlayVolume, volume:{0}, index:{1}", volume_, current_player_index));
    }

    public void OnButtonStartScore()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("StartScore, resource_id_:{0}, pitchInterval:{1}", select_resource_id, 60));
        copyrightedMusicInstance.StartScore(select_resource_id, 60);
    }

    public void OnButtonPauseScore()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("PauseScore, resource_id_:{0}", select_resource_id));
        copyrightedMusicInstance.PauseScore(select_resource_id);
    }

    public void OnButtonResumeScore()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("ResumeScore, resource_id_:{0}", select_resource_id));
        copyrightedMusicInstance.ResumeScore(select_resource_id);
    }

    public void OnButtonStopScore()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("StopScore, resource_id_:{0}", select_resource_id));
        copyrightedMusicInstance.StopScore(select_resource_id);
    }

    public void OnButtonResetScore()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("ResetScore, resource_id_:{0}", select_resource_id));
        copyrightedMusicInstance.ResetScore(select_resource_id);
    }

    public void OnButtonGetPreviousScore()
    {
        int score_ = copyrightedMusicInstance.GetPreviousScore(select_resource_id);
        ZegoUtilHelper.PrintLogToView(string.Format("GetPreviousScore, resource_id_:{0}, previousScore:{1}", select_resource_id, score_));

    }

    public void OnButtonGetAverageScore()
    {
        int score_ = copyrightedMusicInstance.GetAverageScore(select_resource_id);
        ZegoUtilHelper.PrintLogToView(string.Format("GetAverageScore, resource_id_:{0}, averageScore:{1}", select_resource_id, score_));
    }

    public void OnButtonGetTotalScore()
    {
        int score_ = copyrightedMusicInstance.GetTotalScore(select_resource_id);
        ZegoUtilHelper.PrintLogToView(string.Format("GetTotalScore, resource_id_:{0}, totalScore:{1}", select_resource_id, score_));
    }

    public void OnButtonGetStandardPitch()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("GetStandardPitch, resource_id_:{0}", select_resource_id));
        copyrightedMusicInstance.GetStandardPitch(select_resource_id, (int errorCode, string pitch) => {
            ZegoUtilHelper.PrintLogToView(string.Format("GetStandardPitch result, errorCode:{0}, pitch:{1}", errorCode, pitch));
        });
    }

    public void OnButtonGetCurrentPitch()
    {
        int current_pitch_ = copyrightedMusicInstance.GetCurrentPitch(select_resource_id);
        ZegoUtilHelper.PrintLogToView(string.Format("GetCurrentPitch, resource_id_:{0}, currentPitch:{1}", select_resource_id, current_pitch_));

    }

    public void OnButtonRequestAccoponiment()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("RequestAccompaniment,mode:{0}, songID:{1}", request_config.mode, request_config.songID));
        copyrightedMusicInstance.RequestAccompaniment(request_config, (int errorCode, string resource) => {
            ZegoUtilHelper.PrintLogToView(string.Format("OnCopyrightedMusicRequestAccompaniment,errorCode:{0}, resourece:{1}", errorCode, resource));
            if(errorCode == 0)
            {
                respondJsonInput.text = resource;
            }
        });
    }

    public void OnButtonRequestAccoponimentClip()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("RequestAccompanimentClip,mode:{0}, songID:{1}", request_config.mode, request_config.songID));
        copyrightedMusicInstance.RequestAccompanimentClip(request_config, (int errorCode, string resource) => {
            ZegoUtilHelper.PrintLogToView(string.Format("OnCopyrightedMusicRequestAccompaniment,errorCode:{0}, resourece:{1}", errorCode, resource));
            if(errorCode == 0)
            {
                respondJsonInput.text = resource;
            }
        });
    }

    public void OnButtonGetLrcLyric()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("GetLrcLyric, songID:{0}", request_config.songID));
        copyrightedMusicInstance.GetLrcLyric(request_config.songID, (int errorCode, string lyrics) => {
            ZegoUtilHelper.PrintLogToView(string.Format("OnCopyrightedMusicGetLrcLyric, errorCode:{0}, lyrics:{1}", errorCode, lyrics));
        });
    }

    public void OnBillingModeChanged()
    {
        ZegoCopyrightedMusicBillingMode mode_change = (ZegoCopyrightedMusicBillingMode)billinModeDropDown.value;
        request_config.mode = mode_change;


        ZegoUtilHelper.PrintLogToView(string.Format("OnBillingModeChanged, mode:{0}", mode_change));
    }

    public void OnSongIDChanged()
    {
        string manual_song_id_ = songIDInput.text;
        if(manual_song_id_.Length > 0)
        {
            request_config.songID = manual_song_id_;
        }
        else
        {
            int select_index_ = songIDDropDown.value;
            string song_id_ = songIDDropDown.options[select_index_].text;
            request_config.songID = song_id_;
        }

        ZegoUtilHelper.PrintLogToView(string.Format("OnSongIDChanged, songID:{0}", request_config.songID));
    }

    public void OnResourceChanged()
    {
        string manual_resource = resourceInput.text;
        if(manual_resource.Length > 0)
        {
            select_resource_id = manual_resource;
        }
        else
        {
            int select_index_ = resourceDropDown.value;
            select_resource_id = resourceDropDown.options[select_index_].text;
        }

        ZegoUtilHelper.PrintLogToView(string.Format("OnResourceChanged, resource:{0}", select_resource_id));
    }

    public void OnPlayerIndexChanged()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnPlayerIndexChanged, index:{0}", playerIndexText.text));
        current_player_index = int.Parse(playerIndexText.text);

        playerAudioTrackIndexDropDown.options.Clear();

        if(audioTrackIndexDic.Count > 0)
        {
            var track_list = audioTrackIndexDic[current_player_index];
            playerAudioTrackIndexDropDown.AddOptions(track_list);
        }
    }

    public void OnAudioTrackIndexChanged()
    {
        uint audio_track_index_ = (uint)playerAudioTrackIndexDropDown.value;
        var media_player = media_players[current_player_index];
        media_player.SetAudioTrackIndex(audio_track_index_);
        ZegoUtilHelper.PrintLogToView(string.Format("SetAudioTrackIndex, index:{0}", audio_track_index_));
        
    }

    public void OnToggleAux()
    {
        var enable_ = enableAuxToggle.isOn;
        var media_player = media_players[current_player_index];
        media_player.EnableAux(enable_);
        ZegoUtilHelper.PrintLogToView(string.Format("EnableAux, enable:{0}", enable_));
    }

    public void OnToggleRepeat()
    {
        var enable_ = repeatToggle.isOn;
        var media_player = media_players[current_player_index];
        media_player.EnableRepeat(enable_);
        ZegoUtilHelper.PrintLogToView(string.Format("EnableRepeat, enable:{0}", enable_));
    }
}
