#include <stdio.h>
#include <stdlib.h>

int main(void) {
    for (int i = 0; i < 10; i ++) {
        if (i >= 5)
            continue;   
        else if(i > 8) {
            break;
        }
        printf("%d\n",i );

    }

    for (int y = 1; y <= 5; y ++) {
        for(int x = 1; x <= y; x++) {
            printf("%d", x);
        }
        printf("\n");
    }

    // int value = srand(time);
}