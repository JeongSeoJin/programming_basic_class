#include <stdio.h>

int main(void) {
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = NULL;
    p = A;

    for (int i = 0; i < 10; i ++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    for (int i = 0; i < 10; i ++) {
        printf("%d ", *(p + 9 - i));
    }

    return 0;
}