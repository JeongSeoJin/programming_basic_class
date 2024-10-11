#include <stdio.h>

int main(void) {
    int grade = 0;
    int n = 0;
    int sum = 0;

    printf("negative for exit\n");

    while(grade >= 0) {
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