// 20, December, 2024

#include <stdio.h>

int main(void) {
    float c = 300000;
    float dist = 149600000;

    // 3/2로 하면 그냥 1로 나오고
    // 3.0/2.0로 계산해야함. 

    double t;
    t = dist/c;

    printf("t = %f", t);
    return 0;
}