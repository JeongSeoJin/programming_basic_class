#include <stdio.h>

int main(void) {

    // int x = 6;
    // int *p = &x;
    // printf("%d\n", --(*p)); // 5
    // printf("%d\n", (*p)++); // 5

    int *p = (int *)1000;
    double *q = (double *)2000;
    printf("%d\n", p+2); // int 는 4 바이트
    printf("%d\n", q+1); // double 8 바이트

    return 0;
}