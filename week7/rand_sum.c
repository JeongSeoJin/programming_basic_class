#include <stdio.h>
#include <stdlib.h>

int main(void) {
    srand(time(NULL)); // rand함수는 무작위 값을 출력하지만 시드값으로 time이 없다면 여러번 실행했을 떄 결과값이 같을 수 있다.
    
    for (int i = 0; i < 10; i ++) {
        printf("%d\n", rand());
    }
}