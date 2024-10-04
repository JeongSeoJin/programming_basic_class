#include <stdio.h>

int main(void) {
    char val;
    printf("input value\n(R, r : rectangle)\n(T, t : triangle)\n(C, c : circle)\n : ");
    val = getchar();

    if(val == 'R' || val == 'r') {
        printf("Rectangle\n");
    }

    else if(val == 'T' || val == 't') {
        printf("Triangle");
    }
    
    else if(val == 'C' || val == 'c') {
        printf("Circle");
    }

    else {
        printf("Unknown");
    }
    return 0;
}