#include <stdio.h>
#include <string.h>

int main(void) {
    char filename[100];
    int i;

    for(i = 0; i < 6; i ++) {
        sprintf(filename, "image%d.jpg", i);
        printf("%s \n", filename);
    }

    char instring[] = "file 12";
    char name[10];
    int number;

    sscanf(instring, "%s %d", name, &number);
    printf("name  = %s, number %d", name, number);

    return 0;
}