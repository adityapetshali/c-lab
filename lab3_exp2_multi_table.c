/*Program to print table of a given input */
/*Author : Aditya petshali (Date: 14-09-2022)*/
#include <stdio.h>
int main(){

    int number, multip;
    printf("Enter the number for multiplication table \n ");
    scanf("%d", &number);
    printf("multiplication table for %d is:\n", number);

    for (int i =1;i<=10;i++)
    {
        multip= number* i;
        printf("%d * %d = %d\n", number, i, multip);
    }
    
    return 0;
}