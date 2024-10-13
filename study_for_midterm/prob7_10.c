//2~100 사이에 있는 모든 소수를 찾는 프로그램. 정수가 소수가 되려면 1과 자기 자신만을 약수로 가져야 한다.

#include <stdio.h>

int main(void) {
    printf("find prime number\n");

    int is_prime = 0;

    for (int i = 2; i <= 100; i ++) {
        for (int j = 2; j < i; j++) {
            if (i % j != 0) {
                is_prime = 1;
            }
            else if(i % j == 0){
                is_prime = 0;
                break;
            }
        }
        if (is_prime == 1) {
            printf("%d is prime\n", i);
        }
    }
}