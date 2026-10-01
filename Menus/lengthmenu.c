// A menu that will give the user options for selected unit conversions.
#include <stdio.h>
#include <string.h>
#include "../Include/macro.h"
#include "../Include/functions.h"
#include "../Conversions/length.h"

int menuChoice;

void lengthMenu() {
    while (ALWAYS == 0) {
        printf("Welcome to the Engineering Unit Converter.\nPlease select from the options below.\n");
        printf("1. Millimeters to Centimeters.\n");
        printf("2. Centimeters to Millimeters.\n");

        printf("3. Millimeters to Meters.\n");
        printf("4. Meters to Millimeters.\n");

        printf("5. Centimeters to Meters.\n");
        printf("6. Meters to Centimeters.\n");

        printf("7. Meters to Kilometers.\n");
        printf("8. Kilometers to Meters.\n");

        printf("9. Inches to Feet.\n");
        printf("10. Feet to Inches.\n");

        printf("11. Yards to Feet.\n");
        printf("12. Feet to Yards.\n");

        printf("13. Yards to Miles.\n");
        printf("14. Miles to Yards.\n");

        printf("15. Feet to Miles.\n");
        printf("16. Miles to Feet.\n");

        printf("17. Inches to Millimeters.\n");
        printf("18. Millimeters to Inches.\n");

        printf("19. Inches to Centimeters.\n");
        printf("20. Centimeters to Feet.\n");

        printf("21. Inches to Meters.\n");
        printf("22. Meters to Inches.\n");

        printf("23. Feet to Meters.\n");
        printf("24. Meters to Feet.\n");

        printf("25. Yards to Meters.\n");
        printf("26. Meters to Yards.\n");

        printf("27. Miles to Kilometers.\n");
        printf("28. Kilometers to Meters.\n");



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
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 3: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 4: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 5: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 6: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 7: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 8: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 9: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 10: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 11: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 12: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 13: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 14: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 15: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 16: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 17: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 18: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 19: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 20: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 21: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 22: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 23: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 24: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 25: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 26: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 27: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 28: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }
    case 29: {
        double inches;
        double result;
        printf("Enter Inches.\n");
        scanf("%lf", &inches);
        result = inchesToMeters(inches);
        printf("%f\n", result);
        break;
    }


    default: {
        printf("Invalid Choice.");
    }
}
    }
}