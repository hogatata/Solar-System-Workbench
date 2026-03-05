using UnityEngine;
using UnityEngine.XR.Interaction.Toolkit;
using System;

[RequireComponent(typeof(UnityEngine.XR.Interaction.Toolkit.Interactables.XRSimpleInteractable))]
public class PlanetSelectable : MonoBehaviour
{
    public PlanetView planetView;
    public static event Action<PlanetView> OnPlanetSelected;

    void Awake()
    {
        GetComponent<UnityEngine.XR.Interaction.Toolkit.Interactables.XRSimpleInteractable>().selectEntered.AddListener(OnSelected);

        if (planetView == null) planetView = GetComponent<PlanetView>();
    }

    void OnSelected(SelectEnterEventArgs args)
    {
        Debug.Log($"[XR] Raycast selected planet: {planetView.planet}");
        OnPlanetSelected?.Invoke(planetView);
    }
}