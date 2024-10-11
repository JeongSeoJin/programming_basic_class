#include <stdio.h>

int main(void) {
    int sum = 0;
    for (int i = 0; i < 11; i++) {
        sum += i;
    }
    printf("Summation is %d\n", sum);

    //////////////////////////////

    int num;

    printf("input value : ");
    scanf("%d", &num);
    printf("n    three squared\n");

    for (int i = 1; i < num+1; i++) {
        printf("%5d     %5d\n", i, i*i*i); // 필드폭을 5로 설정해서 가운데 정렬이 가능하도록 함.
    }

    /////////////////////factorial /////////////////

    long fact = 1;
    int i, n;

    printf("input value : ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("In for : %d factorial is %ld\n", n, fact);

    ///////////// for 2 while //////////////
    
    long fact1 = 1;
    i = 1;
    while(i <= n) {
        fact1 = fact1 * i;
        i ++;
    }

    printf("In while : %d factorial is %ld\n", n, fact1);
    //these are same as we expected. 


}