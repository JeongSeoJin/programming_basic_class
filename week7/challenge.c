#include <stdio.h>

int main(void) {
    int a, b, c, i = 0;

    for (a = 1; a <= 10; a++) {
        for (b = 1; b <= 10; b++) {
            for (c = 1; c <= 10; c++) {
                if (a+b+c == 10) {
                    printf("%d %d %d\n", a, b, c);
                    i ++;
                }
            }
        }
    }
    printf("i = %d\n", i);
    return 0;
}
