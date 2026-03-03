using System;
using UnityEngine;

public class PlanetSystemController
{
    TimeModel timeModel;
    IPlanetEphemerisService ephemeris;
    PlanetView[] planets;

    public PlanetSystemController(TimeModel timeModel, IPlanetEphemerisService ephemeris, PlanetView[] planets)
    {
        this.timeModel = timeModel;
        this.ephemeris = ephemeris;
        this.planets = planets;

        // Subscribe to the time event
        this.timeModel.OnTimeChanged += UpdatePlanets;
    }

    void UpdatePlanets(DateTime time)
    {
        Debug.Log($"[TIME] Updating planets to {time}");

        foreach (var p in planets)
        {
            Vector3 pos = ephemeris.GetPlanetPosition(p.planet, time);
            p.SetPosition(pos);
        }
    }
}