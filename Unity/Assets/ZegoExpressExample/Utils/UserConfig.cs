using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UserConfig : MonoBehaviour
{
    private static uint app_id_ = 0;
    private static string user_id_ = "";
    private static string token_ = "";
    private static bool is_update_user_config_by_ui = false;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public static void UpdateUserConfigByUi(uint appID, string userID, string token)
    {
        is_update_user_config_by_ui = true;
        app_id_ = appID;
        user_id_ = userID;
        token_ = token;
    }

    public static bool IsUpdateUserConfigByUi()
    {
        return is_update_user_config_by_ui;
    }

    public static uint AppID()
    {
        return app_id_;
    }

    public static string UserID()
    {
        return user_id_;
    }

    public static string Token()
    {
        return token_;
    }
}
