using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;

public class ModifyText : MonoBehaviour
{
    public GameObject SceneObjects;
    public GameObject connectionStatus;

    // Update is called once per frame
    // void Update()
    // {
    // }

    // Start is called before the first frame update
    // void Start()
    // {
    // }

    void Updated()
    {
        SceneObjects = GameObject.Find("SceneObjects");
        connectionStatus = SceneObjects.transform.GetChild(2).gameObject;
        var serverInput = connectionStatus.transform.GetChild(0).gameObject;
        var inputSimulator = serverInput.transform.GetChild(0).gameObject;
        var inputField = inputSimulator.transform.GetChild(3).gameObject;
        var text = inputField.transform.GetChild(2).gameObject;

        text.GetComponent<Text>().text = "localhost";
        Debug.Log(text.GetComponent<Text>().text);
    }
}
