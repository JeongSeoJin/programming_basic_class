#include <stdio.h>

int main(void) {

    char code;
    char *p = NULL;     //char형 포인터 p 선언
    p = &code;          //포인터에 변수 code의 주소 대입
    *p = 'a';           //포인터를 통하여 변수 code에 'a'대입하기

    printf("%c", code);

    return 0;
}
