#include <stdio.h>

int main(void) {
    char c = 100000;
    int i = 1.231234 + 10;
    float f = 10 + 20;
    printf("%c, %d, %f\n", c, i, f);
    
    // short + int 할 때 short를 자동 int 으로 올림 변환함. 자동 행변환 됨.

    int l = 10;
    float k = 20.3;

    printf("%d", l + k); // int를 float로 자동 행변환. 

    int a;
    double b;

    b = 5/4;

    return 0;
}