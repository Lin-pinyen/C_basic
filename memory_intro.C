#include <stdio.h>

int main(){
    // char： 1 byte，再memory address相鄰的變數差1
    // short: 2 byte，再memory address相鄰的變數差2
    // int: 4 byte，再memory address相鄰的變數差2
    // double: 8 byte，再memory address相鄰的變數差2

    double x='x';
    double y='y';
    double z='z';
    int d[5]; //隨者變數的類型變化，佔用的bit也會有所不同

    printf("%lu bytes\n", sizeof(x));
    printf("%lu bytes\n", sizeof(y));
    printf("%lu bytes\n", sizeof(z));
    printf("%lu bytes\n", sizeof(d));

    printf("%p\n", &x);
    printf("%p\n", &y);
    printf("%p\n", &z);
    printf("%p\n", &d);

    return 0;
}