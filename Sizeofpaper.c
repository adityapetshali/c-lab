/*Program to find the size of paper*/
/*Author : Aditya petshali (Date: 06-09-2022)*/
#include<stdio.h>
int main(){
    int i, height = 1189 , width = 841 ;
    printf("Size of A0 paper %dmm * %dmm\n", height, width);
    printf("Size of A1 paper %dmm * %dmm\n", width, height/2);
    printf("Size of A1 paper %dmm * %dmm\n", height/2, width/2);
    printf("Size of A1 paper %dmm * %dmm\n", width/2, height/4);
    printf("Size of A1 paper %dmm * %dmm\n", height/6, width/4);
    printf("Size of A1 paper %dmm * %dmm\n", width/4, height/8);
    printf("Size of A1 paper %dmm * %dmm\n", height/8, width/8);
    printf("Size of A1 paper %dmm * %dmm\n", width/8, height/16);
    printf("Size of A1 paper %dmm * %dmm\n", height/16, width/16);
    return 0;
}