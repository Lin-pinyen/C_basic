#include <stdio.h>

int main(){

    char operators; //operator為Ｃ中已使用的參數，無法重複命名
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator in (+, -, *, /): ");
    scanf("%c", &operators);

    printf("%c", operators);

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    switch (operators){
    case '+':
        result=num1+num2;
        printf("\nResult : %0.1lf\n", result);
        break;
    case '-':
        result=num1-num2;
        printf("\nResult : %0.1lf\n", result);
        break;
    case '*':
        result=num1*num2;
        printf("\nResult : %0.1lf\n", result);
        break;
    case '/':
        result=num1/num2;
        printf("\nResult : %0.1lf\n", result);
        break;
    
    default:
        printf("%c is not valid operator!\n", operators);
        break;
    }
    
    return 0;
}
