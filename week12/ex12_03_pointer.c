#include <stdio.h>

int main(void) {
    int i = 10, j = 20;
    int *p = NULL;

    p = &i;
    printf("p = %p\n", p);
    printf("i = %p\n\n", &i);
    printf("i = %d\n", i);
    printf("*p = %d\n\n", *p);

    p = &j;
    printf("p = %p\n", p);
    printf("i = %p\n\n", &j);
    printf("i = %d\n", j);
    printf("*p = %d\n\n", *p);

    *p = 40;
    printf("j = %d\n", j);

    return 0;
}

// v = *p++ 이면 p(주소)값을 v에 대입한 후에 p(주소)를 증가시킨다
// v = (*p)++ 이면 p가 가리키는 값(데이터)을 v에 대입한 후에 p가 가리키는 값을 증가시킨다. 
// v = *++p p(주소)를 증가시킨 후에 p가 가리키는 값을 대입
// v = ++*p p가 가리키는 값(데이터)을 가져온 후에 그 값을 증가시켜 v에 대입

