#include <stdio.h>
#include <stdlib.h>

int coin_toss(void);

int main(void) {

    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL));

    for(toss=0; toss < 100; toss++) {
        if (coin_toss() == 1) {
            heads += 1;
        }
        else {
            tails += 1;
        }
    }

    printf("head is %d\n", heads);
    printf("tail is %d\n", tails);

    return 0;
}

int coin_toss(void) {
    int head = rand() % 2;
    return head;
}