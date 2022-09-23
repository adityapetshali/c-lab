/*Program to print a given patern part 2 */
/*Author : Aditya petshali (Date: 14-09-2022)*/
#include <stdio.h>

void main()
{
    int no_row,c=1,blk_space,i,j;
    printf("Input number of rows: \n");
    scanf("%d",&no_row);
    for(i=0;i<no_row;i++)
    {
        for(blk_space=1;blk_space<=no_row-i;blk_space++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");

    }
    
    
}