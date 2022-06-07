using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using System;
using System.Text;

public class ZegoUtilHelper{
    static Scrollbar logScroll;
    static Text logText;
    public static string DeviceName()
    {
        string device = "";

#if UNITY_ANDROID
        device = "Android";
#elif UNITY_IPHONE
        device = "iPhone";
#elif UNITY_STANDALONE_WIN
        device = "Windows";
#elif UNITY_STANDALONE_LINUX
        device = "Linux";
#elif UNITY_STANDALONE_OSX
        device = "macOS";
#else
        device = "Unknown";
#endif
        return device;
    }

    public string GetRandomString(int min = 0, int max = 99999)
    {
        return UnityEngine.Random.Range(0,99999).ToString();
    }

    public static string UserName()
    {
        return DeviceName() + "_" + System.Environment.UserName + "_" + UnityEngine.Random.Range(0,99999).ToString();
    }

    public static void InitLogView()
    {
        logScroll = GameObject.Find("ScrollVew_Log").GetComponent<Scrollbar>();
        logText = GameObject.Find("Text_Log").GetComponent<Text>();
    }

    public static void PrintLogToView(string logInfo)
    {
        // console log
        Debug.Log(logInfo);

        if(logText)
        {
            logText.fontSize = 30;

            if(logInfo.Length + logText.text.Length >= 15000)
            {
                logText.text = "";
            }
            if(logInfo.Length >= 15000)
            {
                logInfo = logInfo.Substring(0, 14997) + "...";
            }
                
            string time = string.Format("[ {0} ] ", DateTime.Now.ToString("HH:mm:ss.fff"));
            if(logText.text == "")
            {
                logText.text = time + logInfo;
            }
            else
            {
                logText.text = logText.text + Environment.NewLine + time + logInfo;
            }
        }
    }

    public static uint AppID()
    {
        var is_set_by_ui = UserConfig.IsUpdateUserConfigByUi();

        if(is_set_by_ui)
        {
            return UserConfig.AppID();
        }
        else
        {
            return KeyCenter.appID;
        }
    }

    public static string UserID()
    {
        var is_set_by_ui = UserConfig.IsUpdateUserConfigByUi();

        if(is_set_by_ui)
        {
            return UserConfig.UserID();
        }
        else
        {
            return KeyCenter.userID;
        }
    }

    public static string Token()
    {
        var is_set_by_ui = UserConfig.IsUpdateUserConfigByUi();

        if(is_set_by_ui)
        {
            return UserConfig.Token();
        }
        else
        {
            return KeyCenter.token;
        }
    }

    // Convert default text string encoding type to dest encoding type
    public static string ConvertDefaultTextEncoding(string src, Encoding encoding)
    {
        byte[] default_bytes = Encoding.Default.GetBytes(src);
        byte[] dest_bytes = Encoding.Convert(Encoding.Default, encoding, default_bytes);

        return encoding.GetString(dest_bytes);
    }
}