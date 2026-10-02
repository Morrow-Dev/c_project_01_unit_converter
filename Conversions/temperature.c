#include "temperature.h"
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// (5/9) * (f-32)
double fahrenheitToCelsius(double fahrenheit) {
    double celsius = ((0.55555555) * (fahrenheit - 32.0));
    return celsius;
}

// 1.8*(c+32)
double celsiusToFahrenheit(double celsius) {
    double fahrenheit = ((1.8*celsius) + 32.0);
    return fahrenheit;
}

// k = c + 273.15
double celsiusToKelvin(double celsius) {
    double kelvin = celsius + 273.15;
    return kelvin;
}