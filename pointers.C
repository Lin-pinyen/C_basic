#include <stdio.h>

void hello(int *page){

    printf("Hello, you are %d years old!\n", *page);
}

int main(){
    //pointers: holds a memory address of another variable;
    //*:indirect operators (value at address)

    int age=20;
    int *page = NULL;
    page=&age;

    // printf("value of age: %d\n", age);
    // printf("address of age: %p\n", &age);
    // printf("%lu bytes\n", sizeof(age));

    // printf("value of page: %d\n", *page);
    // printf("address of page: %p\n", page);
    // printf("%lu bytes\n", sizeof(page)); //pointer要大到可以存address

    hello(page);//pointers也可以派給function

    return 0;
}