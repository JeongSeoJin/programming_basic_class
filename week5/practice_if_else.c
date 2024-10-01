// 2024.10.1

#include <stdio.h>

int main(void) {
    int x;
    printf("숫자를 입력해주세요 : ");
    scanf("%d", &x);

    if(x%2 == 1) {
        printf("%d는 홀수입니다.\n", x);
    }
    else{
        printf("%d는 짝수입니다.\n", x);
    }
    return 0;
    
}