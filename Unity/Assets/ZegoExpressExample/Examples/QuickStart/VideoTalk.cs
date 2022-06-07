using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections.Concurrent;
using ZEGO;

public class VideoTalk : MonoBehaviour
{
    ZegoExpressEngine engine;
    public ZegoUser user = new ZegoUser();
    public string roomID;
    public string publishStreamID;

    // Start is called before the first frame update
    void Start()
    {
        InitAll();
    }

    // Update is called once per frame
    void Update()
    {
    }

    private void OnDestroy()
    {
        Debug.Log("DestroyEngine");
        ZegoExpressEngine.DestroyEngine();
    }

    void InitAll()
    {
        user.userID = ZegoUtilHelper.UserID();
        user.userName = user.userID;

        roomID = "0001";
        publishStreamID = "s_" + ZegoUtilHelper.DeviceName() + "_" + System.Environment.UserName + "_" + UnityEngine.Random.Range(0,99999);
    }

    public string PublishStreamID()
    {
        return publishStreamID;
    }

    void CreateEngine()
    {
        if(engine == null)
        {
            ZegoEngineProfile profile = new ZegoEngineProfile();
            profile.appID = ZegoUtilHelper.AppID();
            profile.scenario = ZegoScenario.General;
            Debug.Log(string.Format("CreateEngine, appID:{0}, appSign:{1}, scenerio:{2}", profile.appID, profile.appSign, profile.scenario));
            engine = ZegoExpressEngine.CreateEngine(profile);
        }
    }

    public void DestroyEngine()
    {
        if(engine != null)
        {
            ZegoExpressEngine.DestroyEngine();
            engine = null;
        }
    }

    public ZegoExpressEngine GetEngine()
    {
        CreateEngine();
        return engine;
    }

    public void ResetState()
    {
        DestroyEngine();
        InitAll();
    }
}
