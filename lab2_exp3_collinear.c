/*Program to check given coordinates are collinear or not */
/*Author : Aditya petshali (Date: 09-09-2022)*/
#include<stdio.h>
int main()
{
    float point_x1,point_x2,point_x3,point_y1,point_y2,point_y3, equ1, equ2;
    printf("Please enter three coordinates\n");
    printf("please enter the first coordinate\n");
    scanf("%f %f", &point_x1, &point_y1);
    printf("please enter the second coordinate\n");
    scanf("%f %f",&point_x2, &point_y2);
    printf("please enter the third coordinate\n");
    scanf("%f %f",&point_x3, &point_y3);

    equ1= (point_y2-point_y1)/(point_x2-point_x1);
    equ2= (point_y3-point_y2)/(point_x3-point_x2);

    if(equ1==equ2) {
        printf("Coordinates are collinear");
    }
    else{
        printf("Coordinates are non-collinear");
    }

    return 0;

}