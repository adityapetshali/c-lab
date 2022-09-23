/*Program to find out the number are positive negative or zero in a array */
/*Author : Aditya petshali (Date: 14-09-2022)*/
#include<stdio.h>
int main(){
    int num, positive_num,negative_num,zero;
    printf("Enter the size of array\n");
    scanf("%d" , &num);                     //Taken the size of array from the user itself
    int array[num];
    int len_arr = num+1;                   // find the length of array
    
printf ("The elements of array is\n");
   
    for(int i=0;i<len_arr;i++)
    {
        scanf("%d", &array[i]);
    }

for (int i = 0; i < len_arr; i++)
{

if(array[i]>0)
        {
            positive_num++;
        }
        else if(array[i]<0)
        {
            negative_num++;
        }
        else if(array[i]==0)
        {
            zero++;
        }
        else
        {
            printf("not a valid input");
            break;
        }

}

    printf("Count of positive numbers: %d\n", positive_num);
    printf("Count of negative numbers: %d\n", negative_num);
    printf("Count of zero numbers: %d\n", zero);
return 0;

}


