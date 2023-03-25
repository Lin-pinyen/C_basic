#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0)); //seed random, 0代表參考現在時間，若沒設定random怎麼跑都會相同

    int number1= (rand()%6)+1;
    int number2= (rand()%6)+1;
    int number3= (rand()%6)+1;
    printf("%d\n", number1);
    printf("%d\n", number2);
    printf("%d\n", number3);


    return 0;
}