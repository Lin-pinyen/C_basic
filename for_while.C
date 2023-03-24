#include <stdio.h>
#include <string.h>
int main(){

    // for (int i=1; i<=10; i++){// (起始值、終值、變化)

    //     printf("%d\n", i);
    // }

    char name[25];

    printf("\nwhat's your name?");
    fgets(name, 25 ,stdin);
    name[strlen(name)-1]='\0';

    while(strlen(name)==0)
    {
        printf("You didn't enter your name");
        printf("\nwhat's your name?");
        fgets(name, 25 ,stdin);
        name[strlen(name)-1]='\0';

    }
    
    printf("Hello %s !\n", name);




    return 0;
}