#include <stdio.h>

int main(void) {
    // int ten = 30;
    int num = 20;

    unsigned int mask = 1<<7;
    printf("two : ");

    for (int i = 0; i <= 7; i++) {
        ((num & mask) == 0) ? printf("0") : printf("1");
        mask = mask  >> 1;
    }

    printf("\n");

    // XOR practice (encrpto using XOR)

    char data = 'a';
    char key = 0xff;
    char encrpted_data, origin_data;

    printf("original data : %c\n", data);

    encrpted_data = data ^ key;
    printf("encrpted data : %c\n", encrpted_data);
    printf("encrpted data : %d\n", encrpted_data);

    origin_data = encrpted_data ^ key;
    printf("original data : %c", origin_data);
    printf("original data : %d", origin_data);

    return 0;
}