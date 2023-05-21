using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpectroscopyScanManager : Singleton<SpectroscopyScanManager>
{
    public enum Mineral
    {
        SiO2,
        MgO,
        TiO2,
        CaO,
        Al2O3,
        K2O,
        FeO,
        P2O3,
        MnO
    }

    public Dictionary<float, string> rockTypeReference;
    public Dictionary<float, string> rockPetrologyReference;


    public class SpecData
    {
        public int rockTagID;
        public string rockType;
        public string petrology;
        public Dictionary<Mineral, float> rockComposition;
        public string location;

        public SpecData(
            Dictionary<Mineral, float> rockComposition,
            int rockTagID = 0, 
            string rockType = "Unknown rock type",
            string petrology = "Unknown petrology",
            string location = "Unspecified location")
        {
            this.rockComposition = rockComposition;
            this.rockType = rockType;
            this.rockTagID = rockTagID;
            this.petrology = petrology;
            this.location = location;
        }
    }


    [SerializeField] private GameObject _mineralTableContainer;
    [SerializeField] private TMPro.TMP_Text _rockTagIDText;
    [SerializeField] private TMPro.TMP_Text _rockTypeText;
    [SerializeField] private TMPro.TMP_Text _petrologyText;
    [SerializeField] private TMPro.TMP_Text _locationText;

    [SerializeField] private GameObject _pastScanUIPrefab;
    [SerializeField] private GameObject _pastScansContainer;

    [SerializeField] private GameObject _spectroscopyResultPage;
    [SerializeField] private GameObject _pastScanPage;

    [SerializeField] private GameObject _geologicalScanPanel;
    [SerializeField] private PressableButton _spectroscopyQuickButton;
    [SerializeField] private SidePanelAnimation _UIASidePanelAnimation;
    [SerializeField] private SidePanelAnimation _GeologicalSidePanelAnimation;
    private List<SpecData> _pastScans;


    void Awake()
    {
        _pastScans = new List<SpecData>();
        rockTypeReference = new Dictionary<float, string>();
        rockTypeReference.Add(40.58f, "Mare basalt");
        rockTypeReference.Add(36.89f, "Vesicular basalt");
        rockTypeReference.Add(41.62f, "Olivine basalt");
        rockTypeReference.Add(46.72f, "Feldspathic basalt");
        rockTypeReference.Add(46.53f, "Pigeonite basalt");
        rockTypeReference.Add(42.45f, "Olivine basalt");
        rockTypeReference.Add(42.56f, "Ilmenite basalt");

        rockPetrologyReference = new Dictionary<float, string>();
        rockPetrologyReference.Add(40.58f, "Fine-grained, porphyritic");
        rockPetrologyReference.Add(36.89f, "Medium-grained, small olv phenocrysts");
        rockPetrologyReference.Add(41.62f, "Medium-grained, porphyritic");
        rockPetrologyReference.Add(46.72f, "Fine-grained, phenos of plag, and pyx");
        rockPetrologyReference.Add(46.53f, "Porphyritic, phenos of oliv and cpx");
        rockPetrologyReference.Add(42.45f, "Medium-grained, phenos of oliv and pyx");
        rockPetrologyReference.Add(42.56f, "Fine-grainded, vesicular, poikilitic");

    }

    public void AddScan(SpecData specData)
    {
        _pastScans.Add(specData);

        // Update the past scans page with the new scan
        GameObject pastScanUI = Instantiate(_pastScanUIPrefab, _pastScansContainer.transform);
        pastScanUI.transform.Find("Frontplate/AnimatedContent/Value").GetComponent<TMPro.TMP_Text>().text = specData.rockTagID.ToString();
        pastScanUI.GetComponent<PressableButton>().OnClicked.AddListener(() => _pastScanPage.SetActive(false));
        pastScanUI.GetComponent<PressableButton>().OnClicked.AddListener(() => _spectroscopyResultPage.SetActive(true));
        pastScanUI.GetComponent<PressableButton>().OnClicked.AddListener(() => UpdateSpectroscopyResultPage(specData));
    }

    public void SwitchToSpectroscopyResultPage(SpecData specData)
    {
        // Toggle geological scan panel if not already on
        if (!_geologicalScanPanel.activeInHierarchy)
        {
            _UIASidePanelAnimation.DisablePanel();
            _GeologicalSidePanelAnimation.EnablePanel();

            _spectroscopyQuickButton.ForceSetToggled(true);
        }

        // Disable currently active page
        for (int i = 0; i < _geologicalScanPanel.transform.childCount; i++)
        {
            if (_geologicalScanPanel.transform.GetChild(i).name.Contains("Page"))
            {
                _geologicalScanPanel.transform.GetChild(i).gameObject.SetActive(false);
            }
        }

        // Set spectroscopy result page to active
        _spectroscopyResultPage.SetActive(true);
        UpdateSpectroscopyResultPage(specData);

        Debug.Log("Switched to spec reusult page");
    }

    public void UpdateSpectroscopyResultPage(SpecData specData)
    {
        // Update the spectroscopy result page
        if (_rockTagIDText != null)
        {
            _rockTagIDText.text = specData.rockTagID.ToString();
        }
        if (specData.rockType != null)
        {
            _rockTypeText.text = specData.rockType;
        }
        if (specData.petrology != null)
        {
            _petrologyText.text = specData.petrology;
        }
        if (specData.rockComposition != null)
        {
            foreach (KeyValuePair<Mineral, float> mineral in specData.rockComposition)
            {
                string mineralName = mineral.Key.ToString();

                // Set the text to reflect the new mineral value
                _mineralTableContainer.transform.Find(mineralName + "/Value").GetComponent<TMPro.TMP_Text>().text = mineral.Value.ToString();
            }
        }
        if (specData.location != null)
        {
            _locationText.text = specData.location;
        }
    }

    public bool CheckScanExists(float newSiO2)
    {
        foreach(SpecData currSpec in _pastScans)
        {
            currSpec.rockComposition.TryGetValue(SpectroscopyScanManager.Mineral.SiO2, out float currSiO2);
            if (currSiO2 == newSiO2)
            {
                return true;
            }
        }
        return false;
    }
}
