#include <stdio.h>

char choice;
double temp;

int C2F(int x) {
    x = x;
    return x;
}

int F2C(int x) {
    x = x;

    return x;
}

void print_menu() {
    printf("C : C2F\nF : F2C");
}

int main(void) {
    char choice;
    double temp;

    while (1) {
        printMenu();
        printf("select the menu: ");
        choice = getchar();

        if(choice == 'q') break;
        else if(choice == 'c') {
            printf("Celcius");
            scanf("%lf", &temp);
            printf("Fernheit : %lf \n\n", C2F(temp));
        }

        else if(choice == 'f') {
            printf("Celcius");
            scanf("%lf", &temp);
            printf("Fernheit : %lf \n\n", F2C(temp));
        }
        getchar(); // 엔터키 문자를 삭제하기 위하여 필요함.


    }
}
