// 2024.10.1

#include <stdio.h>

int main() {
    int x, y;

    printf("분모와 분자를 입력해주세요 : ");
    scanf("%d %d", &x, &y);

    if(x == 0) {
        printf("분모가 0이 될 수 없습니다. 다시 입력해주세요.");
    }
    else {
        printf("결과값은 %d입니다.",y/x);
    }
    return 0;
}