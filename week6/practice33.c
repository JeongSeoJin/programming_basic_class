#include <stdio.h>

int main(void) {
    int i = 0;
    while( i++ < 10) { // 증가되기 전의 값과 비교를 한 후에 출력할 때에는 증가를 시켜서 출력.
    // ++i인 전위연산자를 사용한다면 1부터 9까지 출력이 됨.
        printf("value of i is %d\n", i);
    }

    printf("the value of i is %d\n", i);// 결과값이 11이 나오는 것을 보니 while 계산할 때 10 < 10인 경우에도 후위 연산자를 계산하고 탈출
    
}