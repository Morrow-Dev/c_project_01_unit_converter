#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../Conversions/velocity.h"


void velocityMenu() {
    bool velocitymenufirst = true;
    bool velocitymenurunning = true;
    int velocitymenuchoice;

    while (velocitymenurunning == true){

        if (velocitymenufirst == true) {
            velocitymenufirst = false;
            printf("Welcome to the Engineering Unit Length Converter.\nPlease select from the options below.\n");
            printf("1. Miles Per Hour to Kilometers Per Hour.     2. Kilometers Per Hour to Miles Per Hour.\n");
            printf("3. Miles Per Hour to Meters Per Second.       4. Meters Per Second to Miles Per Hour.\n");
            printf("5. Kilometers Per Hour to Meters Per Second.  6. Meters Per Second to Kilometers Per Hour.\n");
            printf("7. Feet Per Second to Meters Per Second.      8. Meters Per Second to Feet Per Second.\n");
            printf("9. Type '9' to return to main menu.");
        } else {
            printf("Complete another conversion or return to main menu.\n");
            printf("1. Miles Per Hour to Kilometers Per Hour.     2. Kilometers Per Hour to Miles Per Hour.\n");
            printf("3. Miles Per Hour to Meters Per Second.       4. Meters Per Second to Miles Per Hour.\n");
            printf("5. Kilometers Per Hour to Meters Per Second.  6. Meters Per Second to Kilometers Per Hour.\n");
            printf("7. Feet Per Second to Meters Per Second.      8. Meters Per Second to Feet Per Second.\n");
            printf("9. Type '9' to return to main menu.");
        }
        scanf("%d", &velocitymenuchoice);

        switch (velocitymenuchoice) {
            case 1: {
                double milesperhour;
                double result;
                printf("Please enter your Miles Per Hour.\n");
                scanf("%lf", &milesperhour);
                result = milesPerHourToKilometersPerHour(milesperhour);
                printf("%lf Miles Per Hour is equal to %lf Kilometers Per Hour.\n", milesperhour, result);
                break;
            }
            // Kilometers Per Hour to Miles Per Hour.
            case 2: {
                double kilometersperhour;
                double result;
                printf("Please enter your Kilometers Per Hour.\n");
                scanf("%lf", &kilometersperhour);
                result = kilometersToMilesPerHour(kilometersperhour);
                printf("%lf Kilometers Per Hour is equal to %lf Miles Per Hour.\n", kilometersperhour, result);
                break;

            }
            // Miles Per Hour to Meters Per Second.
            case 3: {
                double milesperhour;
                double result;
                printf("Please enter your Miles Per Hour.\n");
                scanf("%lf", &milesperhour);
                result = milesPerHourToMetersPerSecond(milesperhour);
                printf("%lf Miles Per Hour is equal to %lf Meters Per Second.\n", milesperhour, result);
                break;

            }
            // Meters Per Second to Miles Per Hour.
            case 4: {
                double meterspersecond;
                double result;
                printf("Please enter your Meters Per Second.\n");
                scanf("%lf", &meterspersecond);
                result = metersPerSecondToMilesPerHour(meterspersecond);
                printf("%lf Meters Per Second is equal to %lf Miles Per Hour.\n", meterspersecond, result);
                break;

            }
            // Kilometers Per Hour to Meters Per Second.
            case 5: {
                double kilometersperhour;
                double result;
                printf("Please enter your Kilometers Per Hour.\n");
                scanf("%lf", &kilometersperhour);
                result = kilometersPerHourToMetersPerSecond(kilometersperhour);
                printf("%f Kilometers Per Hour is equal to %lf Meters Per Second.\n", kilometersperhour, result);
                break;
            }
            // Meters Per Second to Kilometers Per Hour.
            case 6: {
                double meterspersecond;
                double result;
                printf("Please enter your Meters Per Second.\n");
                scanf("%lf", &meterspersecond);
                result = metersPerSecondToKilometersPerHour(meterspersecond);
                printf("%lf Meters Per Second is equal to %lf Kilometers Per Hour.\n", meterspersecond, result);
                break;
            }
            // Feet Per Second to Meters Per Second.
            case 7: {
                double feetpersecond;
                double result;
                printf("Please enter your Feet Per Second.\n");
                scanf("lf", &feetpersecond);
                result = feetPerSecondToMetersPerSecond(feetpersecond);
                printf("%lf Feet Per Second is equal to %lf Meters Per Second.\n", feetpersecond, result);
                break;
            }
            //Meters Per Second to Feet Per Second.
            case 8: {
                double meterspersecond;
                double result;
                printf("Please enter your meters per second.\n");
                scanf("%lf", &meterspersecond);
                result = metersPerSecondToFeetPerSecond(meterspersecond);
                printf("%lf Meters Per Second is equal to %lf Feet Per Second.\n", meterspersecond, result);
                break;
            }
            case 9: {
                velocitymenurunning = false;
                break;
            }
            default: {
                printf("Invalid Option.\n");
            }
        }

    }
}