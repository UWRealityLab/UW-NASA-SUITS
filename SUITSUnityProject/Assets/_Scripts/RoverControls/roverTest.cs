using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class roverTest : MonoBehaviour
{

    public string coordInput;
    public GameObject rover;

    public Vector3 targetPosition;
    public float speed = 1;

    // Start is called before the first frame update
    void Start()
    {
        Vector3 startPosition = new Vector3(0, 0, 0);
        MoveRoverToPosition(startPosition);
    }

    // Update is called once per frame
    void Update()
    {
       // rover.transform.translate(targetPosition);
        Vector3 direction = targetPosition = rover.transform.position;
        if (direction.magnitude > 0.2)
        {
            rover.transform.Translate(direction.normalized * speed * Time.deltaTime);
        }
    }

    void setCoordFromGPS(Vector3 gpsCoord)
    {
        targetPosition = GPSManager.Instance.GPStoWorld(gpsCoord);
    }

    public void CoordInput()
    {
        string coordinateText = coordInput;
       // string coordinateText = coordInput.text;
        if (string.IsNullOrEmpty(coordinateText))
        {
            Debug.LogWarning("Please enter a coordinate.");
            return;
        }
        string[] coordinate = coordinateText.Split(',');
        if (coordinate.Length != 3)
        {
            Debug.LogWarning("Please enter a valid 3D coordinate in the format 'x,y,z'.");
            return;
        }
        float x, y, z;
        if ((!float.TryParse(coordinate[0], out x)) || (!float.TryParse(coordinate[1], out y)) || (!float.TryParse(coordinate[2], out z)))
        {
            Debug.LogWarning("Please enter a valid floating point number coordinates in the format 'x,y,z'.");
            return;
        }
        float.TryParse(coordinate[0], out x);
        float.TryParse(coordinate[1], out y);
        float.TryParse(coordinate[2], out z);
        Vector3 targetPosition = new Vector3(x, y, z);
        MoveRoverToPosition(targetPosition);
    }


    public void RayCastInput()
    {
      /*  RayCastHit hit;
        if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition),out hit))
        {
            Vector3 targetPosition = hit.point;
            MoveRoverToPosition(targetPosition);
        } */
       
    }

    public void WaypointInput(GameObject Waypoint)
    {
       targetPosition = Waypoint.transform.position;
       MoveRoverToPosition(targetPosition);
    }



    private void MoveRoverToPosition(Vector3 targetPosition)
    {
        rover.transform.Translate(targetPosition);
    }

}
