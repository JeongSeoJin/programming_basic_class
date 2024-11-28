// 'A'와 "A"의 차이점 -> 문자 / 문자열 (NULL문가 들어감)

#include <stdio.h>

int main(void) {
    char str[] = "abs";
    printf("%s\n", str);
    printf(str);
    printf("\n");

    char src[] = "Action speaks louder than words";
    char dst[100];

    int i = 0;;
    printf("original value : %s\n", src);
    for(i = 0; src[i]!='\0'; i++) { // NULL == \0 == 0 세 개의 표현 모두 같다.
        dst[i] = src[i];
    }
    dst[i] = '\0';
    printf("copied : %s\n", dst);

    return 0;
}
