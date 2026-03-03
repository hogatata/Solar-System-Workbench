using UnityEngine;
using System;

public class AppBootstrapper : MonoBehaviour
{
    public SolarSystemConfig config;
    public PlanetView[] planets;
    public TimeController timeController;
    TimeModel timeModel;
    PlanetSystemController controller;

    void Start()
    {
        Debug.Log("[BOOT] Initializing application");

        timeModel = new TimeModel();
        
        // Pass the config into the service
        var ephemeris = new PlanetEphemerisService(config);

        controller = new PlanetSystemController(timeModel, ephemeris, planets, config);

        timeController.Init(timeModel);
    }
}