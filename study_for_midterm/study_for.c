#include <stdio.h>

int main(void) {
    // for(;;) { // 무한루프
    //     printf("hello world");
    // }

    int i;
    // 콤마 연산자로 변수 초기화 자리에서 printf("")를 넣어 코드가한 번만 수행되도록 할 수 있다.
    for (printf("start!\n"), i = 1; i <= 5; i++) {
        printf("Hello World!\n");
    }

    for(int j = 0; j < 10 && i < 10; j++) { 
        /* && 연산자이면 i가 더 빠르게 10에 도달하기 때문에 i가 끝날 때 전체 반복도 같이 끝난다.
        하지만 ||연산자이라면 j가 끝날 때까지 루프가 실행된다. */
        printf("j = %d, i = %d\n", j, i);
        i ++;
    }
    return 0;
}