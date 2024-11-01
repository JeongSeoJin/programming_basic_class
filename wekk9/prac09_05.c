#include <stdio.h>

int is_prime(int n);

int main(void) {
    
    int n;
    printf("input value : ");
    scanf("%d", &n);

    if(is_prime(n) == 1) {
        printf("%d is not a prime", n);
    }
    else {
        printf("%d is a prime", n);
    }
    
    return 0;
}

int is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n / i == 1) {
            return 0;
        }
        else {
            return 1;
        }
    }
}