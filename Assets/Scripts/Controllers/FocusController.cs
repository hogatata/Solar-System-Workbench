using System.Collections.Generic;
using UnityEngine;

public class FocusController : MonoBehaviour
{
    private PlanetView currentFocus;
    public float focusMultiplier = 3f; 
    private Dictionary<PlanetView, Vector3> originalScales = new Dictionary<PlanetView, Vector3>();

    public PlanetInfoPanel infoPanel;

    void OnEnable() => PlanetSelectable.OnPlanetSelected += HandlePlanetFocus;
    void OnDisable() => PlanetSelectable.OnPlanetSelected -= HandlePlanetFocus;

    void Start()
    {
        foreach (var p in FindObjectsOfType<PlanetView>())
            originalScales[p] = p.transform.localScale;
            
        if (infoPanel != null) infoPanel.Hide();
    }

    void HandlePlanetFocus(PlanetView selectedPlanet)
    {
        foreach (var p in originalScales.Keys) 
            p.transform.localScale = originalScales[p]; 

        if (currentFocus == selectedPlanet)
        {
            currentFocus = null;
            infoPanel.Hide();
            return; 
        }

        currentFocus = selectedPlanet;
        currentFocus.transform.localScale = originalScales[currentFocus] * focusMultiplier; 
        
        infoPanel.ShowName(currentFocus.planet.ToString(), currentFocus.transform); 
    }
}