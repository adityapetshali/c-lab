/*to find the minimum number of currency denomonation program*/
/*Author : Aditya petshali (Date: 07-09-2022)*/
#include<stdio.h>

int main(){
    int n;
    int hundrd=0,fift=0,twnty=0,ten=0,five=0,two=0,one=0;
   
    printf("please enter a valid currency denomonation = \n");
    scanf("%d",&n);
    int k=n;

    while(k!=0){
        if(k>=100){
            hundrd=k/100;
            k=k%100;
        }

        if(k>=50){
            fift=k/50;
            k=k%50;
        }

         if(k>=20){
            twnty=k/20;
            k=k%20;
        }
         if(k>=10){
            ten=k/10;
            k=k%10;
        }
         if(k>=5){
            five=k/5;
            k=k%5;
        }
         if(k>=2){
            two=k/2;
            k=k%2;
        }
         if(k>=1){
            one=k/1;
            k=k%1;
        }
    }
    printf("100 rs notes= %d\n 50 rs note =%d \n 20 rs note =%d \n 10 rs note =%d \n 5 rs note =%d \n 2 rs note =%d \n 1 rs note =%d \n", hundrd, fift, twnty, ten, five, two, one);
}