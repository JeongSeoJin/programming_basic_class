#include <stdio.h>

enum days {SUN, MON, TUE, WEN, THU, FRI, SAT};

char *days_name[7] = {
    "sun", "mon", "tue", "wen", "thu", "fri", "sat"
};

char a[] = {'a', 'b'};

int main(void) {

    enum days d;
    d = WEN;
    printf("%d 번째 요일은 %s입니다. \n", d, days_name[d]);
    printf("%s \n", a);


    return 0;
}