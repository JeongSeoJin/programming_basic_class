#include <stdio.h>
#include <string.h>
#define WORDS 5

int main(void) {
    int i, index;
    char dic[WORDS][2][30] = { // 3차원 배열 /단어의 개수 -> 영어, 한국어 종류 -> 각 문자열의 길이
        {"book", "책"},
        {"boy", "소년"},
        {"computer", "컴퓨터"},
        {"language", "언어"},
        {"rain", "비"},
    };

    char word[30];
    
    printf("input your word : ");
    scanf("%s", word);

    index = 0;
    for (i = 0; i < WORDS; i ++) {
        if(strcmp(dic[index][0], word) == 0) {
            printf("%s: %s\n", word, dic[index][1]);
            return 0;
        }
        index ++; // 소 배열 하나씩 모두 검토하는 과정
    }
    printf("not found\n");
}

