#include <stdio.h>

int main(void) {
    char ch;

    while(1) {
        printf("input value : ");
        scanf(" %c", &ch); // -> scanf할 때 사이 띄우기를 해야 input value : 가 두 번 출력되지 않음. <= 엔터까지 입력하기 때문에.

        if(ch == 'Q') {
            break;
        }
        if(ch < 'a' ||ch > 'z') {
            continue;
        }

        ch -= 32;
        printf("translatino to %c\n", ch);
    }
    return 0;
}