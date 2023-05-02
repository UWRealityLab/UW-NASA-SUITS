using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class GeoPointCollection : MonoBehaviour
{
    // Event listeners take the GeoPoint that was created/disabled as a parameter
    public UnityEvent<GameObject> OnGeoPointCreated;
    public UnityEvent<GameObject> OnGeoPointDeleted;

    public List<GameObject> pooledGeoPoints;
    public GameObject geoPointPrefab;
    public int amountToPool = 20;
    public int amountToAddToPool = 5;

    // Iterates with every GeoPoint created
    private int m_GeoPointID = 1;

    void Start()
    {
        pooledGeoPoints = new List<GameObject>();
        AddGeoPointsToPool(amountToPool);
    }

    public GameObject GetPooledGeoPoint()
    {
        for (int i = 0; i < pooledGeoPoints.Count; i++)
        {
            if (!pooledGeoPoints[i].activeInHierarchy)
            {
                pooledGeoPoints[i].SetActive(true);
                pooledGeoPoints[i].GetComponent<GeoPointControls>().ChangeName($"GeoPoint {m_GeoPointID}");
                m_GeoPointID++;

                OnGeoPointCreated.Invoke(pooledGeoPoints[i]);
                return pooledGeoPoints[i];
            }
        }

        // Since there are no more inactive GeoPoints to draw from the pool, add more
        AddGeoPointsToPool(amountToAddToPool);
        return GetPooledGeoPoint();
    }

    public void DeletePooledGeoPoint(GameObject geoPoint)
    {
        pooledGeoPoints.Find(gp => gp == geoPoint).SetActive(false);
        OnGeoPointDeleted.Invoke(geoPoint);
    }

    
    private void AddGeoPointsToPool(int amount)
    {
        GameObject tmp;
        for (int i = 0; i < amount; i++)
        {
            tmp = Instantiate(geoPointPrefab, transform);
            tmp.SetActive(false);
            pooledGeoPoints.Add(tmp);
        }
    }
}
