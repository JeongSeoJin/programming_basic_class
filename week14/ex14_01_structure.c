#include <stdio.h>

struct student {
    int number;
    char name[100];
    double grade;
};

int main(void) {

    struct student s;

    printf("학번을 입력 : ");
    scanf("%d", &s.number);

    printf("이름을 입력 : ");
    scanf("%s", s.name);

    printf("학점을 입력 : ");
    scanf("%lf", &s.grade);

    printf("\n학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.2f\n", s.grade);

    char a[10] = "Hello";
    printf("%s", a);

    return 0;
}

