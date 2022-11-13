using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static Microsoft.MixedReality.Toolkit.Input.FuzzyGazeInteractor;

public class EyeTracker : MonoBehaviour
{
    [SerializeField]
    private FuzzyGazeInteractorCustom fuzzyGazeInteractor;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        /*List<GazeRaycastHitResult> result = fuzzyGazeInteractor.GetGazeRaycastHitResults();
        if (result.Count > 0)
            transform.position = result[0].raycastHit.transform.position;*/

        Debug.Log(fuzzyGazeInteractor.TryGetCurrent3DRaycastHit(out RaycastHit hit));
        Debug.Log(hit.point);
        transform.localPosition = hit.point;
    }
}
