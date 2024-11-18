#include <stdio.h>

int main(void) {
    int prices[5] = {50, 30, 60, 70, 20};
    int min;

    min = prices[0];
    for (int i = 1; i < 5; i ++) {
        if (prices[i] < min) { // maximun의 경우 부등호만 반대로
            min = prices[i];
        }
    }

    printf("min is %d", min);
}