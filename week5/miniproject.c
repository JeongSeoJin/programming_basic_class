#include <stdio.h>

int main() {
    int output_value, std, rate, leak;
    printf("input std value : ");
    scanf("%d", &std);

    if(std < 12000000) {
        rate = 15;
        leak =  1080000;
    }
    else if (std <46000000) {
        rate = 24;
        leak = 5220000;
    }
    else if (std < 88000000) {
        rate = 35;
        leak = 14900000;

    }
    else if(std < 150000000) {
        rate = 38;
        leak = 19400000;
    }
    else if (std < 300000000) {
        rate = 40;
        leak = 25400000;
    }
    else if(std < 500000000) {
        rate = 42;
        leak = 35400000;
    }
    output_value = std * rate - leak;

    printf("%d", output_value);

}