#include <stdio.h>

int print_binary(int x);

int main(void) {

    char *p = "home";
    printf("%u\n", p);
    printf("%c\n", *p);
    
    for (int i = 0; i < 4; i ++) {
        printf("%c", *p++);
    }

    printf("\n");

    int A[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {0, 0, 0}
    };

    int *q = NULL;
    q = A;

    for (int i = 0; i < 9; i ++) {
        printf("%d", *q++);
    }

    print_binary(9);
    printf("\n");

    printf("%d", 1/2);

    return 0;
}

int print_binary(int x) {
    if (x > 0) { 
        print_binary(x/2);
        printf("%d", x % 2);
    }
}
