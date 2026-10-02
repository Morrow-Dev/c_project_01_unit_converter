#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "startmenu.h"
#include "../Conversions/length.h"
#include "../Conversions/temperature.h"
#include "../Conversions/velocity.h"
#include "../Conversions/force.h"
#include "../Include/macro.h"

bool firstMenuVisit = true;
int startMenuChoice;
bool startrunning = true;

void startMenu() {
while (startrunning == true) {


        if (firstMenuVisit == true) {
            printf("Welcome to the Unit Conversion Calculator.\n Below you'll see a list of possible conversions.\n");
            printf("1. Length Conversions.  2. Temperature Conversion.  3. Velocity Conversion.\n");
            printf("4. Mass Conversion.     5.Force Conversion.         6. Pressure Conversion.\n");
            printf("7. Energy Conversion.   8. Power Conversion.        9. Torque Conversion.\n");
            scanf("%d", &startMenuChoice);
            firstMenuVisit = false;
        } else if (firstMenuVisit == false) {
            printf("1. Length Conversions.  2. Temperature Conversion.  3. Velocity Conversion.\n");
            printf("4. Mass Conversion.     5.Force Conversion.         6. Pressure Conversion.\n");
            printf("7. Energy Conversion.   8. Power Conversion.        9. Torque Conversion.\n");
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
            case 3: {
                velocityMenu();
            }
            case 4: {
                forceMenu();
            }

            }

        }

    }
