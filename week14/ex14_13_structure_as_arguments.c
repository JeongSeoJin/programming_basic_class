#include <stdio.h>
#include <string.h>

struct student{
    int id;
    char name[20];
    int age;
};

//  (반환형)   (함수 이름)
struct student create() { // 구조체를 함수의 반환값으로 넘기기 위해서는 함수의 반환값을 구조체로 표시해주면 된다.
    struct student s = {10, "hyunobin", 21};
    strcpy(s.name, "hyunbin");

    return s;
}

int equal(const struct student *s1, const struct student *s2);



int main(void) {

    struct student a = {1, "seojin", 20};
    struct student b = {2, "yusang", 20};

    equal(&a, &b);

    struct student k;
    k = create();
    printf("\n%d, %s, %d\n", k.id, k.name, k.age);

    return 0;
}

int equal(const struct student *s1, const struct student *s2) {
    if ((*s1).id == (*s2).id) {
        printf("both id are same!");
    }

    else if((*s1).id != (*s2).id) {
        printf("both id are different!");
    }
}