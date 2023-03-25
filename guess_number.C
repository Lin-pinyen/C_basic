#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int min=0;
    const int max=100;
    int guess;
    int guesses=0;
    int answer;

    srand(time(0)); //seed random, 0代表參考現在時間，若沒設定random怎麼跑都會相同

    answer=(rand()%max)+min;

    do{
        printf("\nEnter a guess: ");
        scanf("%d", &guess);
        if(guess > answer){
            printf("It is too high!");
        }
        if(guess < answer){
            printf("it is too low! ");
        }
        if(guess ==answer){
            printf("CORRECT!\n");
        }
        guesses++;

    }while(guess!=answer);

    printf("*********************\n");
    printf("answer is %d\n", answer);
    printf("guesses counts: %d\n", guesses);
    printf("*********************\n");

    return 0;
}