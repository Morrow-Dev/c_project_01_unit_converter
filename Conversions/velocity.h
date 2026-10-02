//
// Created by morro on 10/2/2026.
//

#ifndef C_PROJECT_01_UNIT_CONVERTER_VELOCITY_H
#define C_PROJECT_01_UNIT_CONVERTER_VELOCITY_H

void velocityMenu(void);

// Miles <> Kilometers per.
double milesPerHourToKilometersPerHour(double mph);
double kilometersToMilesPerHour(double kmh);

// Miles <> Meters Per
double milesPerHourToMetersPerSecond(double mph);
double metersPerSecondToMilesPerHour(double meterspersecond);

// Kilometers Per Hour <> Meters Per Second
double kilometersPerHourToMetersPerSecond(double kmh);
double metersPerSecondToKilometersPerHour(double meterspersecond);

// Feet Per Second <> Meters Per Second
double feetPerSecondToMetersPerSecond(double fps);
double metersPerSecondToFeetPerSecond(double meterspersecond);


#endif //C_PROJECT_01_UNIT_CONVERTER_VELOCITY_H

