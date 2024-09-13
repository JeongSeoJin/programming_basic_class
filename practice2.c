/*주석 처리 기능*/
/*여러 줄로
주석을 사용할 때 가능*/

//한 줄 주석
// 주석은 코드를 작성한 의도를 명확히 나타내는 것이 중요하다. 한 줄 한 줄 주석을 작성한다고 좋은 주석은 아니다

/*
들여쓰기는 하지 않아도 컴파일은 됨 -> 가독성 때문.
함수 안에는 작업의 세부 단계인 문장이 들어있다.
return 은 함수를 종료 및 값을 반환하는 키워드 -> 약속된 용어.
운영체제가 main함수를 호출 그리고 main이 printf호출 다시 운영체제로 돌아옴.
변수 : 프로그램이 사용하는 데이터를 일시적으로 저장할 목적으로 사용하는 메모리 공간.
자료형 : 변수가 저장할 데이터가 정수인지 실수인지 아니면 또 다른 어떤 데이터인지를 지정하는 것 -> 바이트가 클수록 저장공간이 늘어남.
표준 자료형 : 정수형, 부동소수점형, 문자형.
변수 선언 : 컴파일러에게 어떠한 변수를 사용할지 미리 알려주는 것.
변수를 선언할 때에는 초기 값을 넣어주는 것이 좋음 -> 메모리 공간에 이전에 사용했던 변수의 데이터값(쓰레기 값)이 있을 수 있기 떼문에.

중간정검 -> 최신버전 컴파일러라면 함수 안에서 변수 선언 가능.
변수와 함수의 이름이 모두 식별자의 일종이다.
문제 중 키워드 -> 다음으로 식별자로 사용할 수 없는 이름은?

*/

#include <stdio.h>
// #include _CRT_SECURE_NO_WARNINGS -> linux는 사용하지 않아도 된다.

// int width=10, height=10;
// int width, height=10; //heigth에만 값이 지정됨

// X=10; // = 는 대입연산 = 배정연산 = 치환연
// //10을 상수 혹은 literal data라고도 함.

int x=20, y=10;

int main(void) {
    printf("%10d\n", 123); //field 폭을 10으로 만들고 우측으로 정렬

    printf("sum : %d\n", x+y);
    printf("sub : %d\n", x-y);
    printf("mul : %d\n", x*y);
    printf("div : %d\n", x/y); // %d 는 형식 지정자

    // +++ &연산자 : 변수이름 앞에 &를 입력해주면 변수의 주소를 의미한다.

    //float는 %f , double은 무조건 %lf

    //정수값을 받아서 출력하는 프로그램
    int i;
    printf("input integer : ");
    scanf("%d", &i); //그냥 scanf를 사용한다면 안전하지 않으니 scanf_s를 이용해야한다.

    //double 자료형의 사용
    double value;
    printf("input value : ");
    scanf("%lf", &value);

    //원의 면적 계산해주는 프로그램
    float r;
    printf("input radius of circle : ");
    scanf("%f", &r);
    printf("the area of circle is %f", 3.14*(r*r));

    return 0;
}

//field 폭과 정밀도 내용 전공책 106페이지 중간고사 시험 내용

