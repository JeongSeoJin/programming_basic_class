#include <stdio.h>

struct student{
    int number;
    char name[100];
    double grade;
};

int main(void) {
    struct student s = {1, "seojin", 4.5};
    struct student *p; // 변수를 가리키는 포인터가 있듯이 구조체를 가리키는 포인터도 존재.

    p = &s;

    printf("학번 : %d, 이름 : %s, 학점 : %f\n", s.number, s.name, s.grade);
    printf("학번 : %d, 이름 : %s, 학점 : %f\n", (*p).number, (*p).name, (*p).grade);
    printf("학번 : %d, 이름 : %s, 학점 : %f\n", p -> number, p -> name, p -> grade);
    // -> 연산자의 경우 간접 맴버 연산자라고 한다. (*p).number와 동일.

    // *p.number
    // 위처럼 표기하면 우선순위에 의하여 *(p.number)와 동일하다. 구조체 p의 멤버 number가 가리키는 것이라는 의미이다.
    //때문에 number가 반드시 pointer이어야한다.
    // *p -> number 도 우선순위에 의하녀 *(p->number) 인데 이도 위와 같다.
}