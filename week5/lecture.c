#include <stdio.h>

int main(void) {
    char a;
    printf("혈액형에 해당하는 알파벳 입력 : ");
    a = getchar();

    if(a == 'A' || a == 'a') { // 내가 실수한 부분 : 조건식 작성할 때 ||이 아니라 &&을 사용한 것. 왜그랬지..?
        printf("%c는 부드럽고 섬세한 성향.\n", a);
    }
}