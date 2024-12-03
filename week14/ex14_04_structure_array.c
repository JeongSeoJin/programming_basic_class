#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define SIZE 5

struct student {
    int num;
    char name[20];
    float grade;
};

int main(void) {

    struct student list[100]; // 구조체의 배열 선언. 
    list[2].num = 24;
    strcpy(list[2].name, "seojin");
    list[2].grade = 3.4;

    printf("%d, %s, %f", list[2].num, list[2].name, list[2].grade);

    /* 구조체 배열에서 요소의 개수를 자동으로 알아내려면 배열에서 학습한 대로 하면 된다. 
    즉 전체 배열의 총 바이트 수를 개별 요소의 바이트 수로 나누면 된다.
    n = sizeof(list)/sizeof(struct student); 
    */

    int i;

    for(i = 0; i < SIZE; i++ ) {
        printf("학번 : ");
        scanf("%d", &list[i].num);

        printf("이름 : ");
        scanf("%s", list[i].name);

        printf("학점 : ");
        scanf("%f", &list[i].grade);
    }

    return 0;
}