#include <stdio.h>
// #include <conio.h>

int main(void) {

    int ch;
    
    // while ((ch = getchar()) != EOF) { // buffer 가 존재. // echo 가 존재
    //     putchar(ch);
    // }

    // int ch;
    // while((ch = _getch()) != 'q') {
    //     _putch(ch);
    // }

    char name[100];
    char address[100];

    printf("input your name : ");
    gets(name, sizeof(name));
    printf("where do you live ? : ");
    gets(address, sizeof(address));

    printf("Hello %s habitating in %s", name, address);

    return 0;
}


// char *p = "Hello"
// 모든 데이터는 데이터 세그먼트에 생성됨. 그런데 문자열은 텍스트 세그먼트에 생성. 