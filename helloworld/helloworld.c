/*Trying to write a program of c i.e is wheater convertor 
onemore i've to say I'M WORST OF ALL */
#include<stdio.h>

void main(){
    int weather; 
    printf("Enter here a wheater : ");
    scanf("%i", &weather);
    if (weather<=0){
        printf( "it's more cold actually you better where sweater and take hot water\n ");
    }
    else if (weather<=10 & weather >33){
        printf("be hot\n");
    }
    else {
        printf("die cool \n");
    
    }

}
