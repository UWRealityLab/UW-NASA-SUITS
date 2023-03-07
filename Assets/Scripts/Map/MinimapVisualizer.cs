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
    [SerializeField]
    private RawImage pathMarkerPrefab;

    private List<RawImage> pathImages;
    // Start is called before the first frame update
    void Start()
    {
        pathImages = new List<RawImage>();
        InvokeRepeating("UpdateMinimapImages", 0, updateFrequency);
    }

    void UpdateMinimapImages()
    {
        Debug.Log(minimap.minimapDict["user"]);
        userMarker.GetComponent<RectTransform>().localEulerAngles =  new Vector3(0, 0, -minimap.minimapDict["user"].y);
        roverMarker.GetComponent<RectTransform>().anchoredPosition = new Vector2(minimap.minimapDict["rover"].x, minimap.minimapDict["rover"].z);
        homeMarker.GetComponent<RectTransform>().anchoredPosition = new Vector2(minimap.minimapDict["home"].x, minimap.minimapDict["home"].z);
        if (minimap.minimapPath.Count > 1)
        {   
            foreach (RawImage img in pathImages)
            {
                DestroyImmediate(img.gameObject);
            }
            pathImages.Clear();
            for(int i = 1; i<minimap.minimapPath.Count; i++)
            {
                pathImages.Add(Instantiate<RawImage>(pathMarkerPrefab));
                pathImages[^1].GetComponent<RectTransform>().anchoredPosition = new Vector2(minimap.minimapPath[i].x, minimap.minimapPath[i].z);
                pathImages[^1].gameObject.SetActive(true);
                pathImages[^1].transform.SetParent(gameObject.transform, false);
            }
        }
    }



}
