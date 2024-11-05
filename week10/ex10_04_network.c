#include <stdio.h>

void hw_init();

int main(void) {
    hw_init();
    hw_init();
    hw_init();
    return 0;
}

void hw_init() {
    static int init_val = 0;

    if (init_val == 0) {
        printf("network is initialized\n");
        init_val = 1;
    }

    else if (init_val != 0) {
        printf("[warning] : network is already initialized!\n");
    }
}

