#include <stdio.h>
#include <string.h>

int main(){
    char classes[][10]={"Chinese", "Math", "English"};
    strcpy(classes[0], "Science");

    for(int i =0; i< sizeof(classes)/sizeof(classes[0]); i++){
        printf("%s\n", classes[i]);
    }

    return 0;
}