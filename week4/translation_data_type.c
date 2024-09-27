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

    //논리 연산자 중에서 && 연산자가 ||연산자보다 우선 순위가 높다.
    // y = - ++ --x; -> 순서 (우에서 좌) /  단항연산자도 우에서 좌. 
    // y = - ++x + y--
    // -> y + -(x+1) 수행 후에 y -= 1

    return 0;
}