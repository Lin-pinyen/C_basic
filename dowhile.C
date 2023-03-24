#include <stdio.h>

int main(){

    //while：會先檢查條件，條件符合才會執行
    //do while：會至少做一次，再檢查條件
    int number=0;
    int sum=0;
    do{
        printf("Enter a number above 0: ");
        scanf("%d", &number);
        if(number>0){
            sum+=number;
        }
    }while(number>0);

    printf("sum is %d\n", sum);

    return 0;
}