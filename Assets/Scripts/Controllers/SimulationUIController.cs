using UnityEngine;

public class SimulationUIController : MonoBehaviour
{
    public TimeModel timeModel;
    public ScaleController scaleController;
    public SolarSystemConfig config;

    public void TogglePlayPause() 
    {
        timeModel.IsPlaying = !timeModel.IsPlaying;
        Debug.Log($"[INPUT] Simulation {(timeModel.IsPlaying ? "Resumed" : "Paused")}");
    }

    public void SetTimeSpeed(float speed) 
    {
        timeModel.timeScale = speed;
        Debug.Log($"[INPUT] Speed set to x{speed}");
    }

    public void ResetScale() 
    {
        scaleController.SetScale(1f - scaleController.rootToScale.localScale.x);
        Debug.Log("[INPUT] Scale reset to 1.0");
    }

    public void ToggleOrbits() 
    {
        config.showOrbits = !config.showOrbits;
        foreach(var p in FindObjectsOfType<PlanetView>()) {
            p.SetOrbitPoints(new Vector3[0], config.showOrbits);
        }
        Debug.Log($"[INPUT] Orbits toggled: {config.showOrbits}");
    }
}