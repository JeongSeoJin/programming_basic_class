#include <stdio.h>

struct date {
    int month;
    int day;
    int year;
};

struct student {
    int number;
    char name[20];
    double grade;
    struct date *dob; // 포인터가 구조체의 멤버.
};

int main(void) {
    struct date d = {3, 20, 2000};
    struct student s = {1, "seojin", 4.5, &d};

    // s.dob = &d; // s구조체의 dob멤버는 포인터임.

    printf("%d\n", s.number);
    printf("%s\n", s.name);
    printf("%.2f\n", s.grade);
    printf("%d %d %d\n", s.dob -> year, s.dob -> month, s.dob -> day);
}