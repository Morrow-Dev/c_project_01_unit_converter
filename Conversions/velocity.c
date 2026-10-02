#include <stdio.h>
#include <string.h>
#include <stdbool.h>



// Miles <> Kilometers per.
double milesPerHourToKilometersPerHour(double mph) {
    double kilometersperhour = mph * 1.609344;
    return kilometersperhour;
}
double kilometersToMilesPerHour(double kmh) {
   double milesperhour = kmh / 1.609344;
    return milesperhour;
}

// Miles <> Meters Per
double milesPerHourToMetersPerSecond(double mph) {
    double meterspersecond = mph * 0.44704;
    return meterspersecond;
}
double metersPerSecondToMilesPerHour(double meterspersecond) {
   double milesperhour = meterspersecond / 0.44704;
    return milesperhour;
}

// Kilometers Per Hour <> Meters Per Second
double kilometersPerHourToMetersPerSecond(double kmh) {
    double meterspersecond = kmh / 3.6;
    return meterspersecond;
}
double metersPerSecondToKilometersPerHour(double meterspersecond) {
   double kilometersperhour = meterspersecond * 3.6;
    return kilometersperhour;
}

// Feet Per Second <> Meters Per Second
double feetPerSecondToMetersPerSecond(double fps) {
    double meterspersecond = fps * 0.3048;
    return meterspersecond;
}
double metersPerSecondToFeetPerSecond(double meterspersecond) {
    double feetpersecond = meterspersecond / 0.3048;
    return feetpersecond;
}

