//24, September, 2024

#include <stdio.h>
#define SEC_PER_MINUTE 60

int main(void) {
    int input, min, sec;
    printf("input value as sec : ");
    scanf("%d", &input);

    min = input / SEC_PER_MINUTE; //integeer형이기 때문에 몫만 남음. 
    sec = input % SEC_PER_MINUTE;
    printf("%dmin %dsec\n", min, sec);
    return 0;
}