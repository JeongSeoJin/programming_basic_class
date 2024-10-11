#include <stdio.h>

int main(void) {
    int i = 0;
    while( i++ < 10) { // 증가되기 전의 값과 비교를 한 후에 출력할 때에는 증가를 시켜서 출력.
    // ++i인 전위연산자를 사용한다면 1부터 9까지 출력이 됨.
        printf("value of i is %d\n", i);
    }
}