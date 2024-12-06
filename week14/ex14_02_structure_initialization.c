#include <stdio.h>
#include <math.h>

//* structure definition
struct point {
    int x;
    int y;
};

int main(void) {

    struct point p1, p2;
    int xdiff, ydiff;
    double dist;

    printf("input coordinate : ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("input coordinate : ");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));
    printf("distance : %lf", dist);

    // additionally
    /* 구조체끼리 복사 가능
    p1 = p2; 이렇게 하면 대입하여 복사하는 효과.
    원소들끼리 대입하여 복사해도 됨.

    하지만 비교하는 경우에는
    if (p1 == p2) {
    } -> 이것은 불가. 구조체 변수를 서로 비교하는 것은 허용되지 않음. (배열의 이름끼리 비교하려는 것과 유사.)
    비교 하기 위해서는 성분별 비교를 해주어야함.
    if((p1.x == p2.x) && (p1.y == p2.y)) {
    } -> 이건 가능.
    */

    return 0;
    
}