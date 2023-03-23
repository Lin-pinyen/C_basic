#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("\n Is the temperature in (C) or (F)?");
    scanf("%c", &unit);

    unit=toupper(unit); //把輸入強制轉大寫，如此輸入c不會判定成例外狀況

    if (unit =='C'){
        printf("\nEnter the temperature in Celsius: ");
        scanf("%f", &temp);
        temp=(temp*9) /5+32;
        printf("The temperature in Fahrenheit is: %0.1f\n", temp);

    }
    else if (unit =='F'){
        printf("\nEnter the temperature in Fahrenheit: ");
        scanf("%f", &temp);
        temp=(temp-32)*5/9;
        printf("The temperature in Celsius is: %0.1f\n", temp);

    }
    else{
        printf("%c is not a valid unit of measurement.\n", unit);

    }

    return 0;


}