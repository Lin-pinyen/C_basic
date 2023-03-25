#include <stdio.h>
#include <ctype.h>

int main(){

    char questions[][100]={"1. First question", "2. Second question", "3. Third question",};
    char option[][100]={"A: The answer is A","B: The answer is A","C: The answer is A","D: The answer is A",
                        "A: The answer is B","B: The answer is B","C: The answer is B","D: The answer is B",                          
                        "A: The answer is C","B: The answer is C","C: The answer is C","D: The answer is C", };
    char answers[3]={'A','B','C'};
    int numberofquestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score=0;
    char c;

    printf("quiz game\n");

    for(int i=0; i < numberofquestions; i++){
        printf("*********************\n");
        printf("%s\n",questions[i]);
        printf("*********************\n");

        for(int j=(i*4); j<(i*4)+4; j++){
            printf("%s\n", option[j]);
        }
        printf("guess: " );
        scanf("%c", &guess);
        while ((c = getchar()) != EOF && c != '\n');//不停地使用getchar()獲取緩衝中字元，直到獲取的c是“\n”或檔案結尾符EOF為止
        //setbuf(stdin, NULL);//這邊使用setbuf最後一圈會直接被跳過

        guess=toupper(guess);

        if(guess==answers[i]){

            printf("CORRECT!\n");
            score++;
        }
        else{
            printf("WRONG!\n");
        }

    }

    printf("*********************\n");
    printf("final score is %d/%d\n",score, numberofquestions);
    printf("*********************\n");

    return 0;

}