using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using ZEGO;

public class AEC_ANS_AGC : MonoBehaviour
{
    ZegoExpressEngine engine;
    ZegoMediaPlayer mediaPlayer;
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
    Toggle enableAECToggle;
    Toggle enableAGCToggle;
    Toggle enableANSToggle;
    Dropdown zegoAECModeDropdown;
    Dropdown zegoANSModeDropdown;
    Toggle backgroundMusicToggle;

    bool isLoginRoom = false;
    bool isPublish = false;
    bool isPlay = false;
    // Start is called before the first frame update
    void Start()
    {
        CreateEngine();

        InitAll();

        LoginRoom();
    }

    // Update is called once per frame
    void Update()
    {
#if UNITY_ANDROID||  UNITY_IPHONE
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
    }

    void InitAll()
    {
        ZegoUtilHelper.InitLogView();

        user.userID = ZegoUtilHelper.UserID();
        user.userName = user.userID;

        roomID = "0019";
        publishStreamID = "0019";
        playStreamID = "0019";

        GameObject previewObj = GameObject.Find("RawImage_Preview");
        if (previewObj != null)
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

        GameObject.Find("InputField_PublishStreamID").GetComponent<InputField>().text = publishStreamID;
        GameObject.Find("InputField_PlayStreamID").GetComponent<InputField>().text = playStreamID;
        text_RoomState = GameObject.Find("Text_RoomState").GetComponent<Text>();
        text_RoomID = GameObject.Find("Text_RoomID").GetComponent<Text>();
        enableAECToggle = GameObject.Find("Toggle_AEC").GetComponent<Toggle>();
        enableAGCToggle = GameObject.Find("Toggle_AGC").GetComponent<Toggle>();
        enableANSToggle = GameObject.Find("Toggle_ANS").GetComponent<Toggle>();
        zegoAECModeDropdown = GameObject.Find("Dropdown_AECMode").GetComponent<Dropdown>();
        zegoANSModeDropdown = GameObject.Find("Dropdown_ANSMode").GetComponent<Dropdown>();
        backgroundMusicToggle = GameObject.Find("Toggle_BackgroundMusic").GetComponent<Toggle>();

        List<string> zegoAECModeList = new List<string> {
            "Aggressive",
            "Medium",
            "Soft"
        };
        List<string> zegoANSModeList = new List<string> {
            "Soft",
            "Medium",
            "Aggressive",
            "AI"
        };
        zegoAECModeDropdown.AddOptions(zegoAECModeList);
        zegoANSModeDropdown.AddOptions(zegoANSModeList);
        zegoANSModeDropdown.value = 1;

        enableAECToggle.isOn = true;
        enableAGCToggle.isOn = true;
        enableANSToggle.isOn = true;
        enableAECToggle.onValueChanged.AddListener(OnEnableAECToggle);
        enableAGCToggle.onValueChanged.AddListener(OnEnableAGCToggle);
        enableANSToggle.onValueChanged.AddListener(OnEnableANSToggle);
        zegoAECModeDropdown.onValueChanged.AddListener(OnAECModeValueChanged);
        zegoANSModeDropdown.onValueChanged.AddListener(OnANSModeValueChanged);
        backgroundMusicToggle.onValueChanged.AddListener(OnBackgroundMusicToggle);

        OnAECModeValueChanged(0);
        OnANSModeValueChanged(1);
        OnEnableAECToggle(true);
        OnEnableAGCToggle(true);
        OnEnableANSToggle(true);

        ZegoUtilHelper.PrintLogToView(string.Format("CreateMediaPlayer"));
        mediaPlayer = engine.CreateMediaPlayer();
        var path = Application.streamingAssetsPath + "/ZegoResources/ad.mp4";
        if(mediaPlayer != null)
        {
            ZegoUtilHelper.PrintLogToView(string.Format("LoadResource, path:{0}", path));

            mediaPlayer.LoadResource(path, (int errorCode)=> {
                ZegoUtilHelper.PrintLogToView(string.Format("OnMediaPlayerLoadResourceCallback, errorCode:{0}", errorCode));
            });
        }
    }

    void BindEventHandler()
    {
        engine.onRoomStateChanged = OnRoomStateChanged;
        engine.onRoomUserUpdate = OnRoomUserUpdate;
        engine.onPublisherStateUpdate = OnPublisherStateUpdate;
        engine.onPlayerStateUpdate = OnPlayerStateUpdate;
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

    void OnPlayerStateUpdate(string streamID, ZegoPlayerState state, int errorCode, string extendedData)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnPlayerStateUpdate, streamID:{0}, state:{1}, errorCode:{2}, extendedData:{3}", streamID, state, errorCode, extendedData));
    }

    void OnLocalDeviceExceptionOccurred(ZegoDeviceExceptionType exceptionType, ZegoDeviceType deviceType, string deviceID)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnLocalDeviceExceptionOccurred, exceptionType:{0}, deviceType:{1}, deviceID:{2}", exceptionType, deviceType, deviceID));
    }

    void OnDebugError(int errorCode, string funcName, string info)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnDebugError, funcName:{0}, info:{1}", errorCode, funcName, info));
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

    void StartPlaying()
    {
        playStreamID = GameObject.Find("InputField_PlayStreamID").GetComponent<InputField>().text;
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

    public void OnButtonStartPlaying()
    {
        if (isPlay)
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

    void OnEnableAECToggle(bool isOn)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("EnableHeadphoneMonitor, enable:{0}", isOn));
        engine.EnableAEC(isOn);
    }

    void OnEnableAGCToggle(bool isOn)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("EnableAGC, enable:{0}", isOn));
        engine.EnableAGC(isOn);

    }

    void OnEnableANSToggle(bool isOn)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("EnableANS, enable:{0}", isOn));
        engine.EnableANS(isOn);
    }

    void OnBackgroundMusicToggle(bool isOn)
    {
        if(mediaPlayer!=null)
        {
            if(isOn)
            {
                ZegoUtilHelper.PrintLogToView(string.Format("Start"));
                mediaPlayer.Start();
            }
            else
            {
                ZegoUtilHelper.PrintLogToView(string.Format("Stop"));
                mediaPlayer.Stop();
            }
        }


    }

    void OnAECModeValueChanged(int index)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("SetAECMode, mode:{0}", (ZegoAECMode)index));

        engine.SetAECMode((ZegoAECMode)index);
    }

    void OnANSModeValueChanged(int index)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("SetANSMode, mode:{0}", (ZegoANSMode)index));

        engine.SetANSMode((ZegoANSMode)index);
    }
}
