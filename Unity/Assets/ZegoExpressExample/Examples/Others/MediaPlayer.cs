using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Networking;
using System.IO;
using ZEGO;

public class MediaPlayer : MonoBehaviour
{
    ZegoExpressEngine engine;
    ZegoUser user = new ZegoUser();
    string roomID;
    string publishStreamID;
    string playStreamID;
    RawImageVideoSurface localVideoSurface = null;
    RawImageVideoSurface remoteVideoSurface = null;
#if UNITY_ANDROID || UNITY_IPHONE
    DeviceOrientation preOrientation = DeviceOrientation.Unknown;
#endif
    Text text_RoomState;
    Text text_RoomID;
    bool isPublish = false;
    bool isPlay = false;
    // Start is called before the first frame update
    ZegoMediaPlayer mediaPlayer;

    string path;
    private Dictionary<string, string> localResources = new Dictionary<string, string>();
    private Dictionary<string, string> remoteResources = new Dictionary<string, string>();

    string currentLocalResourcePath;
    string currentRemoteResourceUrl;
    string currentResourcePath;

    InputField remoteResourceUrlInput;
    InputField localResourcePathInput;
    InputField publishStreamIDInput;
    InputField playStreamIDInput;
    InputField loadResourcePositionInput;
    InputField seekToPositionInput;
    InputField playLoopCountInput;
    InputField netWorkResourceMaxCacheInputSize;
    InputField netWorkResourceMaxCacheInputTime;
    InputField progressIntervalInput;
    InputField netWorkBufferThresholdInput;
    Dropdown remoteResourceDropdown;
    Dropdown localResourceDropdown;
    Dropdown audioTrackIndexDropdown;
    Slider progressSlider;
    Slider publishVolumeSlider;
    Slider playVolumeSlider;
    Slider pitchSlider;
    Slider playSpeedSlider;
    Toggle muteLocalToggle;
    Toggle repeatToggle;
    Toggle enableAuxToggle;
    Toggle enableAccurateSeekToggle;
    Toggle enableSoundLevelMonitorToggle;
    Toggle enableFrequencySpectrumMonitorToggle;

    Text netWorkResourceCacheSizeText;
    Text netWorkResourceCacheTimeText;
    bool isDragProgressSlider = false;


    void Start()
    {
        CreateEngine();

        InitAll();

        ZegoUtilHelper.PrintLogToView("CreateMediaPlayer");
        mediaPlayer = engine.CreateMediaPlayer();
        path = Application.streamingAssetsPath + "/ZegoResources/ad.mp4";

        if(mediaPlayer != null)
        {
            ZegoUtilHelper.PrintLogToView(string.Format("CreateMediaPlayer success, index:{0}", mediaPlayer.GetIndex()));

            mediaPlayer.onMediaPlayerPlayingProgress = OnMediaPlayerPlayingProgress;
            mediaPlayer.onMediaPlayerFrequencySpectrumUpdate = (ZegoMediaPlayer mediaPlayer, List<float> spectrumList)=>{
                 Debug.Log(string.Format("onMediaPlayerFrequencySpectrumUpdate"));
            };
            mediaPlayer.onMediaPlayerNetworkEvent = (ZegoMediaPlayer mediaPlayer, ZegoMediaPlayerNetworkEvent networkEvent)=>{
                ZegoUtilHelper.PrintLogToView(string.Format("onMediaPlayerNetworkEvent, networkEvent:{0}", networkEvent));
            };
            mediaPlayer.onMediaPlayerRecvSEI = (ZegoMediaPlayer mediaPlayer, List<byte> data)=>{
                Debug.Log(string.Format("onMediaPlayerRecvSEI"));
            };
            mediaPlayer.onMediaPlayerSoundLevelUpdate = (ZegoMediaPlayer mediaPlayer, float soundLevel)=>{
                Debug.Log(string.Format("onMediaPlayerSoundLevelUpdate, soundLevel:{0}", soundLevel));
            };
            mediaPlayer.onMediaPlayerStateUpdate = (ZegoMediaPlayer mediaPlayer, ZegoMediaPlayerState state, int errorCode)=>{
                ZegoUtilHelper.PrintLogToView(string.Format("onMediaPlayerStateUpdate, state:{0}, errorCode:{1}", state, errorCode));
            };
            // SetVideoHandler Not available for Unity3D
            // mediaPlayer.SetVideoHandler((ZegoMediaPlayer mediaPlayer, System.IntPtr[] data, uint[] dataLength, ZegoVideoFrameParam param, string extraInfo)=>{
            //     Debug.Log(string.Format("onVideoFrame"));
            // }, ZegoVideoFrameFormat.ARGB32);
        }
        
        LoginRoom();
    }

