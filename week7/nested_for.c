#include <stdio.h>

int main(void) {
    int i, j;
    int width = 5;

    for(i = 0; i < width; i++) {
        for(j = 4; j > i; j--) {
            printf(" ");
        }
        for(j = 1;  j <= 2*i+1; j++) {
            printf("*");
        }
        // for(j = 0; j < width; j++) {
        //     printf(" ");
        // }
        printf("\n");
    }
    return 0;
}