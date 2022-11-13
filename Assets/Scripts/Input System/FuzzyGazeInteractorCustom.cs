using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FuzzyGazeInteractorCustom : FuzzyGazeInteractor
{
    /// <summary>
    /// Get all the gaze-ray hit results stored in the interactor
    /// </summary>
    /// <returns>A list of GazeRaycastHitResult</returns>
    public List<GazeRaycastHitResult> GetGazeRaycastHitResults()
    {
        return baseTargetsRaycastHitResults;
    }
}
