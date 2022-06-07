using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using ZEGO;

public class PlayingStream : MonoBehaviour
{
    ZegoExpressEngine engine;
    ZegoUser user = new ZegoUser();
    string roomID;
    string playStreamID;
    RawImageVideoSurface remoteVideoSurface = null;
    Text text_RoomState;
    Text text_RoomID;
    bool isLoginRoom = false;
    bool isPlay = false;
    // Start is called before the first frame update
    void Start()
    {
        CreateEngine();

        InitAll();
    }

    // Update is called once per frame
    void Update()
    {   
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

        roomID = "0003";
        playStreamID = "0003";

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

        GameObject.Find("InputField_RoomID").GetComponent<InputField>().text = roomID;
        GameObject.Find("InputField_UserID").GetComponent<InputField>().text = user.userID;
        GameObject.Find("InputField_PlayStreamID").GetComponent<InputField>().text = playStreamID;
        text_RoomState = GameObject.Find("Text_RoomState").GetComponent<Text>();
        text_RoomID = GameObject.Find("Text_RoomID").GetComponent<Text>();
    }

    void BindEventHandler()
    {
        engine.onRoomStateChanged = OnRoomStateChanged;
        engine.onRoomUserUpdate = OnRoomUserUpdate;
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
        roomID = GameObject.Find("InputField_RoomID").GetComponent<InputField>().text;
        user.userID = GameObject.Find("InputField_UserID").GetComponent<InputField>().text;
        user.userName = user.userID;
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

    void StartPlaying()
    {
        playStreamID = GameObject.Find("InputField_PlayStreamID").GetComponent<InputField>().text;
        GameObject.Find("Text_PlayStreamID").GetComponent<Text>().text = playStreamID;
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

    public void OnVideoToggle()
    {
        bool mute = !GameObject.Find("Toggle_Video").GetComponent<Toggle>().isOn;
        ZegoUtilHelper.PrintLogToView(string.Format("MutePlayStreamVideo, streamID: {0}, mute:{1}", playStreamID, mute));
        engine.MutePlayStreamVideo(playStreamID, mute);
    }

    public void OnAudioToggle()
    {
        bool mute = !GameObject.Find("Toggle_Audio").GetComponent<Toggle>().isOn;
        ZegoUtilHelper.PrintLogToView(string.Format("MutePlayStreamAudio, streamID: {0}, mute:{1}", playStreamID, mute));
        engine.MutePlayStreamAudio(playStreamID, mute);
    }

    public void Home()
    {
        DestroyEngine();
        // load scene home page
        SceneManager.LoadScene("HomePage");
    }

    public void OnButtonLoginRoom()
    {
        if(isLoginRoom)
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
}
