// A menu that will give the user options for selected unit conversions.
#include <stdio.h>
#include <string.h>
#include "Include/macro.h"
#include "Include/functions.h"

int menuChoice;
int ALWAYS = 0;

void startMenu() {
    while (ALWAYS == 0) {
        printf("Welcome to the Engineering Unit Converted.\nPlease select from the options below.\n");
        printf("1. Inches to Meters.\n");
        scanf("%d", &menuChoice);
        if (menuChoice ==1) {
printf("%lf", InchesToMeters());
        } else printf("Sorry");
    }
}