#include <stdio.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point p1; // garbage 값이 들어가 있음.
    struct point p2; // garbage 값이 들어가 있음. 선언만 해둔 상태.
};

int main(void) {
    struct rect r;
    int w, h, area, peri;

    printf("왼쪽 상단의 좌표 입력 : ");
    scanf("%d %d", &r.p1.x, &r.p1.y);

    printf("오른쪽 하단의 좌표 입력 : ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;
    h = r.p2.x - r.p1.x;

    area = w * h;
    peri = 2 * w + 2 * h;
    printf("면적은 %d이고 둘레는 %d입이다. \n", area, peri);
}