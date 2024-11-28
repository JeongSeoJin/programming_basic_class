#include <stdio.h>

int main(void) {
    char *p = "Hello world";
    printf("%s\n", p); 
    /*이 코드에서 p는 문자열 "Hello world"를 가리키는 포인터이다. "Hello world"는 
    data segment에 저장되고 p는 그 문자열의 시작 주소를 가리킨다.*/

    /* printf에서 형식지정자 %s는 문자열을 출력하라는 의미인데 
    printf("%s", p);이 코드에서 포인터 p가 가리키는 메모리 위치에서 시작하는 NULL-terminated 문자열을 읽는다.
    때문에 p를 인자로 입력하면 printf는 p가 가리키는 문자열의 위치 값을 순차적으로 읽어 문자열로 출력한다. */

    printf("%c\n", *p); // p가 가리키는 값은 문자열의 시작 주소이기 때문에 H가 출력된다.

    return 0;
}