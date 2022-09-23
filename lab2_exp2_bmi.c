/*Program to check the bmi*/
/*Author : Aditya petshali (Date: 09-09-2022)*/
#include<stdio.h>
int main(){
    float weight, height, bmi;
    printf("please enter the weight in (kg) and height in (mtr) \n");
    scanf("%f %f", &weight, &height);
    if (height > 0 && weight > 0)
    {
    bmi= weight / (height *height);
    printf(" your BMI is %.1f and you are ",bmi);
    if ( bmi <= 15)
    printf("starvation");
    else if ( bmi >= 15.1 && bmi <= 17.5)
    printf("Anorexic");
    else if ( bmi >= 17.6 && bmi <= 18.5)
    printf("Underweight");
    else if ( bmi >= 18.6 && bmi <= 24.9)
    printf("Ideal");
    else if ( bmi >= 25 && bmi <= 29.9)
    printf("Overweight");
    else if ( bmi >= 30 && bmi <= 39.9)
    printf("Obese");
    else
    printf("Morbidity Obese");
    }
    else
    printf("please enter a valid height and weight, height and weight can not be zero");

    return 0;
}