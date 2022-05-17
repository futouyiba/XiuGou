using UnityEngine;

/// <summary>
/// store static methods for dance pool
/// </summary>
public class DanceFloorHelper
{
    public static GameObject GetGoFromScene(string tag)
    {
        var goFind = GameObject.FindGameObjectWithTag(tag);
        if (goFind == null)
        {
            Debug.LogError($"no such go found with tag: {tag}");
            return null;
        }

        return goFind;
    }

    public static float GetPivotY()
    {
        var pivot = GetGoFromScene("floor_pivot").GetComponent<DanceFloorPivot>();
        return pivot.transform.position.y;
    }

    public static Vector3 PosUnified2Scene(Vector2 unifiedPos)
    {
        var pivot = GetGoFromScene("floor_pivot").GetComponent<DanceFloorPivot>();
        var pos0 = pivot.small.position;
        var pos1 = pivot.big.position;
        var targetX = Mathf.Lerp(pos0.x, pos1.x, unifiedPos.x);
        var targetZ = Mathf.Lerp(pos0.z, pos1.z, unifiedPos.y);
        var targetPos = new Vector3(targetX, GetPivotY(), targetZ);
        return targetPos;
    }

    public static Vector2 PosScene2Unified(Vector3 scenePos)
    {
        var pivot = GetGoFromScene("floor_pivot").GetComponent<DanceFloorPivot>();
        var pos0 = pivot.small.position;
        var pos1 = pivot.big.position;

        var resultX = Mathf.InverseLerp(pos0.x, pos1.x, scenePos.x);
        var resultY = Mathf.InverseLerp(pos0.z, pos1.z, scenePos.y);
        Vector2 result = new Vector2(resultX, resultY);
        return result;
    }

    public static Vector2 GetRandomDanceFloorPos()
    {
        float randomX = Random.Range(0f, 1f);
        float randomY = Random.Range(0f, 1f);
        // Debug.Log($"randomed pos is {randomX},{randomY}");
        return new Vector2(randomX, randomY);
    }

    public static Vector3 GetRandomDanceFloorPos3()
    {
        Vector2 posUnified2 = new Vector2(Random.Range(0f, 1f), Random.Range(0f, 1f));
        return PosUnified2Scene(posUnified2);
    }
        
}