#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void) {
    char ans1;
    int ans2;
    int i;
    int seats[SIZE] = {0};

    printf("do you want to reserve? (y/n) ");

    while (1) {
        scanf(" %c", &ans1); //scanf사용 시에 " %c"로 작성 (주의해야할 것)

        if (ans1 == 'n') {
            break;
        }

        if (ans1 == 'y') {
            printf("-------------------------------\n");
            printf(" 1  2  3  4  5  6  7  8  9  10\n");
            printf("-------------------------------\n");

            for(i = 0; i < SIZE; i++) {
                printf(" %d ", seats[i]);
            }
            printf("\n");

            // 두 명이 예약할 수 있도록 입력 및 자리 표시
            for(int j = 0; j < 2; j++) {
                printf("Choose your seat number (1-10): ");
                scanf("%d", &ans2);

                if (ans2 < 1 || ans2 > SIZE) {
                    printf("Invalid seat number. Try again.\n");
                    j--;
                } else if (seats[ans2 - 1] == 1) {
                    printf("Seat already reserved. Choose another.\n");
                    j--;
                } else {
                    seats[ans2 - 1] = 1;
                    printf("Seat %d reserved.\n", ans2);
                }
            }
        }

        printf("do you want to reserve again? (y/n) ");
    }

    return 0;
}