    // Update is called once per frame
    void Update()
    {
#if UNITY_ANDROID || UNITY_IPHONE
        if (engine != null)
        {
            if (preOrientation != Input.deviceOrientation)
            {

                if (Input.deviceOrientation == DeviceOrientation.Portrait)
                {
                    engine.SetAppOrientation(ZegoOrientation.ZegoOrientation_0);
                }
                else if (Input.deviceOrientation == DeviceOrientation.PortraitUpsideDown)
                {
                    engine.SetAppOrientation(ZegoOrientation.ZegoOrientation_180);
                }
                else if (Input.deviceOrientation == DeviceOrientation.LandscapeLeft)
                {
                    engine.SetAppOrientation(ZegoOrientation.ZegoOrientation_90);
                }
                else if (Input.deviceOrientation == DeviceOrientation.LandscapeRight)
                {
                    engine.SetAppOrientation(ZegoOrientation.ZegoOrientation_270);
                }
                preOrientation = Input.deviceOrientation;

            }
        }
#endif
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

        text_RoomState = GameObject.Find("Text_RoomState").GetComponent<Text>();
        text_RoomID = GameObject.Find("Text_RoomID").GetComponent<Text>();
        netWorkResourceCacheSizeText = GameObject.Find("Text_NetWorkResourceCacheSize").GetComponent<Text>();
        netWorkResourceCacheTimeText = GameObject.Find("Text_NetWorkResourceCacheTime").GetComponent<Text>();

        publishStreamIDInput = GameObject.Find("InputField_PublishStreamID").GetComponent<InputField>();
        playStreamIDInput = GameObject.Find("InputField_PlayStreamID").GetComponent<InputField>();
        remoteResourceUrlInput = GameObject.Find("InputField_RemoteResourceUrl").GetComponent<InputField>();
        localResourcePathInput = GameObject.Find("InputField_LocalResourcePath").GetComponent<InputField>();
        loadResourcePositionInput = GameObject.Find("InputField_LoadResourcePosition").GetComponent<InputField>();
        seekToPositionInput = GameObject.Find("InputField_SeekToPosition").GetComponent<InputField>();
        playLoopCountInput = GameObject.Find("InputField_PlayLoopCount").GetComponent<InputField>();
        netWorkResourceMaxCacheInputSize = GameObject.Find("InputField_NetWorkResourceMaxCacheSize").GetComponent<InputField>();
        netWorkResourceMaxCacheInputTime = GameObject.Find("InputField_NetWorkResourceMaxCacheTime").GetComponent<InputField>();
        progressIntervalInput = GameObject.Find("InputField_ProgressInterval").GetComponent<InputField>();
        netWorkBufferThresholdInput = GameObject.Find("InputField_NetWorkBufferThreshold").GetComponent<InputField>();

        remoteResourceDropdown = GameObject.Find("Dropdown_RemoteResource").GetComponent<Dropdown>(); 
        localResourceDropdown = GameObject.Find("Dropdown_LocalResource").GetComponent<Dropdown>();
        audioTrackIndexDropdown = GameObject.Find("Dropdown_AudioTrackIndex").GetComponent<Dropdown>();


        progressSlider = GameObject.Find("Slider_Progress").GetComponent<Slider>();
        publishVolumeSlider = GameObject.Find("Slider_PublishVolume").GetComponent<Slider>();
        playVolumeSlider = GameObject.Find("Slider_PlayVolume").GetComponent<Slider>();
        pitchSlider = GameObject.Find("Slider_Pitch").GetComponent<Slider>();
        playSpeedSlider = GameObject.Find("Slider_PlaySpeed").GetComponent<Slider>();

        muteLocalToggle = GameObject.Find("Toggle_MuteLocal").GetComponent<Toggle>();
        repeatToggle = GameObject.Find("Toggle_Repeat").GetComponent<Toggle>();
        enableAuxToggle = GameObject.Find("Toggle_EnableAux").GetComponent<Toggle>();
        enableAccurateSeekToggle = GameObject.Find("Toggle_EnableAccurateSeek").GetComponent<Toggle>();
        enableSoundLevelMonitorToggle = GameObject.Find("Toggle_EnableSoundLevelMonitor").GetComponent<Toggle>();
        enableFrequencySpectrumMonitorToggle = GameObject.Find("Toggle_EnableFrequencySpectrumMonitor").GetComponent<Toggle>();

        user.userID = ZegoUtilHelper.UserID();
        user.userName = user.userID;

        roomID = "0027";
        publishStreamID = "0027";
        playStreamID = "0027";

#if UNITY_ANDROID && !UNITY_EDITOR
        StartCoroutine(LoadAndroidFiles());
#else
        localResources["test.wav"] = Application.streamingAssetsPath + "/ZegoResources/test.wav";
        localResources["sample.mp3"] = Application.streamingAssetsPath + "/ZegoResources/sample.mp3";
        localResources["ad.mp4"] = Application.streamingAssetsPath + "/ZegoResources/ad.mp4";

        List<string> local_resources = new List<string>();
        local_resources.AddRange(localResources.Keys);
        localResourceDropdown.AddOptions(local_resources);
        currentLocalResourcePath = Application.streamingAssetsPath + "/ZegoResources/test.wav";
        currentResourcePath = currentLocalResourcePath;
#endif

        remoteResources["sample_astrix.mp3"] = "https://storage.zego.im/demo/sample_astrix.mp3";
        remoteResources["201808270915.mp4"] = "https://storage.zego.im/demo/201808270915.mp4";

        
        currentRemoteResourceUrl = "https://storage.zego.im/demo/sample_astrix.mp3";
        

        GameObject previewObj = GameObject.Find("RawImage_Preview");
        if(previewObj != null)
        {
            localVideoSurface = previewObj.AddComponent<RawImageVideoSurface>();
            localVideoSurface.SetCaptureVideoInfo();
            localVideoSurface.SetVideoSource(engine);
        }
        GameObject remoteVideoPlane = GameObject.Find("RawImage_Play");
        if (remoteVideoPlane != null)
        {
            if (remoteVideoSurface == null)//Avoid repeated Add Component causing strange problems such as video freeze
            {
                remoteVideoSurface = remoteVideoPlane.AddComponent<RawImageVideoSurface>();
                remoteVideoSurface.SetPlayVideoInfo(playStreamID);
                remoteVideoSurface.SetVideoSource(engine);
            }
        }

        // GameObject.Find("InputField_RoomID").GetComponent<InputField>().text = roomID;
        // GameObject.Find("InputField_UserID").GetComponent<InputField>().text = user.userID;
        // GameObject.Find("InputField_PublishStreamID").GetComponent<InputField>().text = publishStreamID;

        // Init all ui components
        publishStreamIDInput.text = publishStreamID;
        playStreamIDInput.text = playStreamID;
        
        List<string> remote_resources = new List<string>();
        remote_resources.AddRange(remoteResources.Keys);
        remoteResourceDropdown.AddOptions(remote_resources);

        loadResourcePositionInput.text = "0";

        progressSlider.value = 0;
        publishVolumeSlider.value = 0;
        publishVolumeSlider.minValue = 0;
        publishVolumeSlider.maxValue = 200;
        playVolumeSlider.value = 0;
        playVolumeSlider.minValue = 0;
        playVolumeSlider.maxValue = 200;
        pitchSlider.value = 0;
        pitchSlider.maxValue = 8.0f;
        pitchSlider.minValue = -8.0f;
        playSpeedSlider.value = 0;
        playSpeedSlider.minValue = 0.5f;
        playSpeedSlider.maxValue = 2.0f;

        // add event handler
        // progressSlider.onValueChanged.AddListener(OnProgressValueChanged);
        publishVolumeSlider.onValueChanged.AddListener(OnPublishVolumeValueChanged);
        playVolumeSlider.onValueChanged.AddListener(OnPlayVolumeValueChanged);
        pitchSlider.onValueChanged.AddListener(OnPitchValueChanged);
        playSpeedSlider.onValueChanged.AddListener(OnPlaySpeedValueChanged);
        audioTrackIndexDropdown.onValueChanged.AddListener(OnAudioTrackIndexChanged);
        muteLocalToggle.onValueChanged.AddListener(OnMuteLocal);
        repeatToggle.onValueChanged.AddListener(OnEnableRepeatToggle);
        enableAuxToggle.onValueChanged.AddListener(OnAuxToggle);
        enableAccurateSeekToggle.onValueChanged.AddListener(OnAccurateSeekToggle);
        enableSoundLevelMonitorToggle.onValueChanged.AddListener(OnSoundLevelMonitorToggle);
        enableFrequencySpectrumMonitorToggle.onValueChanged.AddListener(OnFrequencySpectrumMonitorToggle);
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
        text_RoomState.text = reason.ToString();
        text_RoomID.text = roomID;
    }

