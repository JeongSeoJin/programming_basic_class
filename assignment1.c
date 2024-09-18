#include <stdio.h>

/* printf를 이용해서 수식의 값을 8진법이나 16진법으로 출력하려면 각각 %o와 %x를 사용해야한다. 
8진수 앞에 0을 붙여서 출력하려면 %#o를 사용하여 16진수 앞에 0x를 붙여서 출력하려면 %#x를 사용한다*/

int main(void) {

    int data = 0;

    printf("16진수 정수를 입력하시오 : ");
    scanf("%x", &data); //16진수
    printf("8진수로는 %#o입니다.\n", data);
    printf("10진수로는 %d입니다.\n", data);
    printf("16진수로는 %#x입니다.\n", data); /* x로 적으면 소문자로 출력되고 X로 작성하면 대문자로 출려됨. 
    앞에 #기호는 0x와 함께 출력해달라는 의미 */

    return 0;
}