#include <stdio.h>
#include <stdlib.h>

int main(void) {
    srand((unsigned)time(NULL)); // 시간을 seed값으로 이용하여 난수를 발생하겠다는 것.
    int answer = rand() % 100 +  1;
    int val;
    int i = 0;

    do {
        printf("input value : ");
        scanf("%d", &val);
        printf("%d", answer);

        i++;

        if ( val > answer) {
            printf("HIGH\n");
        }

        else if( val < answer) {
            printf("LOW\n");
        }
    } while (val != answer);

    printf("Correct! answer is %d\n", answer);
    printf("And your trial number is %d\n", i);

    return 0;
}