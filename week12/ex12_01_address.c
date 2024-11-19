//변수의 주소는 실행할 때마다 달라질 수 있다.

#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 69;

    printf("address of i : %p\n", &i);
    printf("address of c : %u\n", &c); // & : 주소 연산자

    return 0;
}

// 포인터 : 변수의 주소를 가지고 있는 변수 -> 저장하고 있는 것이 데이터가 아니라 메모리 주소
