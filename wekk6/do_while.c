#include <stdio.h>

int main(void) {
    int num, sum = 0;

    do {
        printf("input value : ");
        scanf("%d", &num);
        sum += num;
    } 
    while (num != 0);

    printf("summation is %d\n", sum);

    //////////////////// example 2
    int number=0;

    do {
        printf("1 --- new file\n2 --- open file\n3 --- close file\n");
        printf("select one condition : ");
        scanf("%d", &num);
    } 
    while (number > 3 || number < 1); // 내가 틀린 부분 : 논리 연산자.

    printf("selected number is %d\n", number);
    return 0;
}