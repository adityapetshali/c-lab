/*Program for type conversion*/
/*Author : Aditya petshali (Date: 17-09-2022)*/
#include<stdio.h>
#include<stdlib.h>
void octal(int);
void binary(int);
int main(){
    int num,value,statment;
    while(statment=1){
          
        printf("Please choose the conversion:\n");
        printf("Press 1 to convert to Binary\n");
        printf("Press 2 to convert to Octal\n");
        printf("press 0 to Exit\n");
        printf("\nYour Choice: ");
        scanf("%d",&value);
        
        switch(value){
            case 0: statment=0;
                    exit(0);
                    
            case 1: printf("Enter value: ");
                    scanf("%d",&num);
                    binary(num);
                    break;
                    
            case 2: printf("Enter value: ");
                    scanf("%d",&num);
                    octal(num);
                    break;
                
            default: printf("Invalid input\n");
            
        }
    }
    
}
void binary(int num){
    printf("your decimal to binary conversion is : ");
    while(num!=0){
        printf("%d",num%2);
        num=num/2;
    }
    printf("0");
    printf("\n");

}

void octal(int num){
    int arr[10],n=0,i=0;
    printf("your decimal to octal conversion is : ");
    while(num!=0){
        arr[i]=num%8;
        i++; n++;
        num/=8;
    }
    for(int i=n-1; i>=0; i--)
        printf("%d",arr[i]);
    
    printf("\n");
}


