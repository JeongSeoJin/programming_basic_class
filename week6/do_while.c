#include <stdio.h>

int main(void) {
    int num, sum = 0;

    do { // 조건이 참이든 거짓이든 일단 한 번은 브라켓내부의 문장을 실행.
        printf("input value : ");
        scanf("%d", &num);
        sum += num;
    } 
    while (num != 0);

    printf("summation is %d\n", sum);

    //////////////////// example 2
    int number;

    do {
        printf("1 --- new file\n2 --- open file\n3 --- close file\n");
        printf("select one condition : ");
        scanf("%d", &number);
    }
    while (number > 3 || number < 1); // 내가 틀린 부분 : 논리 연산자.

    printf("selected number is %d\n", number);
    return 0;
}