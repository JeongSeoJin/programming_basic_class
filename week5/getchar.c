//2024.10.4

#include <stdio.h>

int main(void) {
    char ch;
    printf("문자를 입력하시오");
    ch = getchar();

    if(ch >= 'A' && ch <= 'Z')
        printf("%c 는 대문자 입니다.\n", ch);
    else if (ch >= 'a'&& ch <= 'z')
        printf("%c 는 소문자입니다. \n", ch);
    else if (ch >= '0' && ch<= '9')
        printf("%c는 숫자입니다.\n", ch);
    else
        printf("%c는 기타문입니다.\n", ch );

    return 0;
}

/* 
if(100 > size)
    printf("small")
else if (n < 200) // else if 문을 사용하여 기준점을 하나 잡아두고 조건문을 사용하는 것이 좋음. 
    printf("medium")
else
    printf("large") 
*/

//추가 내용
// 만일 대문자를 소문자로 바꾸거나 그 반대로 바꾸는 경우에 ASCII코드 상에서 값을 변환하여 계산.