using System.Collections.Concurrent;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using ZEGO;

public class SoundLevelAndAudioSpectrum : MonoBehaviour
{
    ZegoExpressEngine engine;
    ZegoUser user = new ZegoUser();
    string roomID;
    string publishStreamID;
    Text text_RoomState;
    Text text_RoomID;
    // DrawLine drawLine;
    public static readonly ConcurrentQueue<Action> RunOnMainThread = new ConcurrentQueue<Action>();
    public int sampleLength=64;
    float[] sampleData;
    public RectTransform parentRect;
    public float distance = 1;
    List<Image> objects = new List<Image>();
    GameObject prefabObj;
    Slider soundLevelSlider;


    // Start is called before the first frame update
    void Start()
    {
        InitAll();

        CreateUI();

        CreateEngine();
        LoginRoom();

        engine.EnableCamera(false);
        StartPublishingStream();
        engine.StartSoundLevelMonitor();
        engine.StartAudioSpectrumMonitor();
    }

    // Update is called once per frame
    void Update()
    {
        if(!RunOnMainThread.IsEmpty)
        {
           while(RunOnMainThread.TryDequeue(out var action))
           {
             action?.Invoke();
           }
        }
    }

    void OnDestroy()
    {
        if(engine != null)
        {
            Debug.Log("DestroyEngine");
            ZegoExpressEngine.DestroyEngine();
        }
    }

    void InitAll()
    {
        ZegoUtilHelper.InitLogView();

        user.userID = ZegoUtilHelper.UserID();
        user.userName = user.userID;

        roomID = "0018";
        publishStreamID = "0018";

        text_RoomState = GameObject.Find("Text_RoomState").GetComponent<Text>();
        text_RoomID = GameObject.Find("Text_RoomID").GetComponent<Text>();
        //drawLine = GameObject.Find("Line").GetComponent<DrawLine>();
        soundLevelSlider = GameObject.Find("Slider_SoundLevel").GetComponent<Slider>();
        soundLevelSlider.enabled = false;

        sampleData = new float[sampleLength];
    }

    void CreateUI()
    {
        prefabObj = (GameObject)Resources.Load("Image");
        for(int i=0;i<sampleLength;i++)
        {
            GameObject obj = Instantiate(prefabObj, parentRect.transform);
            obj.name = string.Format("{0}", i);
            objects.Add(obj.GetComponent<Image>());
            RectTransform trans = obj.GetComponent<RectTransform>();
            trans.localPosition = new Vector3((trans.sizeDelta.x + distance)*(i+1) - parentRect.rect.xMax, 0 - parentRect.rect.yMax, 0);
        }
    }

    void CreateEngine()
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

    void BindEventHandler()
    {
        engine.onLocalDeviceExceptionOccurred = OnLocalDeviceExceptionOccurred;
        engine.onDebugError = OnDebugError;
        engine.onCapturedAudioSpectrumUpdate = OnCapturedAudioSpectrumUpdate;
        engine.onCapturedSoundLevelInfoUpdate = OnCapturedSoundLevelInfoUpdate;
        engine.onRoomStateChanged = OnRoomStateChanged;
    }

    void OnLocalDeviceExceptionOccurred(ZegoDeviceExceptionType exceptionType, ZegoDeviceType deviceType, string deviceID)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnLocalDeviceExceptionOccurred, exceptionType:{0}, deviceType:{1}, deviceID:{2}", exceptionType, deviceType, deviceID));
    }

    void OnDebugError(int errorCode, string funcName, string info)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnDebugError, funcName:{0}, info:{1}", errorCode, funcName, info));
    }

    void OnCapturedAudioSpectrumUpdate(float[] audioSpectrum)
    {//return;
        //DrawLines(audioSpectrum);
        RunOnMainThread.Enqueue(()=>{
            //DrawLines(audioSpectrum);

            for(int i=0;i<audioSpectrum.Length;i++)
            {
                objects[i].transform.localScale = new Vector3(1f, Mathf.Clamp(10*Mathf.Log(audioSpectrum[i])/Mathf.Log(10), 0, 200), 1f);
                //Debug.Log(string.Format("{0},{1},{2}",  objects[i].transform.localScale.x, objects[i].transform.localScale.y, objects[i].transform.localScale.z));
            }
        });
    }

    void OnCapturedSoundLevelInfoUpdate(ZegoSoundLevelInfo soundLevelInfo)
    {
        RunOnMainThread.Enqueue(()=>{
            soundLevelSlider.value = soundLevelInfo.soundLevel;
        });
    }

    void OnRoomStateChanged(string roomID, ZegoRoomStateChangedReason reason, int errorCode, string extendedData)
    {
        ZegoUtilHelper.PrintLogToView(string.Format("OnRoomStateChanged, roomID:{0}, reason:{1}, errorCode:{2}, extendedData:{3}", roomID, reason, errorCode, extendedData));
        text_RoomID.text = roomID;
        text_RoomState.text = reason.ToString();
    }

    void LoginRoom()
    {
        ZegoRoomConfig config = new ZegoRoomConfig();
        config.token = ZegoUtilHelper.Token();
        ZegoUtilHelper.PrintLogToView(string.Format("LoginRoom, roomID:{0}, userID:{1}, userName:{2}, token:{3}", roomID, user.userID, user.userName, config.token));
        engine.LoginRoom(roomID, user, config);

        //GameObject.Find("Button_LoginRoom").GetComponent<Button>().GetComponentInChildren<Text>().text = "Logout Room";
    }

    void StartPublishingStream()
    {
        //publishStreamID = GameObject.Find("InputField_PublishStreamID").GetComponent<InputField>().text;
        GameObject.Find("Text_PreviewStreamID").GetComponent<Text>().text = publishStreamID;
        ZegoUtilHelper.PrintLogToView(string.Format("StartPublishingStream, streamID:{0}", publishStreamID));
        engine.StartPublishingStream(publishStreamID);

        //GameObject.Find("Button_StartPublishing").GetComponent<Button>().GetComponentInChildren<Text>().text = "Stop Publishing";
    }

    public void DestroyEngine()
    {
        ZegoUtilHelper.PrintLogToView("DestroyEngine");
        ZegoExpressEngine.DestroyEngine();
        engine = null;
    }

    public void Home()
    {
        DestroyEngine();
        // load scene home page
        SceneManager.LoadScene("HomePage");
    }
}
