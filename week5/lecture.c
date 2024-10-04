#include <stdio.h>

int main(void) {
    char a;
    printf("혈액형에 해당하는 알파벳 입력 : ");
    a = getchar();

    if(a == 'A' || a == 'a') {
        printf("%c는 부드럽고 섬세한 성향.\n", a);
    }
}