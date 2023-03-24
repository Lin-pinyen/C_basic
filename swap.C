#include <stdio.h>
#include <string.h>


int main(){
    //只要單一字母的交換
    char x='X';
    char y='Y';
    char temp;

    temp=x;
    x=y;
    y=temp;

    printf("X is %c\n", x);
    printf("Y is %c\n", y);

    //string 的交換
    char a[]="water";
    char b[]="lemonade";
    char temp1[15];

    strcpy(temp1,a);
    strcpy(a,b);
    strcpy(b,temp1);

    printf("a is %s\n", a);
    printf("b is %s\n", b);

    return 0;
}