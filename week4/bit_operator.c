#include <stdio.h>

int main(void) {
    printf("AND : %08X\n", 0x9 & 0xA);

    int a = 9;
    a = ~a; // 1의 보수를 만들기
    a += 0x01; // 1의 보수에 1을 더하여 2의 보수를 만듦. 
    printf("a = %08x\n", a);
}