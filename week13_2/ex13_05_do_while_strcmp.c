#include <stdio.h>
#include <string.h>

int main(void) {
    char key[] = "C";
    char buffer[80] = "";
    do {
        printf("the most used language in embeded system ? : ");
        gets(buffer, sizeof(buffer));
    } while(strcmp(key, buffer) != 0);

    printf("It's correct!\n");
    return 0;
}