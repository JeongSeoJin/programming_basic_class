#include <stdio.h>

int main(void) {
    int i = 10, j = 20;
    int *p = NULL;

    p = &i;
    printf("p = %p\n", p);
    printf("i = %p\n\n", &i);
    printf("i = %d\n", i);
    printf("*p = %d\n\n", *p);

    p = &j;
    printf("p = %p\n", p);
    printf("i = %p\n\n", &j);
    printf("i = %d\n", j);
    printf("*p = %d\n\n", *p);

    *p = 40;
    printf("j = %d\n", j);

    return 0;
}