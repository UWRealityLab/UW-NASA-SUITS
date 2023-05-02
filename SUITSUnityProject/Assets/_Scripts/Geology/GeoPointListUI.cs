using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Utilities;
using Unity.XR.CoreUtils;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;

public class GeoPointListUI : MonoBehaviour
{
    public GridObjectCollection listEntryCollection;
    public GameObject geoPointListEntryPrefab;

    // Maps GeoPoint to GeoPointListEntry (which is the UI element representing the GeoPoint)
    private Dictionary<GameObject, GameObject> m_ListEntries;

    private void Awake()
    {
        m_ListEntries = new Dictionary<GameObject, GameObject>();
    }

    // Event listener that updates the list UI when a GeoPoint is created
    public void OnGeoPointCreated(GameObject geoPoint)
    {
        GameObject listEntry = Instantiate(geoPointListEntryPrefab, listEntryCollection.transform);

        // Update the name displayed on the list entry with the name of the GeoPoint
        listEntry.GetNamedChild("GeoPointName").GetComponent<TextMeshPro>().text = geoPoint.GetComponent<GeoPointControls>().name;

        // Hook up listener for list entry delete button to actual GeoPoint
        listEntry.GetNamedChild("DeleteButton").GetComponent<PressableButtonHoloLens2>().ButtonPressed.AddListener(geoPoint.GetComponent<GeoPointControls>().DeleteGeoPoint);

        m_ListEntries.Add(geoPoint, listEntry);
        listEntryCollection.UpdateCollection();
    }

    // Event listener that updates the list UI when a GeoPoint is deleted
    public void OnGeoPointDeleted(GameObject geoPoint)
    {
        GameObject listEntryToDelete = m_ListEntries[geoPoint];
        m_ListEntries.Remove(geoPoint);
        Destroy(listEntryToDelete);
        StartCoroutine(UpdateListUIAtEndOfFrame());
    }

    IEnumerator UpdateListUIAtEndOfFrame()
    {
        yield return new WaitForEndOfFrame();
        listEntryCollection.UpdateCollection();
    }
}
