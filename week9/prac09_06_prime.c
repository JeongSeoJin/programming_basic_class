#include <stdio.h>

int is_prime(int n); // -> 함수 원형임

int main(void) {
    
    int n;
    printf("input value : ");
    scanf("%d", &n);

    for(int k = 2; k < n; k++) {
        if(is_prime(k) == 1) {
            printf("%d is not a prime\n", k);
        }
        else {
            printf("%d is a prime\n", k);
        }
    }
    
    return 0;
}

int is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 1) {
            return 0;
        }
        else {
            return 1;
        }
    }
}

//함수가 반환하는 값은 무조건 하나
