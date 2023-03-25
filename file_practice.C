#include <stdio.h>

int main(){

    FILE *pF =fopen("test.txt", "a");//a: append, w: write, r: read
    // windows使用絕對路徑需要把“\”變成“\\”才能正確使用

    fprintf(pF, "\nSpongebob squarepants"); //發送格式化輸出到流 stream 中

    // if(remove("test.txt")==0){
    //     printf("That file was deleted successfully!\n");
    // }
    // else{
    //     printf("That file still exist.\n");
    // }

    fclose(pF);


    return 0;
}