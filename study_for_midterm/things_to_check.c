// printf("%5d     %5d\n", i, i*i*i); // 필드폭을 5로 설정해서 가운데 정렬이 가능하도록 함. --> 우측으로 정렬은?? V
// about data type of getchar() function
// bit operator
// order of operator
// scanf 사용 시에 변수의 데이터 타입 V
// week4/ten2two.c
// \a , \b  같은 역슬래시 연산자들 체크 V
// 필드폭은 소수점만..? V
#include <stdio.h>

int main(void) {
    double x = 9710.23;
    printf("%.4f\n", x);

    int i = !0;
    int result;
    printf("%d\n", i);

    result = (2>3)&&(i++ < 4);

    printf("%d\n", result);
    printf("%d\n", i);

    float a = 1e39;

    printf("a = %f\n", a);

    int k = 1, h = 2;
    (k < h) ? printf("yes\n") : printf("no..\n");

    return 0;

}

//정수 부분의 필드폭을 지정해주지 않으면 자동적으로 기존의 값이 가지고 있는 자리수에 맞추어 필드폭 생성
// 임의로 기존의 필드폿보다 더 큰 크기의 필드폭을 설정해줄 경우 자동적으로 우측 정렬

//double 형은 입력받을 때 무조건 %lf가 원칙