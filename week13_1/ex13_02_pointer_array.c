#include <stdio.h>

int main(void) {
    int a[] = {10, 20, 30, 40, 50};

    printf("a = %u\n", a);

    printf("a + 1 = %u\n", a + 1);

    printf("a = %d\n", *a);

    printf("a + 1 = %d\n", *(a + 1));

    int *p;

    p = a;
    printf("%d, %d, %d\n", a[0], a[1], a[2]);
    printf("%d, %d, %d\n", p[0], p[1], p[2]);

    p[0] = 60;
    p[1] = 70;
    p[2] = 80;

    printf("%d, %d, %d\n", a[0], a[1], a[2]);
    printf("%d, %d, %d\n", p[0], p[1], p[2]);

    ////////////////////////////
    printf("\n");
    printf("%d, %d, %d\n", a[0], a[1], a[2]);
    sub(a, 3);
    printf("%d, %d, %d\n", a[0], a[1], a[2]);


}

// 배열의 이름은 근본적으로 포인터와 동일하기 때문에 아래와 같이 다양하게 사용할 수 있다.

// void sub(int b[], int size) {
//     b[0] = 4;
//     b[1] = 5;
//     b[2] = 6;
// }

// void sub(int *b, int size) {
//     b[0] = 4;
//     b[1] = 5;
//     b[2] = 6;
// }

void sub(int *b, int size) {
    *b = 4;
    *(b + 1) = 5;
    *(b + 2) = 6;
}