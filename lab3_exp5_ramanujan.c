/*Program to print ramanujan number/
/*Author : Aditya petshali (Date: 14-09-2022)*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,num,x,y,count;
    num=5000;
    for(i=1;i<=num;i++)
    {
        count=0;
        for(x=1;x*x*x<i;x++)
        {
            for(y=x;x*x*x+y*y*y<=i;y++)
            {
                if(x*x*x+y*y*y==i)
                {
                  count++;

                }
            }
        }
        if(count==2)
        {
            printf("Ramanujan Numbers are : %d\n",i);
        }
    }
}