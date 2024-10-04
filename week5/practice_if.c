// 2024.10.1

#include <stdio.h>
#include <math.h>

int main(void) {
    int x;

    /* 표기하지 않음.
    if (x! = 0) -> x가 0이 아닙니다.
    if(x)       -> x가 0이 아닙니다.
    if(x == 0)  -> x가 0입니다.
    if(!x)      -> x가 0입니다.
    */

    //실수와 실수를 비교할 때는 주의해야할 점이 있다.
    double result, realnum;
    if (result == realnum){

    } //이렇게 작성하면 안됨. due to 부동소수점.

    if(fabs(result - realnum) < 0.00001) {

    } //이러한 방식으로 작성을 해야함. -> 오차가 무시할 만한 값이면 '같다'

    // if문 안의 조건식으로 많이 사용되는 수식의 종류 : 논리, 관계문. 

    int score;
    (score >= 60) ? printf("합격") : printf("불합격");

    printf("input grade : ");
    scanf("%d", &score);

    if(score >= 90)
        printf("A\n");
    else if(score >= 80) // else 이면서 조건문 else if 와 if는 동일하지 않음.
        printf("B\n");

    

    return 0;
}