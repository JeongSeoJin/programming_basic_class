#include <stdio.h>

struct point {
    int x;
    int y;
};

int main(void) {
    struct point p = {1, 2}; // point 타입 변수를 선언했다고 생각.
    // struct point q = {.y = 2, .x = 1};
    struct point r = p;
    r = (struct point) {2, 1};

    r = p;

    printf("%d, %d\n", p.x, p.y);
    // printf("%d, %d\n", q.x, q.y);
    printf("%d, %d\n", r.x, r.y);

    return 0;


}