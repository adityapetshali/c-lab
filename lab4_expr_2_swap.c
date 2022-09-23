/*Program to swap two numbers*/
/*Author : Aditya petshali (Date: 17-09-2022)*/
#include<stdio.h>
void swap(int, int);
int main()
{
    int num_1, num_2;
    printf("Please enter first number: ");
    scanf("%d",&num_1);
    printf("Please enter second number: ");
    scanf("%d",&num_2);
    swap(num_1,num_2);

}
void swap (int a, int b)
{
        a = a + b;   
        b = a - b;   
        a = a - b; 
    printf("swapped values , value first= %d value second = %d \n",a,b);

}