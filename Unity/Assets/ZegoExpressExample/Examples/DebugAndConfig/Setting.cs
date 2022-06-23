using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using ZEGO;

public class Setting : MonoBehaviour
{
    ZegoExpressEngine engine;

    // Start is called before the first frame update
    void Start()
    {
        InitAll();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Home()
    {
        DestroyEngine();
        // load scene home page
        SceneManager.LoadScene("HomePage");
    }

    void InitAll()
    {
        ZegoUtilHelper.InitLogView();

        string app_id = ZegoUtilHelper.AppID().ToString();
        string user_id = ZegoUtilHelper.UserID();
        string token = ZegoUtilHelper.Token();
        string sdkVersion = string.Format("SDK: {0}", ZegoExpressEngine.GetVersion());

        GameObject.Find("InputField_AppID").GetComponent<InputField>().text = app_id;
        GameObject.Find("InputField_UserID").GetComponent<InputField>().text = user_id;
        GameObject.Find("InputField_Token").GetComponent<InputField>().text = token;
        GameObject.Find("Text_Version").GetComponent<Text>().text = sdkVersion;
        GameObject.Find("InputField_LogPath").GetComponent<InputField>().text = Application.dataPath;
        GameObject.Find("InputField_LogSize").GetComponent<InputField>().text = "5000000";
    }

    public void OnButtonSetLogConfig()
    {
        string logPath = GameObject.Find("InputField_LogPath").GetComponent<InputField>().text;
        ulong logSize = ulong.Parse(GameObject.Find("InputField_LogSize").GetComponent<InputField>().text);
        ZegoLogConfig config = new ZegoLogConfig();
        config.logPath = logPath;
        config.logSize = logSize;

        DestroyEngine();

        ZegoUtilHelper.PrintLogToView(string.Format("SetLogConfig,  logPath:{0}, logSize{1}", logPath, logSize));
        ZegoExpressEngine.SetLogConfig(config);

        CreateEngine();
    }

    void DestroyEngine()
    {
        if(engine != null)
        {
            ZegoUtilHelper.PrintLogToView(string.Format("DestroyEngine"));
            ZegoExpressEngine.DestroyEngine();
            engine = null;
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
        }
    }

    public void onButtonSetUserConfig()
    {
        var appid = uint.Parse(GameObject.Find("InputField_AppID").GetComponent<InputField>().text);
        var user_id = GameObject.Find("InputField_UserID").GetComponent<InputField>().text;
        var token = GameObject.Find("InputField_Token").GetComponent<InputField>().text;

        ZegoUtilHelper.PrintLogToView(string.Format("Update user config, appID:{0}, userID:{1}, token:{2}", appid, user_id, token));
        // Update user config
        UserConfig.UpdateUserConfigByUi(appid, user_id, token);

        // update 
        VideoTalk notDestroyObj = GameObject.Find("DoNotDestroyOnLoad").GetComponent<VideoTalk>();
        notDestroyObj.user.userID = user_id;
        notDestroyObj.user.userName = user_id;
    }
}
