#include <stdio.h>

int main(void) {

    int x = 6;
    int *p = &x;

    printf("%d\n", --(*p));
    printf("%d\n", (*p)++);

    return 0;

}
