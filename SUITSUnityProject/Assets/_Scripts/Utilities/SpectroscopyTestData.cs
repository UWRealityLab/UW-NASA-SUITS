using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpectroscopyTestData : MonoBehaviour
{

    public SpectroscopyScanManager specScanManager;
    public List<List<float>> scanSamples;
    public int rockTagID;

    private void Start()
    {
        rockTagID = 1;

        scanSamples = new List<List<float>>();
        List<float> test1 = new List<float>();
        test1.AddRange(new float[]{40.58f,12.83f,10.91f,13.18f,0.19f,6.7f,10.64f,-0.11f,0.34f});
        scanSamples.Add(test1);

        List<float> test2 = new List<float>();
        test2.AddRange(new float[] {36.89f,2.44f,9.6f,14.52f,0.24f,5.3f,8.22f,-0.13f,0.29f});
        scanSamples.Add(test2);

        List<float> test3 = new List<float>();
        test3.AddRange(new float[] {41.62f,2.44f,9.52f,18.12f,0.27f,11.1f,8.12f,-0.12f,0.28f});
        scanSamples.Add(test3);

        List<float> test4 = new List<float>();
        test4.AddRange(new float[] {46.72f,1.1f,19.01f,7.21f,0.14f,7.83f,14.22f,0.43f,0.65f});
        scanSamples.Add(test4);

        List<float> test5 = new List<float>();
        test5.AddRange(new float[] {46.53f,3.4f,11.68f,16.56f,0.24f,6.98f,11.11f,-0.02f,0.38f});
        scanSamples.Add(test5);

        List<float> test6 = new List<float>();
        test6.AddRange(new float[] {42.45f,1.56f,11.44f,17.91f,0.27f,10.45f,9.37f,-0.08f,0.34f});
        scanSamples.Add(test6);

        List<float> test7 = new List<float>();
        test7.AddRange(new float[] {42.56f,9.38f,12.03f,11.27f,0.17f,9.7f,10.52f,0.28f,0.44f});
        scanSamples.Add(test7);
    }

    public void addRandomScan()
    {
        tryAddScan(scanSamples[Random.Range(0, 7)]);
    }

    public bool tryAddScan(List<float> scanData)
    {
        if (scanData[0] > 0 && !specScanManager.CheckScanExists(scanData[0]))
        {
            Dictionary<SpectroscopyScanManager.Mineral, float> rockComposition = new Dictionary<SpectroscopyScanManager.Mineral, float>();
            rockComposition.Add(SpectroscopyScanManager.Mineral.SiO2, scanData[0]);
            rockComposition.Add(SpectroscopyScanManager.Mineral.TiO2, scanData[1]);
            rockComposition.Add(SpectroscopyScanManager.Mineral.Al2O3, scanData[2]);
            rockComposition.Add(SpectroscopyScanManager.Mineral.FeO, scanData[3]);
            rockComposition.Add(SpectroscopyScanManager.Mineral.MnO, scanData[4]);
            rockComposition.Add(SpectroscopyScanManager.Mineral.MgO, scanData[5]);
            rockComposition.Add(SpectroscopyScanManager.Mineral.CaO, scanData[6]);
            rockComposition.Add(SpectroscopyScanManager.Mineral.K2O, scanData[7]);
            rockComposition.Add(SpectroscopyScanManager.Mineral.P2O3, scanData[8]);
            specScanManager.rockTypeReference.TryGetValue(scanData[0], out string rockType);
            specScanManager.rockPetrologyReference.TryGetValue(scanData[0], out string rockPetrology);
            SpectroscopyScanManager.SpecData specData = new SpectroscopyScanManager.SpecData(rockComposition, rockTagID: rockTagID, rockType: rockType, petrology: rockPetrology);
            specScanManager.AddScan(specData);
            //specScanManager.SwitchToSpectroscopyResultPage(specData);  // Automatically pull up the spectroscopy result page with the new data
            rockTagID++;
            return true;
        }
        Debug.Log("Duplicate scan found");
        return false;
    }
}
