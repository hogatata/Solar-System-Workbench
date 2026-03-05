using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;

[RequireComponent(typeof(UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable))]
public class TableInteractionLogger : MonoBehaviour
{
    void Awake()
    {
        var interactable = GetComponent<UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable>();

        interactable.selectEntered.AddListener(OnGrabbed);
        interactable.selectExited.AddListener(OnReleased);
    }

    void OnGrabbed(SelectEnterEventArgs args) => Debug.Log("[XR] Table grabbed");
    
    void OnReleased(SelectExitEventArgs args) => Debug.Log("[XR] Table released");
}