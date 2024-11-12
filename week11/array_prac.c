// 기호상수는 배열의 인덱스로 사용할 수 있다. but 변수는 안됨. 

#include <stdio.h>
#define SIZE 5
#include <stdlib.h>

int main(void) {
    int score[SIZE];
    int random[SIZE];
    for (int i = 0; i < SIZE; i ++) {
        score[i] = (i + 1) * 10;
        printf("score[%d] = %d\n",i, score[i]);

    }

    srand((unsigned)time(NULL));
    for (int i = 0; i < SIZE; i ++) {
        random[i] = rand() % 100;
        printf("random[%d] = %d\n", i, random[i]);
    }
}