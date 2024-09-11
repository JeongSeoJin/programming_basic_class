#include <stdio.h>

int main(void) {
    printf("result : %d\n", 2+3);
    printf("result : %d\n", 2-3);
    printf("result : %d\n", 2*3);
    printf("result : %d\n", 2/3); //자료형이 integer이기 때문에 정수 값을 함. 때문에 0이 출력됨.
    // %d는 10진수를 표현하는 것
    //printf 에서 f는 form(형식)을 의미함
    return 0;
}
