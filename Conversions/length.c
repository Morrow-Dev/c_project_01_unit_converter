#include "../Include/macro.h"
#include "../Include/functions.h"
#include <stdio.h>
#include <string.h>


// Millimeters <> Centimeters
double millimetersToCentimeters(double millimeters) {
    double centimeters = millimeters / 10.0;
    return centimeters;
}

double centimetersToMillimeters(double centimeters) {
    double millimeters = centimeters * 10.0;
    return millimeters;
}

// Millimeters <> Meters
double millimetersToMeters(double millimeters) {
    double meters = millimeters / 1000.0;
    return meters;
}

double metersToMillimeters(double meters) {
    double millimeters = meters * 1000.0;
    return millimeters;
}

// Centimeters <> Meters
double centimetersToMeters(double centimeters) {
    double meters = centimeters / 100.0;
    return meters;
}
double metersToCentimeters(double meters) {
    double centimeters = meters * 100.0;
    return centimeters;
}

// Meters <> Kilometers
double metersToKilometers(double meters) {
    double kilometers = meters / 1000.0;
    return kilometers;
}

double kilometersToMeters(double kilometers) {
    double meters = kilometers * 1000.0;
    return meters;
}

// Inches <> Feet
double inchesToFeet(double inches) {
    double feet = inches / 12.0;
    return feet;
}

double feetToInches(double feet) {
    double inches = feet * 12.0;
    return inches;
}

// Feet <> Yards
double feetToYards(double feet) {
    double yards = feet / 3.0;
    return yards;
}
double yardsToFeet(double yards) {
    double feet = yards * 3.0;
    return feet;
}

// Yards <> Miles
double yardsToMiles(double yards) {
    double miles = yards / 1760.0;
    return miles;
}
double milesToYards(double miles) {
    double yards = miles * 1760.0;
    return yards;
}

// Feet <> Miles
double feetToMiles(double feet) {
    double miles = feet / 5280.0;
    return miles;
}
double milesToFeet(double miles) {
    double feet = miles * 5280.0;
    return feet;
}

// Inches <> Millimeters
double inchesToMillimeters(double inches) {
    double millimeters = inches * 25.4;
    return millimeters;
}
double millimetersToInches(double millimeters) {
    double inches = millimeters / 25.4;
    return inches;
}

// Inches <> Centimeters
double inchesToCentimeters(double inches) {
    double centimeters = inches * 2.54;
    return centimeters;
}
double centimetersToInches(double centimeters) {
    double inches = centimeters / 2.54;
    return inches;
}

// Inches <> Meters
double inchesToMeters(double inches) {
    double meters = inches*0.0254;
    return meters;
}
double metersToInches(double meters) {
    double inches = meters / 0.0254;
    return inches;
}

// Feet <> Meters
double feetToMeters(double feet) {
    double meters = feet * 0.3048;
    return meters;
}
double metersToFeet(double meters) {
    double feet = meters / 0.3048;
    return feet;
}

// Yards <> Meters
double yardsToMeters(double yards) {
   double meters = yards * 0.9144;
    return meters;
}
double metersToYards(double meters) {
    double yards = meters / 0.9144;
    return yards;
}

// Miles <> Kilometers
double milesToKilometers(double miles) {
    double kilometers = miles * 1.609344;
    return kilometers;
}
double kilometersToMiles(double kilometers) {
    double miles = kilometers / 1.609344;
    return miles;
}

double centimetersToFeet(double centimeters) {
    double feet = centimeters / 30.48;
    return feet;
}