#include <stdio.h>

int main(void) {

    int *p = (int *) 1000;
    double *q = (double *)2000;
    printf("%d\n", p + 2);
    printf("%d\n", q + 1);

    return 0;

}
