#include <stdio.h>
#include <string.h>
#include "strlwr.h" //由於GCC沒有定義strlwr要自己定義再include

int main(){
    char string1[]="Taipei";
    char string2[]="Gongguan";

    strlwr(string1);
    //strupr(string1);
    //strcat(string1, string2); //appends string2 to end of string1
    //strncat(string1, string2, 3);//appends n characters from string2 to string1
    //strcpy(string1, string2); //copy string2 to string1
    //strncpy(string1, string2,2); //copy n characters of string2 to string1

    // int result = strlen(string);
    // int result = strcmp(string1, string2); //若相同會回傳0，不同回傳非零 
    // int result = strncmp(string1, string2, 1);//只比第一個字是否相同

    printf("\n%s\n", string1);
    // printf("%d\n", result);
    return 0;
}
