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
else if (n < 200)
    printf("medium")
else
    printf("large") 
*/