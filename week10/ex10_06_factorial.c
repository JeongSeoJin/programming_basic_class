#include <stdio.h>
int factorial(int n) {
    printf("factorial(%d)\n", n);

    if (n <= 1) return 1;
    else return n * factorial(n-1);
}

int main(void) {
    int n;
    printf("input integer : ");
    scanf("%d", &n);
    printf("%d! is %d", n, factorial(n));
    return 0;
}