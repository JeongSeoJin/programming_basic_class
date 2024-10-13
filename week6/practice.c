#include <stdio.h>

int main(void) {
    int i = 1;
    int sum;
    sum = 0;

    while (i <= 100) {
        if (i % 3 == 0) {
            sum += i;
        }
        i++;
    }

    printf("summation is s%d", sum);   
}