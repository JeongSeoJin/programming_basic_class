// 2024.10.1

#include <stdio.h>

int main() {
    int year;
    printf("연도를 입력해주세요 : ");
    scanf("%d", &year);

    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("%d는 윤년입니다.\n", year);
    }
    else{ 
        printf("%d는 윤년이 아닙니다.\n", year);
    }

    return 0;
    
}