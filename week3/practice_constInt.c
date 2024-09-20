//18, December, 2024

#include <stdio.h>
#define TAX_RATE 0.2 //전처리기가 처리하는(컴파일러가 만들어질 때) 기호상수선언

int main(void) {
    int x = 10;
    int y = 010; // 앞에 0이 붙으면 8진법으로 표기한다는 의미이다. -> 1 * 8^1 + 0 * 8^0
    int z = 0x10; //앞에 0x를 붙이면 16진법으로 정수 상수를 표기한다는 의미이다. 

    int a = 0xafd;

    printf("x = %d\ny = %d\nz = %d\n", x, y, z);
    printf("a = %d\n", a);

    //기호 상수(symbolic constant)
    const int MONTHS = 12; //변수 앞에 const를 붙여주면 상수가 됨. 웬만하면 const 키워드를 사용하여 상수를 만드는 것이 좋다.
    printf("months : %d\ntax rate : %f\n",MONTHS, TAX_RATE);

    int c = 0xff;

    printf("%d\n", c); // 10진수로 출력할 떄
    printf("%x\n", c); // 그냥 16진수만 출력할 때
    printf("%#x\n", c); //16진수 앞에 0x를 붙여서 출력할 때
    printf("%o\n", c); //그냥 8진수만 출력할 때
    printf("%#o\n", c); //8진수 앞에 0을 붙여서 출력할 때

    return 0;
}