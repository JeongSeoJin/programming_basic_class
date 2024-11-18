#include <stdio.h>
#include <stdarg.h>

int sum(int, ... );
int main(void) {
    int answer = sum( 4, 4, 3, 2, 1 ); // 4는 뒤에 몇개의 argments가 있는지 알려주는 arg
    printf("summation is %d\n", answer);

    return 0;
}

int sum(int num, ...){
    int answer = 0;
    va_list argptr;

    va_start(argptr, num); // 가변 매개 변수 기능 시작.
    for (; num > 0; num --) {
        answer += va_arg(argptr, int);
    }

    va_end(argptr);
    return (answer);
}