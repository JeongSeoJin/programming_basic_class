#include <stdio.h>

int main(void) {
    int a = 10;
    int *q = NULL;
    q = &a;
    printf("%d\n", *q);

    return 0;
}