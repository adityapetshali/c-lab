/*Program to find prime factorial*/
/*Author : Aditya petshali (Date: 17-09-2022)*/
#include<stdio.h>
void prime_fac(int);
int main()
{
int num;
    printf("Enter a number for factorial :\n ");
    scanf("%d",&num);
    prime_fac(num);
}
int prime_no(int num1){
        int check=1;
        if(num1 != 2 && num1 %2 == 0)
            return check=0;
        if(num1==2 || num1==3)
            return check=1;
        for(int i=2;i<num1/2;i++){
                 if(num1 % i ==0)
                     check=0;
}
return check;
}
void prime_fac(int num){
    int i=2;
    printf("prime factorial of %d are:",num);
    while(num!=1){
        if(num %i ==0){
            if(prime_no(i)){
            printf(" %d ,",i);
            num=num/i;
            } 
        }
        else{
                i++;
        }
    }
}

