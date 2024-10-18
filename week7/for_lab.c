#include <stdio.h>

int main(void) {
    int a, b, c, i = 0;

    for (a = 1; a <= 100; a++) {
        for (b = a; b <= 100; b++) {
            for (c = b; c <= 100; c++) {
                if (((a*a + b*b) == c*c)) {
                    printf("%d %d %d\n", a, b, c);
                    i ++;
                }
            }
        }
    }
    printf("i = %d\n", i);
    return 0;

    // 중복되는 것이 겹치지 않도록
} 