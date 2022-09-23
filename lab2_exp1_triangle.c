/*Program to check given triangle is a valid triangle or not */
/*Author : Aditya petshali (Date: 09-09-2022)*/
#include<stdio.h>
int main(){
   int side1, side2, side3;
   printf("Enter sides of triangle:\n");
   scanf("%d%d%d",&side1,&side2,&side3);

     if((side1 + side2 > side3)&&(side2 + side3 > side1)
            &&(side3 + side1 > side2)) {  
        printf("It is a Valid Triangle\n"); 
          if(side1 == side2 && side2 == side3)
            printf("The Given Triangle is equilateral\n");
          else if(side1 == side2 || side2 == side3 || side3 == side1)
            printf("The given Triangle is isosceles\n");
          else
            printf("The given Triangle is scalene\n"); 
    } else {  
        printf("It is an invalid Triangle");  
    } 

 
   return 0;
}