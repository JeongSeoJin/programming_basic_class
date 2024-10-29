// argument : 호출 프로그램에 의하여 함수에 실제로 전달되는 값
// parameter : 위의 값을 전달받는 변수이다.

// double f 를 매개변수로 받고 double fabs 함수 헤더를 정의
// double fabs(double f)

#include <stdio.h>

void happyBirthday(int age);

int get_integer();

int main(void) {
    happyBirthday(24);
    return 0;
}

void happyBirthday(int age) {
    int x = get_integer();
    int y = get_integer();
    printf("summation is %d\n", x + y);
    printf("사랑하는 친구의 %d번째 생일을 축하합니다!\n", age);
}

int get_integer() {
    int value;
    printf("input integer : ");
    scanf("%d", &value);
    return value;
}