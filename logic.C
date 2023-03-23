#include<stdio.h>
#include<stdbool.h>

int main(){

    float temp=25;
    bool sunny=true;

    if(temp>=20 && temp <=30 && sunny == true){
        printf("\nThe weather is good!\n");

    }
    else{
        printf("\nThe weather is bad!\n");
    }

    // //You can use 'or' expression.
    // if(temp<20 || temp>30){
    //     printf("The weather is bad!\n");
    // }
    // else{
    //     printf("The weather is good!\n");
    // }

    if(!sunny){
        printf("It is not sunny day.\n");
    }
    else{
        printf("It is a sunny day!\n");
    }


    return 0;



}