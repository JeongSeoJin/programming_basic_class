#include <stdio.h>
#include <string.h>   

#define STU_NUM 1
#define REG_NUM 2

union example {
    int i;
    char c;
};

struct student {
    int type;

    union {
        int stu_number;
        char reg_number[15];
    } id;

    char name[20];
};

void print(struct student s) {
    switch(s.type) {
        case STU_NUM:
            printf("student number : %d\n", s.id.stu_number);
            printf("name : %s\n", s.name);
        case REG_NUM:
            printf("register number : %s\n", s.id.reg_number);
            printf("name : %s\n", s.name);
        default:
            printf("type error");
            break;
    }
}

int main(void) {

    union example v;
    v.c = 'A';
    printf("v.c = %c, v.i = %d\n", v.c, v.i);

    v.i = 10000;
    printf("v.c = %c, v.i = %d\n", v.c, v.i);

    struct student s1, s2;
    s1.type = STU_NUM;
    s1.id.stu_number = 1;
    strcpy(s1.name, "seojin");

    s2.type = REG_NUM;
    strcpy(s2.id.reg_number, "990101-101412");
    strcpy(s2.name, "yusang");

    printf("\n==============\n");

    print(s1);
    printf("\n ================= \n");
    print(s2);


    return 0;
}