using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateWaypointsPointsOfInterest : MonoBehaviour
{
    private Dictionary<string,Vector2> pois;
    
    public void GeneratePois()
    {
        pois = new Dictionary<string, Vector2>()
        {
            { "Station a", new Vector2(29.5648150f,-95.0817410f) },
            { "Station b", new Vector2(29.5646824f,-95.0811564f) },
            { "Station c", new Vector2(29.5650460f,-95.0810944f) },
            { "Station d", new Vector2(29.5645430f,-95.0516440f) },
            { "Station e", new Vector2(29.5648290f,-95.0813750f) },
            { "Station f", new Vector2(29.5647012f,-95.0813750f) },
            { "Station g", new Vector2(29.5651359f,-95.0807408f) },
            { "Station h", new Vector2(29.5651465f,-95.0814092f) },
            { "Station i", new Vector2(29.5648850f,-95.0808360f) },
        };
        
        foreach (var key in pois.Keys)
        {
            WaypointManager.Instance.GenerateWaypointAtCoordinate(pois[key], key);
        }
    }
}
