#include <stdio.h>

int save(int amount);

int main(void) {
    printf("입금\t출금\t잔고\n");
    printf("========================\n");
    save(10000);
    save(60000);
    save(500);
    save(-3000);
    printf("========================\n");

    return 0;
}

int save(int amount) {
    static int balance = 0; // static으로 작성을 해야지 초기화를 한 번만 함.
    if (amount > 0) {
        printf("%d\t\t", amount);
    }
    else {
        printf("\t%d\t", -amount);
    }

    balance += amount;
    printf("%d\n", balance);

}