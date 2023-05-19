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
            string rockType = "Unspecified rock type",
            string petrology = "Unspecified petrology",
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
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.L))
        {
            SwitchToSpectroscopyResultPage();
        }
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

    public void SwitchToSpectroscopyResultPage()
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

        Debug.Log("Switched to spec reusult page");
    }

    private void UpdateSpectroscopyResultPage(SpecData specData)
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
}
