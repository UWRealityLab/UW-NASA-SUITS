using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class MinimapVisualizer : MonoBehaviour
{
    public Minimap minimap;

    [SerializeField]
    private float updateFrequency = 1;

    [SerializeField]
    private RawImage userMarker;
    [SerializeField]
    private RawImage roverMarker;
    [SerializeField]
    private RawImage homeMarker;
    [SerializeField]
    private Texture waypointMarkerTexture;
    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating("UpdateMinimapImages", 0, updateFrequency);
    }

    void UpdateMinimapImages()
    {
        userMarker.GetComponent<RectTransform>().anchoredPosition = new Vector2(minimap.minimapDict["user"].x, minimap.minimapDict["user"].z);
        roverMarker.GetComponent<RectTransform>().anchoredPosition = new Vector2(minimap.minimapDict["rover"].x, minimap.minimapDict["rover"].z);
        homeMarker.GetComponent<RectTransform>().anchoredPosition = new Vector2(minimap.minimapDict["home"].x, minimap.minimapDict["home"].z);

    }



}
