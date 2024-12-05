#include <stdio.h>

int main(void) {
    int point[] = {234, 234, 234};
    int *add  = point;
    add = point;

    point[0] += 

    printf("%d", point[0]);
    printf("%d", add[0]);
    
    return 0;
}