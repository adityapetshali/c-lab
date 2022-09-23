/*Program to find the population of a city in last decade */
/*Author : Aditya petshali (Date: 14-09-2022)*/
#include<stdio.h>
int main()
{
    int population=100000;
    printf("population index of last decade\n");
    for (int i=1; i<=10; i++)
    {
        population = population-population* 0.1;
        
        printf(" years : %d\n",population);
    }

}