// 사용자가 입력한 특정한 정수의 자리수를 반대로 출력하는 프로그램을 작성하라. 

#include <stdio.h>

int main(void) {
    int num, reversed = 0;

    // 사용자로부터 정수 입력 받기
    printf("Enter an integer: ");
    scanf("%d", &num);

    // 입력된 숫자를 역순으로 변환 (do-while 사용)
    do {
        int digit = num % 10;           // 마지막 자릿수 추출 --> 10으로 나눈 나머지 출력.
        // printf("%d\n", digit);
        reversed = reversed * 10 + digit;  // 자릿수를 역순으로 붙임
        num /= 10;                      // 마지막 자릿수 제거
    } while (num != 0);  // num이 0이 될 때까지 반복

    // 역순 결과 출력
    printf("Reversed number: %d\n", reversed);

    return 0;
}
