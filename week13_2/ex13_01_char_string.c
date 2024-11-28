// 'A'와 "A"의 차이점 -> 문자 / 문자열 (NULL문가 들어감)
// NULL문자는 아스키 코드 값이 0인 문자 -> 문자열의 끝을 NULL로 표시함.

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

    // 배열의 초기화 방법
    char str[4] = {'a', 'b', 'c', '\0'};
    char str[4] = "abc";
    char str[4] = "abcdef"; // 컴파일 에러가 발생. ( 배열의 크기가 충분하지 않기 때문 )
    char str[4] = ""; // NULL문자열로 초기화 하는 방법
    char str[] = "abc"; // 배열의 크기는 4가 됨. 

    return 0;
}
