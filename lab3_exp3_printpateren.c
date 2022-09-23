/*Program to print a given pattern part 1 */
/*Author : Aditya petshali (Date: 14-09-2022)*/
#include <stdio.h>
int main()
{  
    int blk_space, no_row, m;  
    printf("Enter the number of rows\n");  
    scanf("%d",&no_row); 
     m=1;
    for(int i=1;i<=no_row;i++)  
    {  
         for(blk_space=1;blk_space<=no_row-i;blk_space++)
        printf("  ");
        for(int j=1;j<=i;j++)  
        {  
            printf(" %d ", m); 
            m++;
        }  

        printf("\n");  
    }  
    for(int i=no_row-1;i>=no_row;i--)  
    {  
         for(blk_space=no_row;blk_space>=i;blk_space--)
        printf("  ");
        for(int j=i;j<=2*i-1 ;j++)  
        {  
            printf(" %d ", m); 
            m++;
        }  

        printf("\n");  
    }  
    
    return 0;  
}  