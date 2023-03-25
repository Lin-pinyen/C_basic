#include <stdio.h>

enum Day{Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fri=6, Sat=7};

int main(){

    //enum：使用者定義一些有別名的數字，讓整個程式更加容易閱讀
    enum Day today= Mon;

    if(today == Sun || today ==Sat){

        printf("It's weekend!\n");
    }
    else{


        printf("I have to worked today.\n");
    }

    return 0;
}