    void OnRoomUserUpdate(string roomID, ZegoUpdateType updateType, List<ZegoUser> userList, uint userCount)
    {
        if(updateType == ZegoUpdateType.Add)
        {
            userList.ForEach((user)=>{
                ZegoUtilHelper.PrintLogToView(string.Format("user {0} enter room {1}", user.userID, roomID));
            });
        }
        else
        {
            userList.ForEach((user)=>{
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
        ZegoUtilHelper.PrintLogToView(string.Format("OnDebugError, funcName:{0}, info:{1}", errorCode, funcName, info));
    }

    void OnMediaPlayerPlayingProgress(ZegoMediaPlayer mediaPlayer, ulong millisecond)
    {
        if(!isDragProgressSlider)
        {
            //trackBar_MediaPlay.Value = (int)millisecond;
            progressSlider.value = (int)millisecond;
        }
    }

    public void OnDragMediaPlayerSlider()
    {
        isDragProgressSlider = true;
    }

    public void OnEndDragMediaPlayerSlider()
    {
        ulong seek_pos = ((ulong)progressSlider.value);

        ZegoUtilHelper.PrintLogToView(string.Format("SeekTo, position:{0}", seek_pos));
        mediaPlayer.SeekTo(seek_pos, (int errorCode)=>{
            //ZegoUtilHelper.PrintLogToView(string.Format("SeekTo, position:{0}", seek_pos));
        });

        isDragProgressSlider = false;
    }

    public void CreateEngine()
    {
        if(engine == null)
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
        //roomID = GameObject.Find("InputField_RoomID").GetComponent<InputField>().text;
        //user.userID = GameObject.Find("InputField_UserID").GetComponent<InputField>().text;
        //user.userName = user.userID;
        ZegoRoomConfig config = new ZegoRoomConfig();
        config.token = ZegoUtilHelper.Token();
        ZegoUtilHelper.PrintLogToView(string.Format("LoginRoom, roomID:{0}, userID:{1}, userName:{2}, token:{3}", roomID, user.userID, user.userName, config.token));
        engine.LoginRoom(roomID, user, config);

        //GameObject.Find("Button_LoginRoom").GetComponent<Button>().GetComponentInChildren<Text>().text = "Logout Room";
    }

    void LogoutRoom()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("LogoutRoom"));
        engine.LogoutRoom();

        //GameObject.Find("Button_LoginRoom").GetComponent<Button>().GetComponentInChildren<Text>().text = "Login Room";
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
        publishStreamID = GameObject.Find("InputField_PublishStreamID").GetComponent<InputField>().text;
        //GameObject.Find("Text_PreviewStreamID").GetComponent<Text>().text = publishStreamID;
        ZegoUtilHelper.PrintLogToView(string.Format("StartPublishingStream, streamID:{0}", publishStreamID));
        engine.StartPublishingStream(publishStreamID);

        GameObject.Find("Button_Publish").GetComponent<Button>().GetComponentInChildren<Text>().text = "Stop Publishing";
    }

    void StopPublishingStream()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("StopPublishingStream"));
        engine.StopPublishingStream();

