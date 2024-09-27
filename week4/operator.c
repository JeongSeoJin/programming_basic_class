//24, September, 2024

#include <stdio.h>
#include <math.h>

int main(void) {
    double  a, b;
    a = (0.3 * 3) + 0.1;
    b = 1;

    printf("a == b : %d \n", a == b);
    printf("%30.30lf\n", a);

    printf("fabs(a-b) < 0.0001 : %d\n", fabs(a-b) < 0.0001);
}