#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../Conversions/temperature.h"
#include "startmenu.h"



    void temperatureMenu() {
        bool tempMenuFirst = true;
        int tempmenuchoice;
        bool temprunning = true;

        while (temprunning == true) {
        if (tempMenuFirst == true) {
            printf("Welcome to the Engineering Unit Converter.\nPlease select from the options below.\n");
            printf("1. Fahrenheit to Celsius     2. Celsius to Fahrenheit.\n");
            printf("3. Celsius to Kelvin.        4. Return to Main Menu.");
            tempMenuFirst = false;
        } else {
            printf("Select another temperature conversion, or type '4' to return to main menu.\n");
        }
        scanf("%d", &tempmenuchoice);

        // Fahrenheit to Celsius
        switch (tempmenuchoice) {
            case 1: {
                double fahrenheit;
                double result;
                printf("Please type in your Fahrenheit Value.\n");
                scanf("%lf", &fahrenheit);
                result = fahrenheitToCelsius(fahrenheit);
                printf("%lf Fahrenheit is equal to %lf degrees Celsius.\n", fahrenheit, result);
                break;

            }
            // Celsius to Fahrenheit
            case 2: {
                double celsius;
                double result;
                printf("Please type in your Celsius value.\n");
                scanf("%lf", &celsius);
                result = celsiusToFahrenheit(celsius);
                printf("%lf degrees Celsius is equal to %lf degrees Fahrenheit.\n", celsius, result);
                break;

            }
            // Celsius to Kelvin
            case 3: {
                double celsius;
                double result;
                printf("Please type in your Celsius Value.\n");
                scanf("%lf", &celsius);
                result = celsiusToKelvin(celsius);
                printf("%lf degrees Celsius is equal to %lf degrees Kelvin.\n", celsius, result);
                break;

            }
            case 4: {
                temprunning = false;
                break;
            }
            default: {
                printf("Invalid Input\n");
            }

        }
    }
}
