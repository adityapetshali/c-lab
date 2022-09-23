/*Add a five digit number using mod program*/
/*Author : Aditya petshali (Date: 07-09-2022)*/
#include<stdio.h>
int main()
{
    int num, sum =0;
    printf("please enter a five digit number \n");
    scanf("%d", &num);

    while (num != 0)
    {
        sum += num % 10;
        num = num/10;
    }
    printf("Sum of the number is = %d ", sum );

    return 0;
}