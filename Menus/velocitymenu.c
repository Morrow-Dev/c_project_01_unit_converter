#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../Conversions/velocity.h"

velocitymenufirst = true;
velocitymenurunning = true;

void velocityMenu() {
    if (velocitymenufirst == true) {
        velocitymenufirst == false;
        printf("Welcome to the Engineering Unit Length Converter.\nPlease select from the options below.\n");
        printf("1. Miles Per Hour to Kilometers Per Hour.     2. Kilometers Per Hour to Miles Per Hour.\n");
        printf("3. Miles Per Hour to Meters Per Second.       4. Meters Per Second to Miles Per Hour.\n");
        printf("5. Kilometers Per Hour to Meters Per Second.  6. Meters Per Second to Kilometers Per Hour.\n");
        printf("7. Feet Per Second to Meters Per Second.      8. Meters Per Second to Feet Per Second.\n");
    } else {
        printf("1. Miles Per Hour to Kilometers Per Hour.     2. Kilometers Per Hour to Miles Per Hour.\n");
        printf("3. Miles Per Hour to Meters Per Second.       4. Meters Per Second to Miles Per Hour.\n");
        printf("5. Kilometers Per Hour to Meters Per Second.  6. Meters Per Second to Kilometers Per Hour.\n");
        printf("7. Feet Per Second to Meters Per Second.      8. Meters Per Second to Feet Per Second.\n");
    }


}