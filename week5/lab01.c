#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, eqn;
    printf("input value (a b c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("result is %f", c/b);
    }
    else {
        eqn = b*b -4.0 * a * c;
        if(eqn >= 0) {
            printf("the result is %lf, %lf", (-b+sqrt(eqn))/2.0*a*c);
        }
    }
}