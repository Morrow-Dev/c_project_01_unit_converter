#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "../Conversions/force.h"

void forceMenu(void) {
    int forceMenuChoice;
    bool forceMenuFirst = true;
    bool forceMenuRunning = true;

    while (forceMenuRunning == true) {
        if (forceMenuFirst == true) {
            forceMenuFirst = false;
            printf("Welcome to the Force Menu. Please select from the conversion list below.\n");
            printf("1. Pound Force to Newtons.      2. Newtons to Pound Force.\n");
            printf("3. Kilonewtons to Newtons.      4. Newtons to Kilonewtons.\n");
            printf("5. Pound Force to Kilonewtons.  6. Kilonewtons to Pound Force.\n");
            printf("Or type '0' to return to the main menu select screen.\n");
        } else {
            printf("1. Pound Force to Newtons.      2. Newtons to Pound Force.\n");
            printf("3. Kilonewtons to Newtons.      4. Newtons to Kilonewtons.\n");
            printf("5. Pound Force to Kilonewtons.  6. Kilonewtons to Pound Force.\n");
            printf("Or type '0' to return to the main menu select screen.\n");
        }
        scanf("%d", &forceMenuChoice);

        switch (forceMenuChoice) {
            // Pound Force to Newtons.
            case 1: {
                double poundforce;
                double result;
                printf("Enter your Pound Force.\n");
                scanf("%lf", &poundforce);
                result = poundforce * 4.4482216153;
                printf("%lf Pound Force is equal to %lf Newtons.\n", poundforce, result);
                break;
            }
            // Newtons to Pound Force.
            case 2: {
                double newtons;
                double result;
                printf("Enter your Newtons.\n");
                scanf("%lf", &newtons);
                result = newtons / 4.4482216153;
                printf("%lf Newtons is equal to %lf Pound Force.\n", newtons, result);
                break;
            }
            // Kilonewtons to Newtons.
            case 3: {
                double kilonewtons;
                double result;
                printf("Enter your Kilonewtons.\n");
                scanf("%lf", &kilonewtons);
                result = kilonewtons * 1000.0;
                printf("%lf Kilonewtons is equal to %lf Newtons.\n", kilonewtons, result);
                break;
            }
            // Newtons to Kilonewtons.
            case 4: {
                double newtons;
                double result;
                printf("Enter your Newtons.\n");
                scanf("%lf", &newtons);
                result = newtons / 1000.0;
                printf("%lf Newtons is equal to %lf Kilonewtons.\n", newtons, result);
                break;
            }
            // Pound Force to Kilonewtons.
            case 5: {
                double poundforce;
                double result;
                printf("Enter your Pound Force.\n");
                scanf("%lf", &poundforce);
                result = (poundforce * 4.4482216153) / 1000.0;
                printf("%lf Pound Force is equal to %lf Kilonewtons.\n", poundforce, result);
                break;
            }
            // kilonewtons to Pound Force.
            case 6: {
                double kilonewtons;
                double result;
                printf("Enter your Kilonewtons.\n");
                scanf("%lf", &kilonewtons);
                result = (kilonewtons * 1000.0) / 4.4482216153;
                printf("%lf Kilonewtons is equal to %lf Pound Force.\n", kilonewtons, result);
                break;
            }
            // Return to menu.
            case 0: {
                forceMenuRunning = false;
                break;
            }
            default: {
                printf("Invalid Command");
                break;
            }

        }
        }
    }

