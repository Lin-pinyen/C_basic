#include <stdio.h>

double square(double x){ //double代表return type, ()括號內代表接受的參數類型
    x*=x;
    return x;
}

int main(){
    double x;
    x=square(3.14);
    printf("%f\n",x);

    return 0;
}