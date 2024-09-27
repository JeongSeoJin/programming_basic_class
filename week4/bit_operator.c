#include <stdio.h>

int main(void) {
    printf("AND : %08X\n", 0x9 & 0xA);

    int a = 9;
    a = ~a;
    a += 0x01;
    printf("a = %08x\n", a);
}