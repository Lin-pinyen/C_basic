#include <stdio.h>
#include <string.h>

void birthday(char name[], int age){
    printf("Happy birthday to %s!\n", name);
    printf("You are %d years old!\n", age);
    
}

int main(){
    char name[25];
    int age;

    printf("Enter your name: ");
    fgets(name, 25 ,stdin); //fgets能吃到空白鍵
    name[strlen(name)-1]='\0';//使用fgets函數時，需要手動把換行符（'\n'）替換成null字符（'\0'），否則輸出會多一個換行符

    printf("Enter your age: ");
    scanf("%d", &age);

    birthday(name, age);
    return 0;
}