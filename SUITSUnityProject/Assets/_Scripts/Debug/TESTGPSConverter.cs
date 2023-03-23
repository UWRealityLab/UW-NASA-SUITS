using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class TESTGPSConverter : MonoBehaviour
{
    [SerializeField] private TMP_Text _tmp;

    private void Start()
    {


        GPSEncoder.SetLocalOrigin(new Vector2(47.65068861926607f, -122.30562404460012f));
        Debug.LogWarning(GPSEncoder.GPSToUCS(new Vector2(47.64951697735713f, -122.30480143562266f)));
        Input.location.Start();
        
    }

    private void Update()
    {
        _tmp.text = Quaternion.Euler(0, -Input.compass.trueHeading, 0).ToString();
    }
}
