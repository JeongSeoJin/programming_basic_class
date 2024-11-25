#include <stdio.h>

void swap(int *px, int *py);
int get_line_parameter(int x1, int y1, int x2, int y2, float *slope);

int main(void) {
    int a = 100, b = 200;
    float s;

    printf("a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    get_line_parameter(3, 4, 5, 6, &s);
    printf("slope is %f\n", s);

}

void swap(int *px, int *py) {
    int tmp;
    tmp = *px;
    *px = *py;
    *py = tmp;
}

// 아래의 함수 같이 반환할 값이 여러 개인 경우에 포인터를 이용해서 사용할 수 있도 있음.
int get_line_parameter(int x1, int y1, int x2, int y2, float *slope) {
    *slope = (float)(y2 - y1) / (float)(x2 - x1);
}