        GameObject.Find("Button_Publish").GetComponent<Button>().GetComponentInChildren<Text>().text = "Start Publishing";
    }

    void StartPlaying()
    {
        playStreamID = playStreamIDInput.text;
        // GameObject.Find("Text_PlayStreamID").GetComponent<Text>().text = playStreamID;
        if (remoteVideoSurface != null)
        {
            ZegoUtilHelper.PrintLogToView(string.Format("SetPlayVideoInfo, streamID:{0}", playStreamID));
            remoteVideoSurface.SetPlayVideoInfo(playStreamID);//Set the pull stream ID you want to display to the current control
        }
        
        ZegoUtilHelper.PrintLogToView(string.Format("StartPlayingStream, streamID:{0}", playStreamID));
        engine.StartPlayingStream(playStreamID);

        GameObject.Find("Button_StartPlaying").GetComponent<Button>().GetComponentInChildren<Text>().text = "Stop Playing";
    }

    void StopPlaying()
    {
        ZegoUtilHelper.PrintLogToView(string.Format("StopPlayingStream, streamID:{0}", playStreamID));
        engine.StopPlayingStream(playStreamID);

        GameObject.Find("Button_StartPlaying").GetComponent<Button>().GetComponentInChildren<Text>().text = "Start Playing";
    }

    public void OnButtonStartPublishing()
    {
        if(isPublish)
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

    public void OnButtonStartPlaying()
    {
        if(isPlay)
        {
            isPlay = false;
            StopPlaying();
        }
        else
        {
            isPlay = true;
            StartPlaying();
        }
    }

    public void OnLocalResourceChanged()
    {
        string manual_path = ZegoUtilHelper.ConvertDefaultTextEncoding(localResourcePathInput.text, System.Text.Encoding.UTF8);
        if(manual_path.Length > 0)
        {
            currentLocalResourcePath = manual_path;
        }
        else
        {
            int index = localResourceDropdown.value;
            string resource_name = localResourceDropdown.options[index].text;
            currentLocalResourcePath = localResources[resource_name];
        }

        var is_load_remote = GameObject.Find("Toggle_LoadRemote").GetComponent<Toggle>().isOn;
        if(!is_load_remote)
        {
            currentResourcePath = currentLocalResourcePath;
        }

        ZegoUtilHelper.PrintLogToView(string.Format("OnLocalResourceChanged, resource:{0}", currentLocalResourcePath));
    }

    public void OnRemoteResourceChanged()
    {
        string manual_path = ZegoUtilHelper.ConvertDefaultTextEncoding(remoteResourceUrlInput.text, System.Text.Encoding.UTF8);
        if(manual_path.Length > 0)
        {
            currentRemoteResourceUrl = manual_path;
        }
        else
        {
            int index = remoteResourceDropdown.value;
            string resource_name = remoteResourceDropdown.options[index].text;
            currentRemoteResourceUrl = remoteResources[resource_name];
        }

        var is_load_remote = GameObject.Find("Toggle_LoadRemote").GetComponent<Toggle>().isOn;
        if(is_load_remote)
        {
            currentResourcePath = currentLocalResourcePath;
        }

        ZegoUtilHelper.PrintLogToView(string.Format("OnRemoteResourceChanged, resource:{0}", currentRemoteResourceUrl));
    }

    public void OnLoadResourceTypeChanged()
    {
        var is_load_remote = GameObject.Find("Toggle_LoadRemote").GetComponent<Toggle>().isOn;

        if(is_load_remote == true)
        {
            currentResourcePath = currentRemoteResourceUrl;
        }
        else
        {
            currentResourcePath = currentLocalResourcePath;
        }
    }

    public void OnButtonLoadResource()
    {
        int start_pos_ = int.Parse(GameObject.Find("InputField_LoadResourcePosition").GetComponent<InputField>().text);

        ZegoUtilHelper.PrintLogToView(string.Format("LoadResourceWithPosition, path:{0}, startPosition:{0}", currentResourcePath, start_pos_));
        
        mediaPlayer.LoadResourceWithPosition(currentResourcePath,start_pos_, (int errorCode) =>
        {
            ZegoUtilHelper.PrintLogToView(string.Format("OnLoadResourceCallback, errorCode:{0}", errorCode));


            progressSlider.maxValue = (int)mediaPlayer.GetTotalDuration();

            // Get current play volume
            int play_volume = mediaPlayer.GetPlayVolume();
            playVolumeSlider.value = play_volume;

            // Get current publish volume
            int publish_volume = mediaPlayer.GetPublishVolume();
            publishVolumeSlider.value = publish_volume;

            // Get audio trace count
            List<string> track_index_ = new List<string>();
            var audio_trace_count = mediaPlayer.GetAudioTrackCount();
            for(int i=0;i<audio_trace_count;i++)
            {
                track_index_.Add(i.ToString());
            }
            audioTrackIndexDropdown.ClearOptions();
            audioTrackIndexDropdown.AddOptions(track_index_);

        //     if (errorCode == 0)
        //     {
        //         media_player.Start();
        //     }
        });
    }

    public void OnPublishVolumeValueChanged(float value)
    {
        int volume = ((int)value);

        ZegoUtilHelper.PrintLogToView(string.Format("SetPublishVolume, volume:{0}", volume));
        mediaPlayer.SetPublishVolume(volume);
    }

    public void OnPlayVolumeValueChanged(float value)
    {
        int volume = ((int)value);

        ZegoUtilHelper.PrintLogToView(string.Format("SetPlayVolume, volume:{0}", volume));
        mediaPlayer.SetPlayVolume(volume);
    }

    public void OnPitchValueChanged(float value)
    {
        ZegoVoiceChangerParam param = new ZegoVoiceChangerParam();
        param.pitch = value;

        ZegoUtilHelper.PrintLogToView(string.Format("SetVoiceChangerParam, pitch:{0}", value));
        mediaPlayer.SetVoiceChangerParam(ZegoMediaPlayerAudioChannel.All, param);
    }

    public void OnPlaySpeedValueChanged(float value)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("SetPlaySpeed, value:{0}", value));
        mediaPlayer.SetPlaySpeed(value);
    }

    public void OnButtonPlay()
    {
        ZegoUtilHelper.PrintLogToView("Start");
        mediaPlayer.Start();
    }
    public void OnButtonPause()
    {
        ZegoUtilHelper.PrintLogToView("Pause");
        mediaPlayer.Pause();
    }

    public void OnButtonResume()
    {
        ZegoUtilHelper.PrintLogToView("Resume");
        mediaPlayer.Resume();
    }

    public void OnButtonStop()
    {
        ZegoUtilHelper.PrintLogToView("Stop");
        mediaPlayer.Stop();
    }

    public void OnAudioTrackIndexChanged(int value)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("SetAudioTrackIndex, value:{0}", value));
        mediaPlayer.SetAudioTrackIndex((uint)value);
    }

    public void OnMuteLocal(bool mute)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("MuteLocal, mute:{0}", mute));
        mediaPlayer.MuteLocal(mute);
    }

    public void OnButtonSeekTo()
    {
        if(seekToPositionInput.text.Length > 0)
        {
            int value = int.Parse(seekToPositionInput.text);
            if(value >=0)
            {
                ZegoUtilHelper.PrintLogToView(string.Format("SeekTo, value:{0}", value));
                mediaPlayer.SeekTo(((ulong)value), (int errorCode)=>{

                });
            }
        }
    }

    public void OnButtonSetPlayLoopCount()
    {
        if(playLoopCountInput.text.Length > 0)
        {
            int count = int.Parse(playLoopCountInput.text);

            ZegoUtilHelper.PrintLogToView(string.Format("SetPlayLoopCount, count:{0}", count));
            mediaPlayer.SetPlayLoopCount(count);
        }
    }

    public void OnButtonGetNetWorkResourceCache()
    {
        var cache = mediaPlayer.GetNetWorkResourceCache();
        netWorkResourceCacheSizeText.text = cache.size.ToString();
        netWorkResourceCacheTimeText.text = cache.time.ToString();
        ZegoUtilHelper.PrintLogToView(string.Format("GetNetWorkResourceCache, size:{0}, time:{1}", cache.size, cache.time));
    }

    public void OnButtonSetNetWorkResourceMaxCache()
    {
        if(netWorkResourceMaxCacheInputSize.text.Length > 0 && netWorkResourceMaxCacheInputTime.text.Length > 0)
        {
            var cache_size = int.Parse(netWorkResourceMaxCacheInputSize.text);
            var cache_time = int.Parse(netWorkResourceMaxCacheInputTime.text);

            if(cache_size >=0 && cache_time >=0)
            {
                ZegoUtilHelper.PrintLogToView(string.Format("SetNetWorkResourceMaxCache, size:{0}, time:{1}", cache_size, cache_time));
                mediaPlayer.SetNetWorkResourceMaxCache(((uint)cache_time),((uint)cache_size));
            }
        }
    }

    public void OnEnableRepeatToggle(bool enable)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("EnableRepeat, enable:{0}", enable));
        mediaPlayer.EnableRepeat(enable);
    }

    public void OnAuxToggle(bool enable)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("EnableAux, enable:{0}", enable));
        mediaPlayer.EnableAux(enable);
    }

    public void OnAccurateSeekToggle(bool enable)
    {
        ZegoAccurateSeekConfig config = new ZegoAccurateSeekConfig();
        ZegoUtilHelper.PrintLogToView(string.Format("EnableAccurateSeek, enable:{0}, timeout:{1}", enable, config.timeout));
        mediaPlayer.EnableAccurateSeek(enable, config);
    }

    public void OnSoundLevelMonitorToggle(bool enable)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("EnableSoundLevelMonitor, enable:{0}, time:{1}", enable, 100));
        mediaPlayer.EnableSoundLevelMonitor(enable, 100);
    }

    public void OnFrequencySpectrumMonitorToggle(bool enable)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("EnableFrequencySpectrumMonitor, enable:{0}, time:{1}", enable, 100));
        mediaPlayer.EnableFrequencySpectrumMonitor(enable, 100);
    }
    
    public void OnButtonSetProgressInterval()
    {
        if(progressIntervalInput.text.Length > 0)
        {
            var time = int.Parse(progressIntervalInput.text);
            if(time >= 0)
            { 
                ZegoUtilHelper.PrintLogToView(string.Format("SetProgressInterval, millisecond:{0}", time));
                mediaPlayer.SetProgressInterval(((ulong)time));
            }
        }
    }

    public void OnButtonGetProgressInterval()
    {
        ulong progress = mediaPlayer.GetCurrentProgress();

        ZegoUtilHelper.PrintLogToView(string.Format("GetCurrentProgress, progress:{0}", progress));
        progressIntervalInput.text = progress.ToString();
    }

    public void OnButtonSetNetWorkBufferThreshold()
    {
        if(netWorkBufferThresholdInput.text.Length > 0)
        {
            int value = int.Parse(netWorkBufferThresholdInput.text);

            ZegoUtilHelper.PrintLogToView(string.Format("SetNetWorkBufferThreshold, threshold:{0}", value));
            mediaPlayer.SetNetWorkBufferThreshold(((uint)value));
        }
    }

    public void OnEnableAudioDataToggle()
    {
        var isOn = GameObject.Find("Toggle_EnableAudioData").GetComponent<Toggle>().isOn;

        if(isOn)
        {
            mediaPlayer.SetAudioHandler((ZegoMediaPlayer mediaPlayer, System.IntPtr data, uint dataLength, ZegoAudioFrameParam param) =>
            {
                Debug.Log(string.Format("onAudioFrame, dataLength:{0}, channel:{1}, sampleRate:{2}", dataLength, param.channel, param.sampleRate));
            });
        }
        else
        {
            mediaPlayer.SetAudioHandler(null);
        }
    }

    IEnumerator LoadAndroidFile(string path, string resource_name)
    {
        string raw_path = Application.streamingAssetsPath + path;
        string dest_path = Application.persistentDataPath + path;
        string dest_dir = Application.persistentDataPath + "/ZegoResources";
        if(!Directory.Exists(dest_dir))
        {
            Directory.CreateDirectory(dest_dir);
        }
        using(UnityWebRequest request = UnityWebRequest.Get(raw_path))
        {
            yield return request.SendWebRequest();

            if(request.downloadHandler.isDone)
            {
                File.WriteAllBytes(dest_path, request.downloadHandler.data);
            }
        }

        localResources[resource_name] = dest_path;
    }

    IEnumerator LoadAndroidFiles()
    {
        yield return StartCoroutine(LoadAndroidFile("/ZegoResources/test.wav", "test.wav"));

        yield return StartCoroutine(LoadAndroidFile("/ZegoResources/sample.mp3", "sample.mp3"));

        yield return StartCoroutine(LoadAndroidFile("/ZegoResources/ad.mp4", "ad.mp4"));

        List<string> local_resources = new List<string>();
        local_resources.AddRange(localResources.Keys);
        localResourceDropdown.AddOptions(local_resources);

        currentResourcePath = localResourceDropdown.options[0].text;
    }
}
