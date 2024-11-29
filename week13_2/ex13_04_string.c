#include <stdio.h>
#include <string.h>

int main(void) {
    // ============================= strcpy =============================
    char dst[6];
    char src[6] = "Hello";
    strncpy(dst, src, 3);

    printf("%s\n", dst);

    //============================= strcat =============================

    char string[80];

    strcpy(string, "Hello world from ");
    strcat(string, "strcpy ");
    strcat(string, "and ");
    strcat(string, "strcat! ");

    printf("string = %s\n", string);

    //============================= strcmp =============================

    char str1[80];
    char str2[80];
    int result;

    printf("first value : ");
    scanf("%s", str1);
    printf("second value : ");
    scanf("%s", str2);

    result = strcmp(str1, str2);

    if (result < 0) {
        printf("%s is behind in respect to %s\n", str1, str2);
    }
    else if (result == 0) {
        printf("both are equal\n");
    }
    else {
        printf("%s is ahead in respect to %s\n", str1, str2);
    }

    //============================= strstr =============================

    char s[] = "A bird in hand is worth two in the bush";
    char sub[] = "bird";
    char *p = NULL;
    int location;

    p = strstr(s, sub);
    printf("\n");
    if (p == NULL) {
        printf("%s is not found \n", sub);
    }
    else {
        location = (int) (p - s);
        printf("%s is found at %d in '%s' \n", sub, location, s);
    }

    // ============================= strtok =============================
    char ss[] = "Man is immortal, because he has a soul";
    char seps[] = " ,\t\n"; // 스페이스바, 쉼표, 탭, 줄바꿈 모두 분리자가 됨.
    char *token = NULL;

    token = strtok(ss, seps);

    while(token != NULL) {
        printf("token : %s\n", token);;
        token = strtok(NULL, seps);
    }

    return 0;
}


