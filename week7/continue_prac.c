#include <stdio.h>

int main(void) {
    int i;

    for(i = 0; i < 10; i++) {
        if(i%3 == 0) {
            continue; // 이 조건을 만족하면 다시 for 문의 증감식으로 돌아감. 이후 조건식. 
        }
        printf("%d", i);
    }
}

//만일 while, do-while문을 사용하는 경우에 continue를 만나면 바로 조건식으로 감.