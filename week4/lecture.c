// (2 > 3) && ( ++x < 5) --> 이러한 경우 첫번째 피연산자가 거짓이면 다른 연산자는 계산할 필요가 없기에 바로 넘어갈 수 있음.
// -> but, ++x가 연산되지 않고 넘어갈 수 있기 때문에 주의해야한다. 
// (2 < 3) || ( ++x < 5) 이것도 뒤의 ++x가 계산이 되지 않을 수 있으니 주의해야한다. 

// (age >= 25) && (salary >= 3500)

//((year) % 4 ==0) && (year % 100 != 0)) || (year % 400 == 0) // 윤년 계산하는 연산식

#include <stdio.h> 

int main(void) {
    int year, result;
    int x = -9, y = -6, abs_value;
    printf("input year : ");
    scanf("%d", &year);

    result = ((year % 4 ==0) && (year % 100 != 0)) || (year % 400 == 0);
    printf("result = %d \n", result);

    // max min calc
    abs_value = (x>0) ? x : -x; // ? 뒤에는 참이면 x를 대입, 앞의 관계가 거짓이면 -x를 대입. 
    printf("%d\n", abs_value);

    printf("max = %d", (x > y) ? x : y);

    printf("thank"), printf(" you\n");

    // x = abs(-23);
    // printf("%d", x);

    //bit 연산 
    // shift 연산 : 배로 증가 혹은 감소 

    return 0;



}

