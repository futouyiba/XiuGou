using System;
using System.Collections.Generic;
using UnityEngine;

namespace ET.Utility
{

    public class JsonMessage
    {
 
    }

    public class JsonCmd
    {
        
    }

    public class Operation : JsonMessage
    {
        public string Op;
        // public string OpData;
    }

    public class Operation<T> : JsonMessage where T:JsonCmd
    {
        public string Op;
        public T OpData;

        public Operation(T data)
        {
            OpData = data;
        }

    }

    public struct Vec2
    {
        public double x;
        public double y;

        public Vec2(double x, double y)
        {
            this.x = x;
            this.y = y;
        }
    }

    public class UserMove : JsonCmd
    {
        public int uid;
        public long ts;
        public Vector2 position;
    }

    public class UserEnter : JsonCmd
    {
        public int uid;
        public long ts;
        public string uname;
        public bool ismale;
        public Vector2 position;
    }

    public class MeEnter : JsonCmd
    {
        public int uid;
        public long ts;
        public string uname;
        public bool ismale;
    }

    public class UserExit : JsonCmd
    {
        public int uid;
        public long ts;
    }

    public class UserList : JsonCmd
    {
        public List<int> uids;
        public List<string> unames;
        public List<Vector2> positions;
    }

    public class MeMove : JsonCmd
    {
        public long ts;
        public Vector2 position;
    }

    public class MyPosition : JsonCmd
    {
        public long ts;
        public Vector2 position;
    }


    public class UserMsg : JsonCmd
    {
        public int uid;
        public long ts;
        public string text;
    }

    public class MeTap : JsonCmd
    {
        
    }
    
    
    

    
}