#include <stdio.h>

int maxvalue(int x, int y){

    return (x>y?x:y); // (condition)? value is true:value is false;
}

int main(){
    int max;
    max=maxvalue(5,4);

    printf("max value is %d\n", max);

    return 0;
}