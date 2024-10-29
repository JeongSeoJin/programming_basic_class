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

