/*To add two number with user input program*/
/*Author : Aditya petshali (Date: 06-09-2022)*/
#include <stdio.h>
int main()
{
   int num1, num2, sum;
   
   printf("Please enter two numbers for addition\n");
   printf("Enter the first number : \n");
   scanf("%d", &num1);
   printf("Enter the second number : \n");
   scanf("%d", &num2);
   sum = num1+num2;
   printf ("sum of two numbers = %d", sum);

   return 0;
}