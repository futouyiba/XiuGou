using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Sirenix.OdinInspector;
using Sirenix.Serialization;
using UnityEditor;
using UnityEngine;
using Object = UnityEngine.Object;

namespace ET
{
    public class ConfigBackupUtil : SerializedMonoBehaviour
    {

        [ReadOnly] public List<Object> refObjects;
        [ReadOnly,OdinSerialize] public DateTime refreshDate;
        [SerializeField] private TextAsset backupTxt;
        

        public void WriteText(byte[] stream)
        {
            var assetPath=AssetDatabase.GetAssetPath(backupTxt);
            File.WriteAllBytes(assetPath, stream);
            refreshDate= DateTime.Now;
        }

        public byte[] ReadText()
        {
            var assetPath=AssetDatabase.GetAssetPath(backupTxt);
            return File.ReadAllBytes(assetPath);
        }
    }
}
