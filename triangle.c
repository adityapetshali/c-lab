#include<stdio.h>
int main(){
    int side_1, side_2, side_3;
    printf("please enetr the sides of a triangle :\n");
    scanf("%d %d %d", &side_1, &side_2, &side_3);
    (side_1 + side_2 > side_3) ? printf("is a triangle") : printf("is not a triangle");
    (side_2 + side_3 > side_1) ? printf("is a triangle") : printf("is not a triangle"); 
    (side_3 + side_1 > side_2) ? printf("is a triangle") : printf("is not a tiangle");
    return 0;

}