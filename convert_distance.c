/*Program to convert input distance from km to meter, inches, feet and centimeter */
/*Author : Aditya petshali (Date: 06-09-2022)*/
#include<stdio.h>
int main()
{
    float kilometer, centimeter, inches, meter, feet;
    printf("Enter the distance between two cities in KM = ");

    scanf("%f", &kilometer);
    meter = 1000 * kilometer;
    feet = 3280.84 * kilometer;
    inches = 39370.1 *kilometer ;
    centimeter = 100000 * kilometer;

    printf("Distance between two cities in meter = %.2f m\n", meter);
    printf("Distance between teo cities in feet = %.2f f\n", feet);
    printf("Distance between two cities in inches = %.2f in\n", inches);
    printf("Distance between two cities in cenimeter = %.2f cm\n", centimeter);

    return 0;
}
