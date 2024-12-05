#include <stdio.h>

void change(int *px, int *py);

int main(void) {

    // char *pc;
    // double *pd = (double *) 10000;

    // pc = (char *)10000; // 10000이라는 주소를 pc에 저장.

    // printf("%p, %p, %p", pc, pc + 1, pc + 2);

    int data = 0x0A0B0C0D;
    char *p = NULL;
    p = (char *)&data;

    for (int i = 0; i < 4; i ++) {
        printf("%02X", *(p + i));
    }


    int x = 1;
    int y = 2;

    printf("\n");

    printf("%d, %d\n", x, y);
    change(&x, &y);
    printf("%d, %d\n", x, y);

    return 0;
}

void change(int *px, int *py) {
    int tmp = NULL;
    tmp = *px;
    *px = *py;
    *py = tmp;
}
