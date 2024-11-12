#include <stdio.h>
#define SIZE 5

int main(void) {
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 5, 3, 4, 5};
    int i;

    for (i = 0; i < SIZE; i ++) {
        if(a[i] != b[i]) {
            printf("different!");
            break;
        }

        // printf("same!");
    }
    return 0;
}