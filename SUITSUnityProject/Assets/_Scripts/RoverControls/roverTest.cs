using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class roverTest : MonoBehaviour
{

    public InputField coordInput;
    public GameObject rover;

    [SerializeField] public Vector3 targetPosition;
    [SerializeField] public float speed = 1;

    // Start is called before the first frame update
    void Start()
    {
       //rover = gameObject.transform.position;
       targetPosition = new Vector3(0, 0, 0);
       
    }

    // Update is called once per frame
    void Update()
    {
        rover.transform.position = targetPosition;
        /*Vector3 direction = targetPosition = rover.position;
        if (direction.magnitude > 0.2)
        {
            rover.Translate(direction.normalized * speed * Time.deltaTime);
        }*/
    }

    void setCoordFromGPS(Vector3 gpsCoord)
    {
        targetPosition = GPSManager.Instance.GPStoWorld(gpsCoord);
    }

    public void CoordInput()
    {
        string coordinateText = coordInput.text;
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
        /*if (!float.TryParse(coordinate[0], out x) || !float.TryParse(coordinate[1], out y), !float.TryParse(coordinate[2], out z)) 
        {
            Debug.LogWarning("Please enter a valid floating point number coordinates in the format 'x,y,z'.");
            return;
        }*/
        float.TryParse(coordinate[0], out x);
        float.TryParse(coordinate[1], out y);
        float.TryParse(coordinate[2], out z);
        Vector3 targetPosition = new Vector3(x, y, z);
        MoveroverToPosition(targetPosition);
    }

    public void MoveroverToPosition(Vector3 targetPosition)
    {
        rover.transform.position = targetPosition;
    }

}
