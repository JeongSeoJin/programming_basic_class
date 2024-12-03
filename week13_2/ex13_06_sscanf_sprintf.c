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

    // sprintf, sscanf 모두 대상이 터미널 창에서 변수로 바뀜. 변수에 저장 혹은 변수에서 값 받기
    // 문자열 수치 변환

    return 0;
}