// A menu that will give the user options for selected unit conversions.
#include <stdio.h>
#include <string.h>
#include "../Include/macro.h"
#include "../Include/functions.h"
#include "../Conversions/length.h"

int menuChoice;
int ALWAYS = 0;

void lengthMenu() {
    while (ALWAYS == 0) {
        printf("Welcome to the Engineering Unit Converter.\nPlease select from the options below.\n");
        printf("1. Inches to Meters.\n");
        printf("2. Meters to inches.\n");
        scanf("%d", &menuChoice);


switch (menuChoice) {

    case 1: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 2: {
        printf("You have chosen Meters.");
        break;
    }

    default: {
        printf("Invalid Choice.");
    }
}
    }
}