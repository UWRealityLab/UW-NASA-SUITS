using System.Collections;
using System.Collections.Generic;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using TMPro;

public class DataRequest : MonoBehaviour
{
    // string url = "http://localhost:8080/api/simulationstate/1";
    //string url = "http://128.208.1.212:8080/api/simulationstate/1";

    TextMeshPro timer;
    TextMeshPro heart_bpm;
    TextMeshPro p_sub;
    TextMeshPro p_suit;
    TextMeshPro t_sub;
    TextMeshPro v_fan;
    TextMeshPro p_o2;
    TextMeshPro rate_o2;
    TextMeshPro batteryPercent;
    TextMeshPro battery_out;
    TextMeshPro cap_battery;
    TextMeshPro t_battery;
    TextMeshPro p_h2o_g;
    TextMeshPro p_h2o_l;
    TextMeshPro p_sop;
    TextMeshPro rate_sop;
    TextMeshPro t_oxygenPrimary;
    TextMeshPro t_oxygenSec;
    TextMeshPro ox_primary;
    TextMeshPro ox_secondary;
    TextMeshPro t_oxygen;
    TextMeshPro cap_water;
    TextMeshPro t_water;

    public GameObject overallwarner;
    public GameObject heartwarner;
    public GameObject psubwarning;
    public GameObject fanwarning;
    public GameObject po2;
    public GameObject rateo2;
    public GameObject batterycapwarning;
    public GameObject ph20gwarning;
    public GameObject ph20lwarning;
    public GameObject psopwarning;
    public GameObject ratesopwarning;
    public GameObject waterwarning;

    public GameObject SceneObjects;
    public string url;
    public GameObject connectionStatus;

    public void TextMeshUpdated()
    {
        SceneObjects = GameObject.Find("SceneObjects");
        connectionStatus = SceneObjects.transform.GetChild(2).gameObject;
        var serverInput = connectionStatus.transform.GetChild(0).gameObject;
        // var inputSimulator = serverInput.transform.GetChild(0).gameObject;
        // var inputField = inputSimulator.transform.GetChild(3).gameObject;
        // var text = inputField.transform.GetChild(2).gameObject;
        var textArea = serverInput.transform.GetChild(2).gameObject;
        var text = textArea.transform.GetChild(0).gameObject;

        url = "http://" + text.GetComponent<TextMeshPro>().text + ":8080/api/simulationstate/1";
        Debug.Log("Output string " + url);
    }

