#include "../Include/macro.h"
#include "../Include/functions.h"
#include <stdio.h>
#include <string.h>

double InchesToMeters(void) {
    double inches;
printf("Please enter the inches.\n");
    scanf("%lf", &inches);
    double meters = inches*0.0254;
    return meters;

}
