#include <stdio.h>

int main(void) {
    int i=1, n;

    printf("whate phase : ");
    scanf("%d", &n);

    while (i <= 9) {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }

    int j = 1, sum = 0, num;

    printf("언제까지 더할 것인가요? : ");
    scanf("%d", &num);

    while(j <= num) {
        if(j%2 == 0) {
            sum += j;
        }
        j++;
    }

    printf("summation is %d\n", sum);

    return 0;
}

// 0아닌 값들은 모두 참 -> 음수도 참.