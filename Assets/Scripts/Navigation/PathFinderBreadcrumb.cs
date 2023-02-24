using System.Collections;
using System.Collections.Generic;
using System;
using System.Linq;
using UnityEngine;

public class PathFinderBreadcrumb : MonoBehaviour, IPathFinder
{
    public Path breadcrumbs;
    public GameObject userObject;
    public float minDist;
    public float updateFrequency;



    public Vector3 homeLocation;
    // Start is called before the first frame update
    void Start()
    {
        //generateLineRenderer();
        homeLocation = userObject.transform.position;
        breadcrumbs = new Path();
        breadcrumbs.corners = new List<Vector3>();
        breadcrumbs.corners.Add(homeLocation);
        //Debug.Log("Started Breadcrumb Trail");
        //Debug.Log(string.Join(",", breadcrumbs.ToArray()));
        InvokeRepeating("UpdateBreadcrumbs", 2, (float)updateFrequency);

    }

    // Update is called once per frame
    void Update()
    {
        /*if (Input.GetKeyDown(KeyCode.Space))
        {
           
            LineRenderer lineRenderer = GetComponent<LineRenderer>();
            lineRenderer.positionCount = breadcrumbs.Count;
            var points = new Vector3[breadcrumbs.Count];
            for (int i = 0; i < breadcrumbs.Count; i++)
            {
                points[i] = breadcrumbs[i];
            }
            lineRenderer.SetPositions(points);
        }*/


    }

    void UpdateBreadcrumbs()
    {
        Vector3 currentPos = userObject.transform.position;
        float dist = Vector3.Distance(currentPos, breadcrumbs.corners.DefaultIfEmpty(homeLocation).Last());
        if (dist > minDist)
        {
            if (breadcrumbs.corners.Count > 2) //checking if you looped back on yourself
            {
                int indexer = breadcrumbs.corners.Count - 2;
                while (indexer >= 0 && dist > minDist)
                {
                    dist = Vector3.Distance(currentPos, breadcrumbs.corners[indexer]);
                    indexer -= 1;
                }
                if (indexer >= 0)
                { // if we found an index you're too close to, just
                  //take all the elements up to that index
                    breadcrumbs.corners.RemoveAll(x => breadcrumbs.corners.IndexOf(x) > indexer);
                }
            }
            breadcrumbs.corners.Add(currentPos);

        }
        /*else if(dist < minDist && breadcrumbs.Count>2)
        {
            while(dist < minDist && breadcrumbs.Count>1)
            {
                breadcrumbs.RemoveAt(breadcrumbs.Count - 1);
                dist = Vector3.Distance(currentPos, breadcrumbs.DefaultIfEmpty(homeLocation).Last());
            }
            breadcrumbs.Add(currentPos);
        }*/
        //Debug.Log(string.Join(",", breadcrumbs.ToArray()));
    }

    void generateLineRenderer()
    {
        LineRenderer lineRenderer = gameObject.AddComponent<LineRenderer>();
        lineRenderer.material = new Material(Shader.Find("Sprites/Default"));
        lineRenderer.widthMultiplier = 0.2f;
        lineRenderer.positionCount = 1;

        // A simple 2 color gradient with a fixed alpha of 1.0f.

    }

    public Vector3[] GetPath()
    {
        return breadcrumbs.corners.ToArray();
    }
}
