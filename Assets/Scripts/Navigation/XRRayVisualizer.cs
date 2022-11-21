using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;  // XRRayInteractor

public class XRRayVisualizer : MonoBehaviour
{
    [SerializeField]
    private GameObject visual;

    [SerializeField]
    private XRRayInteractor rayInteractor;

    private void Update()
    {
        rayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit raycastHit);
        visual.transform.localPosition = raycastHit.point;
    }
}
