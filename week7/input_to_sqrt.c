#include <stdio.h>
#include <math.h>
// #include <conio.h>

int main(void) {
    float value;

    do {
        printf("input value to sqrt : ");
        scanf("%f", &value);

        printf("The result is %f\n", value);
        if(value == 101) {
            goto OUT;
        }
    }while(value > 0);

    OUT:
        printf("program has been terminated.\n");

    return 0;
}