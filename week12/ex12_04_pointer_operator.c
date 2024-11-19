#include <stdio.h>

int main(void) {
    // int i = 10;
    // int *p = &i;
    // int v = 0;

    // printf("v = *p++\n");
    // printf("i = %d, p = %p, v = %d\n", i, p, v);
    // v = *p++;
    // printf("i = %d, p = %p, v = %d\n\n", i, p, v);

    // int i = 10;
    // int *p = &i;
    // int v = 0;

    // printf("v = (*p)++\n");
    // printf("i = %d, p = %p, v = %d\n", i, p, v);
    // v = (*p)++;
    // printf("i = %d, p = %p, v = %d\n\n", i, p, v);

    int i = 10;
    int *p = &i;
    int v = 0;

    printf("v = *++p\n");
    printf("i = %d, p = %p, v = %d\n", i, p, v);
    v = *++p;
    printf("i = %d, p = %p, v = %d\n\n", i, p, v);

    int i = 10;
    int *p = &i;
    int v = 0;

    printf("v = ++*p\n");
    printf("i = %d, p = %p, v = %d\n", i, p, v);
    v = ++*p;
    printf("i = %d, p = %p, v = %d\n\n", i, p, v);
}