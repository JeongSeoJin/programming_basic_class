#include <stdio.h>
#define STUDENTS 5

int main(void) {
    int scores[STUDENTS];
    int i, sum = 0;
    int average;

    for (i = 0; i < STUDENTS; i ++) {
        printf("%d\n", scores[i]);
    }

    for (i = 0; i < STUDENTS; i ++) {
        printf("input value : ");
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    average = (double)sum / STUDENTS;
    printf("average of those values is %f", average);
}
