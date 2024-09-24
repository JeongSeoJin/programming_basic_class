//24, September, 2024

#include <stdio.h>

int main(void) {
    double x = 0; 
    double y = 0; 
    double result = 0;

    printf("input two value : ");
    scanf("%lf %lf", &x, &y); //f를 이용해도 되나? -> 일단 f를 사용하면 더 낮은 자료형에 맞춰져 설정이 됨. 

    result = x + y;
    printf("%f + %f = %f\n", x, y, result); // lf를 사용해도 됨. 
    result = x / y;
    printf("%f / %f = %f\n", x, y, result);
    return 0;

}