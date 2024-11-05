#include <stdio.h>

int factorial(int n);

int main(void) {
    int n;
    printf("factorial val : ");
    scanf("%d", &n);
    printf("%d! is %d", n, factorial(n));
    return 0;
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i ++) {
        result *= i;
    }

    return result;
}

// 반환값이 double형으로 정의된 함수에 int값을 반환하면 double형으로 형변환한 후에 반환함. 