using System;
using UnityEngine;

public class PlanetSystemController
{
    TimeModel timeModel;
    IPlanetEphemerisService ephemeris;
    PlanetView[] planets;
    SolarSystemConfig config;

    public PlanetSystemController(TimeModel timeModel, IPlanetEphemerisService ephemeris, PlanetView[] planets, SolarSystemConfig config)
    {
        this.timeModel = timeModel;
        this.ephemeris = ephemeris;
        this.planets = planets;
        this.config = config;

        this.timeModel.OnTimeChanged += UpdatePlanets;

        InitializeOrbits();
    }

    void InitializeOrbits()
    {

        int samples = 6000; 
        DateTime start = DateTime.Now;

        foreach (var p in planets)
        {
            Vector3[] points = new Vector3[samples];
            
            for (int i = 0; i < samples; i++)
            {
                DateTime t = start.AddDays(i * 10);
                points[i] = ephemeris.GetPlanetPosition(p.planet, t);
            }

            p.SetOrbitPoints(points, config.showOrbits);
        }
    }

    void UpdatePlanets(DateTime time)
    {
        foreach (var p in planets)
        {
            Vector3 pos = ephemeris.GetPlanetPosition(p.planet, time);
            p.SetPosition(pos);
        }
    }
}