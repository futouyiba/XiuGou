using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using ZEGO;

public class HeadphoneMonitor : MonoBehaviour
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
    Dropdown captureStereoDropdown;
    Slider volumeSlider;
    Toggle encoderStereoToggle;
    Toggle headphoneMonitorToggle;
    bool isLoginRoom = false;
    bool isPublish = false;
    bool isPlay = false;
    // Start is called before the first frame update
    void Start()
    {
        CreateEngine();

        InitAll();

        OnHeadphoneMonitorToggle(true);

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

        roomID = "0012";
        publishStreamID = "0012";
        playStreamID = "0012";

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
        captureStereoDropdown = GameObject.Find("Dropdown_CaptureStereo").GetComponent<Dropdown>();
        volumeSlider = GameObject.Find("Slider_Volume").GetComponent<Slider>();
        encoderStereoToggle = GameObject.Find("Toggle_EncoderStereo").GetComponent<Toggle>();
        headphoneMonitorToggle = GameObject.Find("Toggle_HeadphoneMonitor").GetComponent<Toggle>();

        headphoneMonitorToggle.isOn = true;
        encoderStereoToggle.isOn = false;
        volumeSlider.value = 60;
        List<string> captureStereoList = new List<string>{
            "None",
            "Always",
            "Adaptive"
        };
        captureStereoDropdown.AddOptions(captureStereoList);

        headphoneMonitorToggle.onValueChanged.AddListener(OnHeadphoneMonitorToggle);
        volumeSlider.onValueChanged.AddListener(OnVolumeValueChanged);
        encoderStereoToggle.onValueChanged.AddListener(OnEncoderStereoToggle);
        captureStereoDropdown.onValueChanged.AddListener(OnCaptureStereoValueChanged);
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

    void OnHeadphoneMonitorToggle(bool isOn)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("EnableHeadphoneMonitor, enable:{0}", isOn));
        engine.EnableHeadphoneMonitor(isOn);
    }

    void OnVolumeValueChanged(float value)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("SetHeadphoneMonitorVolume, value:{0}", value));
        engine.SetHeadphoneMonitorVolume((int)value);
    }

    void OnEncoderStereoToggle(bool isOn)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("SetAudioConfig"));
        ZegoAudioConfig config = new ZegoAudioConfig(ZegoAudioConfigPreset.HighQualityStereo);
        engine.SetAudioConfig(config);
    }

    void OnCaptureStereoValueChanged(int index)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("SetAudioCaptureStereoMode, mode:{0}", (ZegoAudioCaptureStereoMode)(index)));
        engine.SetAudioCaptureStereoMode((ZegoAudioCaptureStereoMode)(index));
    }
}
