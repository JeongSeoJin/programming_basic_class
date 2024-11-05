// static allocation is about survival period
// auto allocation is vanished when block ends

#include <stdio.h>

void sub() {
    static int scount = 0; // static이 붙기에 초기화를 한 번만 함.
    int acount = 0;
    printf("scound = %d\t", scount);

    printf("acount = %d\n", acount);
    scount ++;
    acount ++;
}

int main(void) {
    sub();
    sub();
    sub();
    return 0;
}