#include<stdio.h>
int main(){
int hndrd,ffty,tnty,ten,fif,two,one,curr;
printf("enter the number");
scanf("%d",&curr);

int k=100;

switch(k)
{
    case 100:   if(curr>=100){
                    hndrd=curr/100;
                    curr=curr%100;
                    printf("HUndred= %d",hndrd);
                 }
    case 50:   if(curr>=50){
                    ffty=curr/50;
                    curr=curr%50;
                    printf("ffty= %d",ffty);
                 }
    case 10:   if(curr>=10){
                    tnty=curr/10;
                    curr=curr%10;
                    printf("tnty= %d",tnty);
                 }
    case 5:   if(curr>=5){
                    ten=curr/5;
                    curr=curr%5;
                    printf("HUndred= %d",ten);
    }
    
    case 2:   if(curr>=2){
                    two=curr/2;
                    curr=curr%2;
                    printf("HUndred= %d",two);
            }   
    case 1:   if(curr>=1){
                    one=curr/1;
                    curr=curr%1;
                    printf("HUndred= %d",one);
            }   
}

}