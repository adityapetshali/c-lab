/*Program to compare perimeter of rectangle  */
/*Author : Aditya petshali (Date: 09-09-2022)*/
#include<stdio.h>
int main(){
    int length_1, length_2, length_3, width_1, width_2, width_3, permtr_1, permtr_2, permtr_3;
    
    printf("please enter the length and width of rectangles\n");
    printf("Enter length and width of first rectangle:\n");
    scanf("%d %d",&length_1,&width_1);
    printf("Enter length and width of second rectangle:\n");
    scanf("%d %d",&length_2,&width_2);
    printf("Enter length and width of third rectangle:\n");
    scanf("%d %d",&length_3,&width_3);

    permtr_1= 2*(length_1+width_1);
    permtr_2= 2*(length_2+width_2);
    permtr_3= 2*(length_3+width_3);


    permtr_1 > permtr_2 ? permtr_1 > permtr_3?printf("First rectangle has largest perimeter") : printf("Third rectangle has largest perimeter"): permtr_2 >permtr_3 ? printf("Second rectangle has largest perimeter"):printf("Third rectangle has largest perimeter");

    return 0;
    

}