/*Program to print fibonacci series*/
/*Author : Aditya petshali (Date: 17-09-2022)*/
#include<stdio.h>
void printFibonacci(int num1, int num2, int num){    
    int num3;    
    if(num>0){    
         num3 = num1 + num2;    
         num1 = num2;    
         num2 = num3;    
         printf("%d ",num3);    
         printFibonacci(num1, num2, num-1);    
    }    
}    
int main(){    
    int num,num1=0,num2=1;    
    printf("Enter the number : ");    
    scanf("%d",&num);    
    printf("Fibonacci Series: ");    
    printf("%d %d ", 0, 1);    
    printFibonacci(num1, num2, num-2);
  return 0;  
 }    