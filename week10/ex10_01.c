// call by value : 함수를 호출할 때 인수의 값이 매개변수로 복사
// call by reference : 포인터 (변수의 주소를 보냄)

// 전역변수는 초기화하지 않으면 컴파일러에 의해 자동으로 0

#include <stdio.h>

int x;

void sub(void);

int main(void) {
    for(x = 0; x < 10; x ++) {
        sub();
        printf("from main : %d\n", x);
    }
}

void sub() {
    for(x = 0; x < 10; x ++) {
        printf("*");
        printf("from sub : %d\n", x);
    }
}