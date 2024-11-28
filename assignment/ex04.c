#include <stdio.h>

int main(void) {

    int i = 10;  // 출력값 비교를 위한 초기화
    int *p = &i;

    // // (1)
    // i = i + 1;
    // printf("%d", i);

    // (2)
    // (*p)++;
    // printf("%d", i);

    // (3)
    // *p++;
    // printf("%d", i);

    // (4)
    *p = *p + 1;
    printf("%d", i);

    return 0;

}
