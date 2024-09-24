//24, September, 2024

#include <stdio.h>

int main(void) {
    int x = 10, y = 10;

    printf("x = %d\n", x);
    printf("x++ = %d\n", x++); // 후위 연산자 : 수식에 먼저 대입하고 모든 것이 끝난 후에 x = x + 1
    printf("x = %d\n", x);

    printf("y = %d\n", y);
    printf("++y = %d\n", ++y); // 전위 연산자 : y = y + 1을 먼저 해주고 수식에 대입. 
    printf("y = %d\n", y);

    printf("%d", (1 + x++) + 4);
}