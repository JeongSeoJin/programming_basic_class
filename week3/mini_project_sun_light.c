#include <stdio.h>

int main(void) {
    double c = 300000;
    double dist = 149600000;

    float t;
    t = dist/c;

    printf("t = %f", t);
    return 0;
}