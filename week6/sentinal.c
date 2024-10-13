#include <stdio.h>

int main(void) {
    int grade = 0;
    int n = 0;
    int sum = 0;

    printf("negative for exit\n");

    while(grade >= 0) { // 센티널값은 일반적으로 나올 수 없는 값을 지정하는 것이 가장 좋다.
        printf("input grade : ");
        scanf("%d", &grade);
        n++;
        sum += grade;
    }

    sum = sum - grade;
    n -= 1;
    printf("the average is %.3f", (float)sum / n);

    return 0;
}