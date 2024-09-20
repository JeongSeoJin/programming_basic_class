//20, December, 2024

#include <stdio.h>

int main(void) {
    // char code = 'A'; //ASCII 코드는 작음 따옴표로 표기해야함. 
    char code = 65;

    printf("%d %d %d \n", code, code+1, code+2);
    printf("%c %c %c \n", code, code+1, code+2);
    // 컴퓨터에서 문자를 정수로도 출력이 가능하고 문자 형태로도 출력이 가능하다. 

    return 0;
}