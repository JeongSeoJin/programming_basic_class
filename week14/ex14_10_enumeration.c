#include <stdio.h>

enum days {SUN, MON, TUE, WEN, THU, FRI, SAT};

//* 앞에 const 를 붙여주지 않으면 이 포인터로 문자열 데이터를 수정하려고 할 가능성이 생깁니다. -> 경고 발생.
const char *days_name[] = {
    "sun", "mon", "tue", "wen", "thu", "fri", "sat"
};

// char a[3][3]= {'a', 'b'};
int main(void) {

    enum days d;
    d = WEN;
    printf("%d 번째 요일은 %s입니다. \n", d, days_name[d]);
    // printf("%s  %s\n", a[0], a[1]);


    return 0;
}