using System;
using UnityEngine;

public class PlanetEphemerisService : IPlanetEphemerisService
{
    private SolarSystemConfig _config;

    public PlanetEphemerisService(SolarSystemConfig config)
    {
        _config = config;
    }

    public Vector3 GetPlanetPosition(PlanetData.Planet planet, DateTime date)
    {

        Vector3 rawPos = PlanetData.GetPlanetPosition(planet, date);
        return rawPos * _config.distanceScale; 
    }
}