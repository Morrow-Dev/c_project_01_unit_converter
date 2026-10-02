#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "startmenu.h"
#include "../Conversions/length.h"
#include "../Conversions/temperature.h"
#include "../Include/macro.h"

bool firstMenuVisit = true;
int startMenuChoice;

void startMenu() {

        if (firstMenuVisit == true) {
            printf("Welcome to the Unit Conversion Calculator.\n Below you'll see a list of possible conversions.\n");
            printf("1. Length Conversions.\n2. Temperature Conversion.\n");
            scanf("%d", &startMenuChoice);
            firstMenuVisit = false;
        } else if (firstMenuVisit == false) {
            printf("1. Length Conversions.\n2. Temperature Conversion.\n");
            scanf("%d", &startMenuChoice);
        }

    switch (startMenuChoice) {
        case 1: {
            lengthMenu();
            break;
        }
        case 2: {
            temperatureMenu();
            break;
        }
        default: {
            printf("woo");
        }

    }

}