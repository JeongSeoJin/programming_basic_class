#include <stdio.h>

int main(void) {
    int i = 0;
    
    while (1) {
        printf("Hello world\n");
        i++;

        if (i>=10) {
            goto label;
        }
        
    }

    label:
        printf("this is end of loop\n");
        return 0;
}