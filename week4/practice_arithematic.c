//24, September, 2024

#include <stdio.h>

int main(void) {
    int x = 0; 
    int y = 0; 
    int result = 0;

    printf("input two value : ");
    scanf("%d %d", &x, &y); //%d 사이에 띄어쓰기 상관없음. 

    result = x + y;
    printf("%d + %d = %d", x, y, result);
    return 0;

}