using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class GeoPointControls : MonoBehaviour
{
    public TextMeshProUGUI nameUI;

    public string name = "Unnamed GeoPoint";

    public void ChangeName(string newName)
    {
        Debug.Log($"gp name change: {newName}");
        name = newName;
        nameUI.text = newName;
    }

    public void DeleteGeoPoint()
    {
        GeoPointCollection collection;
        if (collection = GetComponentInParent<GeoPointCollection>())
        {
            collection.DeletePooledGeoPoint(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
}