    // Update is called once per frame
    void Update()
    {
        StartCoroutine(MakeDataRequest());
    }
    IEnumerator MakeDataRequest()
    {
        UnityWebRequest request = UnityWebRequest.Get(url);
        yield return request.SendWebRequest();

        if (request.isNetworkError || request.isHttpError)
        {
            Debug.Log("networking error");
        }
        else
        {
            var slateContent = connectionStatus.transform.GetChild(2).gameObject;
            var currentStatus = slateContent.transform.GetChild(0).gameObject;
            currentStatus.GetComponent<TextMeshPro>().SetText("Current Status: Connected");

            var data = JsonConvert.DeserializeObject<DataResponse>(request.downloadHandler.text);
            
            var big = SceneObjects.transform.GetChild(4).gameObject;
            var plate = big.transform.GetChild(1).gameObject;

            // timer = GameObject.Find("timer").GetComponent<TMP_InputField>();
            timer = plate.transform.GetChild(0).gameObject.GetComponent<TextMeshPro>();
            timer.SetText("EVA Time: " + (data.timer.ToString()) + "");
            
            // heart_bpm = GameObject.Find("heart_bpm").GetComponent<TMP_InputField>();
            heart_bpm = plate.transform.GetChild(1).gameObject.GetComponent<TextMeshPro>();
            heart_bpm.SetText("Heart Rate: " + (data.heart_bpm.ToString()) + " BPM");

            // p_sub = GameObject.Find("p_sub").GetComponent<TMP_InputField>();
            p_sub = plate.transform.GetChild(2).gameObject.GetComponent<TextMeshPro>();
            p_sub.SetText("External Pressure: " + (data.p_sub.ToString()) + " PSIA");

            // p_suit = GameObject.Find("p_suit").GetComponent<TMP_InputField>();
            p_suit = plate.transform.GetChild(3).gameObject.GetComponent<TextMeshPro>();
            p_suit.SetText("Suit Pressure: " + (data.p_suit.ToString()) + " PSID");

            // t_sub = GameObject.Find("t_sub").GetComponent<TMP_InputField>();
            t_sub = plate.transform.GetChild(4).gameObject.GetComponent<TextMeshPro>();
            t_sub.SetText("External Temp: " + (data.t_sub.ToString()) + "F");

            // v_fan = GameObject.Find("v_fan").GetComponent<TMP_InputField>();
            v_fan = plate.transform.GetChild(5).gameObject.GetComponent<TextMeshPro>();
            v_fan.SetText("Fan: " + (data.v_fan.ToString()) + " RPM ");

            // p_o2 = GameObject.Find("p_o2").GetComponent<TMP_InputField>();
            p_o2 = plate.transform.GetChild(6).gameObject.GetComponent<TextMeshPro>();
            p_o2.SetText("OYX Pressure: " + (data.p_o2.ToString()) + " PSIA");

            // rate_o2 = GameObject.Find("rate_o2").GetComponent<TMP_InputField>();
            rate_o2 = plate.transform.GetChild(7).gameObject.GetComponent<TextMeshPro>();
            rate_o2.SetText("OYX Rate: " + (data.rate_o2.ToString()) + " PSI/MIN");

            // batteryPercent = GameObject.Find("batteryPercent").GetComponent<TMP_InputField>();
            batteryPercent = plate.transform.GetChild(8).gameObject.GetComponent<TextMeshPro>();
            batteryPercent.SetText("Battery: " + (data.batteryPercent.ToString()) + "%");

            // battery_out = GameObject.Find("battery_out").GetComponent<TMP_InputField>();
            battery_out = plate.transform.GetChild(9).gameObject.GetComponent<TextMeshPro>();
            battery_out.SetText((data.battery_out.ToString()) + "% Battery");

            // cap_battery = GameObject.Find("cap_battery").GetComponent<TMP_InputField>();
            cap_battery = plate.transform.GetChild(10).gameObject.GetComponent<TextMeshPro>();
            cap_battery.SetText("Battery Capacity: " + (data.cap_battery.ToString()) + "AMP-HR");

            // t_battery = GameObject.Find("t_battery").GetComponent<TMP_InputField>();
            t_battery = plate.transform.GetChild(11).gameObject.GetComponent<TextMeshPro>();
            t_battery.SetText("Battery Time Left: " + (data.t_battery.ToString()) + "");

            // p_h2o_g = GameObject.Find("p_h2o_g").GetComponent<TMP_InputField>();
            p_h2o_g = plate.transform.GetChild(12).gameObject.GetComponent<TextMeshPro>();
            p_h2o_g.SetText("H20 Gas Pressure: " + (data.p_h2o_g.ToString()) + " PSIA");

            // p_h2o_l = GameObject.Find("p_h2o_l").GetComponent<TMP_InputField>();
            p_h2o_l = plate.transform.GetChild(13).gameObject.GetComponent<TextMeshPro>();
            p_h2o_l.SetText("H20 Liquid Pressure: " + (data.p_h2o_l.ToString()) + " PSIA");

            // p_sop = GameObject.Find("p_sop").GetComponent<TMP_InputField>();
            p_sop = plate.transform.GetChild(14).gameObject.GetComponent<TextMeshPro>();
            p_sop.SetText("Secondary OYX Pressure: " + (data.p_sop.ToString()) + " PSIA");

            // rate_sop = GameObject.Find("rate_sop").GetComponent<TMP_InputField>();
            rate_sop = plate.transform.GetChild(15).gameObject.GetComponent<TextMeshPro>();
            rate_sop.SetText("Secondary OYX Rate: " + (data.rate_sop.ToString()) + " PSI/MIN");

            // t_oxygenPrimary = GameObject.Find("t_oxygenPrimary").GetComponent<TMP_InputField>();
            t_oxygenPrimary = plate.transform.GetChild(16).gameObject.GetComponent<TextMeshPro>();
            t_oxygenPrimary.SetText("Primary OYX " + (data.t_oxygenPrimary.ToString()) + "%");

            // t_oxygenSec = GameObject.Find("t_oxygenSec").GetComponent<TMP_InputField>();
            t_oxygenSec = plate.transform.GetChild(17).gameObject.GetComponent<TextMeshPro>();
            t_oxygenSec.SetText("Secondary OYX " + (data.t_oxygenSec.ToString()) + "%");

            // ox_primary = GameObject.Find("ox_primary").GetComponent<TMP_InputField>();
            ox_primary = plate.transform.GetChild(18).gameObject.GetComponent<TextMeshPro>();
            ox_primary.SetText("Primary OYX " + (data.ox_primary.ToString()) + "%");

            // ox_secondary = GameObject.Find("ox_secondary").GetComponent<TMP_InputField>();
            ox_secondary = plate.transform.GetChild(19).gameObject.GetComponent<TextMeshPro>();
            ox_secondary.SetText("Secondary OYX " + (data.ox_secondary.ToString()) + "%");

            // t_oxygen = GameObject.Find("t_oxygen").GetComponent<TMP_InputField>();
            t_oxygen = plate.transform.GetChild(20).gameObject.GetComponent<TextMeshPro>();
            t_oxygen.SetText("Primary OYX Time: " + (data.t_oxygen.ToString()) + "");

            // cap_water = GameObject.Find("cap_water").GetComponent<TMP_InputField>();
            cap_water = plate.transform.GetChild(21).gameObject.GetComponent<TextMeshPro>();
            cap_water.SetText("Water Left: " + (data.cap_water.ToString()) + "%");

            // t_water = GameObject.Find("t_water").GetComponent<TMP_InputField>();
            t_water = plate.transform.GetChild(22).gameObject.GetComponent<TextMeshPro>();
            t_water.SetText("H20 Time: " + (data.t_water.ToString()) + "");

            // Signal to represent overall status, true if one or more data is out of normal
            var overall = false;

            //Warnings
            if (data.heart_bpm < 80 || data.heart_bpm > 100)
            {
                heartwarner.GetComponent<Renderer>().material.color = Color.red;
                heart_bpm.color = Color.red;
                overall = true;
            }
            else
            {
                heartwarner.GetComponent<Renderer>().material.color = Color.green;
                heart_bpm.color = Color.green;
            }

            if (data.p_sub < 2 || data.p_sub > 4)
            {
                // psubwarning.SetActive(true);
                p_sub.color = Color.red;
                overall = true;
            }
            else {
                p_sub.color = Color.green;
            }

            if (data.v_fan < 10000 || data.v_fan > 40000)
            {
                // fanwarning.SetActive(true);
                v_fan.color = Color.red;
                overall = true;
            }
            else {
                v_fan.color = Color.green;
            }

            if (data.p_o2 < 750.0 || data.p_o2 > 950.0)
            {
                //    po2.SetActive(true);
                p_o2.color = Color.red;
                overall = true;
            }
            else {
                p_o2.color = Color.green;
            }

            if (data.rate_o2 < 0.5 || data.rate_o2 > 1.0)
            {
                rateo2.GetComponent<Renderer>().material.color = Color.red;
                rate_o2.color = Color.red;
                overall = true;
            }
            else
            {
                rateo2.GetComponent<Renderer>().material.color = Color.green;
                rate_o2.color = Color.green;
            }

            if (data.cap_battery < 0.0) // || data.cap_battery > 30.0
            {
                //    batterycapwarning.SetActive(true);
                cap_battery.color = Color.red;
                overall = true;
            }
            else {
                cap_battery.color = Color.green;
            }

            if(data.batteryPercent < 20)
            {
                batteryPercent.color = Color.red;
                battery_out.color = Color.red;
                t_battery.color = Color.red;
                overall = true;
            }
            else
            {
                batteryPercent.color = Color.green;
                battery_out.color = Color.green;
                t_battery.color = Color.green;
            }

            if (data.p_h2o_g < 14.0 || data.p_h2o_g > 16.0)
            {
                //    ph20gwarning.SetActive(true);
                p_h2o_g.color = Color.red;
                overall = true;
            }
            else {
                p_h2o_g.color = Color.green;
            }

            if (data.p_h2o_l < 14.0 || data.p_h2o_l > 16.0)
            {
                //    ph20lwarning.SetActive(true);
                p_h2o_l.color = Color.red;
                overall = true;
            }
            else {
                p_h2o_l.color = Color.green;
            }

            if (data.p_sop < 750.0 || data.p_sop > 950.0)
            {
                //    psopwarning.SetActive(true);
                p_sop.color = Color.red;
                overall = true;
            }
            else {
                p_sop.color = Color.green;
            }

            if (data.rate_sop < 0.5 || data.rate_sop > 1.0)
            {
                //    ratesopwarning.SetActive(true);
                rate_sop.color = Color.red;
                overall = true;
            }
            else {
                rate_sop.color = Color.green;
            }

            if (overall)
            {
                overallwarner.GetComponent<Renderer>().material.color = Color.red;
            }
            else {
                overallwarner.GetComponent<Renderer>().material.color = Color.green;
            }
        }
    }
}