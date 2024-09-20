// 20, December, 2024

#include <stdio.h>

int main(void) {
    int x, y, z;
    int sum = 0; // 변수 선언을 할 때 초기화를 꼭 해주어야함. 
    printf("input three value x, y, z : ");
    scanf("%d %d %d", &x, &y, &z);
    sum += x;
    sum += y;
    sum += z;
    printf("%d", sum);
    return 0;
}