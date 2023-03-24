#include <stdio.h>

int main(){
    int rows;
    int columns;
    char symbol;

    printf("Enter the rows: ");
    scanf("%d", &rows);

    printf("Enter the column: ");
    scanf("%d", &columns);

    setbuf(stdin, NULL);//使stdin輸入流由預設緩衝區轉為無緩衝區
   	// while ((c = getchar()) != EOF && c != '\n');//不停地使用getchar()獲取緩衝中字元，直到獲取的c是“\n”或檔案結尾符EOF為止

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    for(int i=1; i<= rows; i++){

        for(int j=1; j<= columns; j++){

            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}