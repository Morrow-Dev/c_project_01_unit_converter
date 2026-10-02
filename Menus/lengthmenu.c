// A menu that will give the user options for selected unit conversions.
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "../Include/macro.h"
#include "../Include/functions.h"
#include "../Conversions/length.h"

int menuChoice;
bool lengthMenuFirst = true;
bool lengthrunning = true;

void lengthMenu() {
    while (lengthrunning == true) {
        if (lengthMenuFirst == true) {
            printf("Welcome to the Engineering Unit Length Converter.\nPlease select from the options below.\n");
            printf("1. Millimeters to Centimeters.     2. Centimeters to Millimeters.\n");

            printf("3. Millimeters to Meters.          4. Meters to Millimeters.\n");

            printf("5. Centimeters to Meters.          6. Meters to Centimeters.\n");

            printf("7. Meters to Kilometers.           8. Kilometers to Meters.\n");

            printf("9. Inches to Feet.                 10. Feet to Inches.\n");

            printf("11. Yards to Feet.                 12. Feet to Yards.\n");

            printf("13. Yards to Miles.                14. Miles to Yards.\n");

            printf("15. Feet to Miles.                 16. Miles to Feet.\n");

            printf("17. Inches to Millimeters.         18. Millimeters to Inches.\n");

            printf("19. Inches to Centimeters.         20. Centimeters to Feet.\n");

            printf("21. Inches to Meters.              22. Meters to Inches.\n");

            printf("23. Feet to Meters.                24. Meters to Feet.\n");

            printf("25. Yards to Meters.               26. Meters to Yards.\n");

            printf("27. Miles to Kilometers.           28. Kilometers to Meters.\n");
            lengthMenuFirst = false;
        } else {

            printf("Select another conversion.\nOr type '0' to return to the main menu.");
        }



        scanf("%d", &menuChoice);


        switch (menuChoice) {
            // Millimeters to Centimeters
            case 0: {
                lengthrunning = false;
                break;
            }
            case 1: {
                double millimeters;
                double result;
                printf("Enters Millimeters.\n");
                scanf("%lf", &millimeters);
                result = millimetersToCentimeters(millimeters);
                printf("%f\n", result);
                break;
            }
            // Centimeters to Millimeters
            case 2: {
                double centimeters;
                double result;
                printf("2. Enter Centimeters.\n");
                scanf("%lf", &centimeters);
                result = centimetersToMillimeters(centimeters);
                printf("%f\n", result);
                break;
            }
            // Millimeters to Meters
            case 3: {
                double millimeters;
                double result;
                printf("Enter Millimeters.\n");
                scanf("%lf", &millimeters);
                result = millimetersToMeters(millimeters);
                printf("%f\n", result);
                break;
            }
            // Meters to Millimeters
            case 4: {
                double meters;
                double result;
                printf("Enter Meters.\n");
                scanf("%lf", &meters);
                result = metersToMillimeters(meters);
                printf("%f\n", result);
                break;
            }
            // Centimeters to Meters
            case 5: {
                double centimeters;
                double result;
                printf("Enter Centimeters.\n");
                scanf("%lf", &centimeters);
                result = centimetersToMeters(centimeters);
                printf("%f\n", result);
                break;
            }
            // Meters to Centimeters
            case 6: {
                double meters;
                double result;
                printf("Enter Meters.\n");
                scanf("%lf", &meters);
                result = metersToCentimeters(meters);
                printf("%f\n", result);
                break;
            }
            // Meters to Kilometers.
            case 7: {
                double meters;
                double result;
                printf("Enter Meters.\n");
                scanf("%lf", &meters);
                result = metersToKilometers(meters);
                printf("%f\n", result);
                break;
            }
            // Kilometers to Meters
            case 8: {
                double kilometers;
                double result;
                printf("Enter Kilometers.\n");
                scanf("%lf", &kilometers);
                result = kilometersToMeters(kilometers);
                printf("%f\n", result);
                break;
            }
            // Inches to Feet
            case 9: {
                double inches;
                double result;
                printf("Enter Inches.\n");
                scanf("%lf", &inches);
                result = inchesToFeet(inches);
                printf("%f\n", result);
                break;
            }
            // Feet to Inches
            case 10: {
                double feet;
                double result;
                printf("Enter Feet.\n");
                scanf("%lf", &feet);
                result = feetToInches(feet);
                printf("%f\n", result);
                break;
            }
            // Yards to Feet.
            case 11: {
                double yards;
                double result;
                printf("Enter Yards.\n");
                scanf("%lf", &yards);
                result = yardsToFeet(yards);
                printf("%f\n", result);
                break;
            }
            // Feet To Yards
            case 12: {
                double feet;
                double result;
                printf("Enter Feet.\n");
                scanf("%lf", &feet);
                result = inchesToMeters(feet);
                printf("%f\n", result);
                break;
            }
            // Yards to Miles
            case 13: {
                double yards;
                double result;
                printf("Enter Yards.\n");
                scanf("%lf", &yards);
                result = yardsToMiles(yards);
                printf("%f\n", result);
                break;
            }
            // Miles to Yards
            case 14: {
                double miles;
                double result;
                printf("Enter Miles.\n");
                scanf("%lf", &miles);
                result = milesToYards(miles);
                printf("%f\n", result);
                break;
            }
            // Feet to Miles
            case 15: {
                double feet;
                double result;
                printf("Enter Feet.\n");
                scanf("%lf", &feet);
                result = feetToMiles(feet);
                printf("%f\n", result);
                break;
            }
            // Miles to Feet
            case 16: {
                double miles;
                double result;
                printf("Enter Miles.\n");
                scanf("%lf", &miles);
                result = milesToFeet(miles);
                printf("%f\n", result);
                break;
            }
            // Inches to Millimeters
            case 17: {
                double inches;
                double result;
                printf("Enter Inches.\n");
                scanf("%lf", &inches);
                result = inchesToMillimeters(inches);
                printf("%f\n", result);
                break;
            }
            // Millimeters to Inches
            case 18: {
                double millimeters;
                double result;
                printf("Enter Millimeters.\n");
                scanf("%lf", &millimeters);
                result = millimetersToInches(millimeters);
                printf("%f\n", result);
                break;
            }
            // Inches to Centimeters
            case 19: {
                double inches;
                double result;
                printf("Enter Inches.\n");
                scanf("%lf", &inches);
                result = inchesToCentimeters(inches);
                printf("%f\n", result);
                break;
            }
            // Centimeters to feet.
            case 20: {
                double centimeters;
                double result;
                printf("Enter Centimeters.\n");
                scanf("%lf", &centimeters);
                result = centimetersToFeet(centimeters);
                printf("%f\n", result);
                break;
            }
            // Inches to Meters
            case 21: {
                double inches;
                double result;
                printf("Enter Inches.\n");
                scanf("%lf", &inches);
                result = inchesToMeters(inches);
                printf("%f\n", result);
                break;
            }
            // Meters to Inches
            case 22: {
                double meters;
                double result;
                printf("Enter Meters.\n");
                scanf("%lf", &meters);
                result = metersToInches(meters);
                printf("%f\n", result);
                break;
            }
            // Feet To Meters
            case 23: {
                double feet;
                double result;
                printf("Enter Feet.\n");
                scanf("%lf", &feet);
                result = feetToMeters(feet);
                printf("%f\n", result);
                break;
            }
            // Meters to Feet
            case 24: {
                double meters;
                double result;
                printf("Enter Meters.\n");
                scanf("%lf", &meters);
                result = inchesToMeters(meters);
                printf("%f\n", result);
                break;
            }
            // Yards to Meters
            case 25: {
                double yards;
                double result;
                printf("Enter Yards.\n");
                scanf("%lf", &yards);
                result = yardsToMeters(yards);
                printf("%f\n", result);
                break;
            }
            // Meters to Yards
            case 26: {
                double meters;
                double result;
                printf("Enter Meters.\n");
                scanf("%lf", &meters);
                result = metersToYards(meters);
                printf("%f\n", result);
                break;
            }
            // Miles to Kilometers
            case 27: {
                double miles;
                double result;
                printf("Enter Miles.\n");
                scanf("%lf", &miles);
                result = milesToKilometers(miles);
                printf("%f\n", result);
                break;
            }
            // Kilometers to Meters
            case 28: {
                double kilometers;
                double result;
                printf("Enter Kilometers.\n");
                scanf("%lf", &kilometers);
                result = kilometersToMeters(kilometers);
                printf("%f\n", result);
                break;
            }

            default: {
                printf("Invalid Choice.");
            }
        }
    }

}