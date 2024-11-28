#include <stdio.h>

int main(void) {

    // (a)
    int list[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d\n", list[6]);
    printf("%d\n", *(list + 6));

    //(b)
    int name[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d\n", name[3]);
    printf("%d\n", *(name + 3));

    // (c)
    int cost[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d\n", *(cost + 8));
    printf("%d\n", cost[8]);

    // (d)
    int message[10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d\n", message[0]);
    printf("%d\n", *(message + 0));

    return 0;
}
