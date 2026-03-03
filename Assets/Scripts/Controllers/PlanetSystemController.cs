using System;
using UnityEngine;

public class PlanetSystemController
{
    TimeModel timeModel;
    IPlanetEphemerisService ephemeris;
    PlanetView[] planets;
    SolarSystemConfig config; // On ajoute la config pour lire le booléen "showOrbits"

    public PlanetSystemController(TimeModel timeModel, IPlanetEphemerisService ephemeris, PlanetView[] planets, SolarSystemConfig config)
    {
        this.timeModel = timeModel;
        this.ephemeris = ephemeris;
        this.planets = planets;
        this.config = config;

        // On écoute le temps pour bouger les planètes
        this.timeModel.OnTimeChanged += UpdatePlanets;

        // NOUVEAU : On dessine les orbites une seule fois au démarrage
        InitializeOrbits();
    }

    void InitializeOrbits()
    {
        // Neptune met ~60 000 jours à faire un tour. 
        // Avec des sauts de 10 jours, il nous faut 6000 points pour fermer son cercle.
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

            // On envoie le tableau pré-calculé à la vue, et on regarde la config pour l'afficher ou non
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