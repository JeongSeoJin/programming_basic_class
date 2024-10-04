#include <stdio.h>

int main(void) {
    int x=0, y=0, result=0;
    char op;

    printf("input value : ");
    scanf("%d %c %d", &x, &op, &y);

    if(op == '+') {
        result = x + y;
    }

    printf("%d %c %d = %d\n", x, op, y, result);

    return 0;
}