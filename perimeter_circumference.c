/*Program to find the perimeter and circumference*/
/*Author : Aditya petshali (Date: 06-09-2022)*/
#include<stdio.h>
#define PI 3.14
int main()
{
    float circle_circumference, square_perimeter, cir_rad, sq_side;
    printf("please enter the side of square in cm= ");
    scanf("%f", &sq_side);
    printf("Please enter the radius of circle in cm=");
    scanf("%f", &cir_rad);
    circle_circumference = 2 * PI * cir_rad;
    square_perimeter = 4 * sq_side;
    printf("circumference of circle is =%.2f cm\n", circle_circumference);
    printf("perimeter of square is =%.2f cm", square_perimeter);
    return 0;

}