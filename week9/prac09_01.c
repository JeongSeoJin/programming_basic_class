// 반환형 : 함수가 처리를 종료한 후에 호출한 곳으로 반환하는 데이터의 타임을 지정
// 기본적으로 하나의 함수는 하나의 작업만을 수행해야함

#include <stdio.h>

void print_stars();

int main(void) {

    print_stars();
    printf("\nHello World!\n");
    print_stars();
    printf("\n");
}

void print_stars() {
    for (int i = 0; i <30; i ++) {
        printf("*");
    }
}