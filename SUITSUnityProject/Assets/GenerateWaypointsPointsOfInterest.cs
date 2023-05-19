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
            { "Point Of Interest a", new Vector2(29.5648150f,-95.0817410f) },
            { "Point Of Interest b", new Vector2(29.5646824f,-95.0811564f) },
            { "Point Of Interest c", new Vector2(29.5650460f,-95.0810944f) },
            { "Point Of Interest d", new Vector2(29.5645430f,-95.0516440f) },
            { "Point Of Interest e", new Vector2(29.5648290f,-95.0813750f) },
            { "Point Of Interest f", new Vector2(29.5647012f,-95.0813750f) },
            { "Point Of Interest g", new Vector2(29.5651359f,-95.0807408f) },
            { "Point Of Interest h", new Vector2(29.5651465f,-95.0814092f) },
            { "Point Of Interest i", new Vector2(29.5648850f,-95.0808360f) },
        };
        
        foreach (var key in pois.Keys)
        {
 
            WaypointManager.Instance.GenerateWaypointAtCoordinate(pois[key], key);
        }
    }
}
