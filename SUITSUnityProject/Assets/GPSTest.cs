using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GPSTest : MonoBehaviour
{
    
   
    [SerializeField] private Transform _user;
    [SerializeField] TMPro.TMP_Text gpsMsgBox;

    void Start()
    {
        if (_user == null)
            _user = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
    }


    // Update is called once per frame
    void Update()
    {
        
    }

    public void TestWorldtpGPS()
    {
        GPSManager.Instance.WorldtoGPS(_user.position);
        gpsMsgBox.text = $"GET CURRENT COORDS \n Current GPS Coords = " + GPSManager.Instance.WorldtoGPS(_user.position).ToString() + "\n CUrrent World Coords =  " + _user.position.ToString();
    }

    void TestGPStoWorld()
    {
        //implement
    }


}
