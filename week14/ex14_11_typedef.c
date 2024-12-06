#include  <stdio.h>

//* unsigned char이라는 것을 BYTE라는 이름으로 다시 정의한 것.
typedef unsigned char BYTE;
BYTE index; // -> unsigned char index와 같다.

// C에서 int형은 CPU에 따라 2바이트이기도하고 4바이트이기도 하므로 이를 확실히 하기 위해서 기본 자료형을 재정의한 것.
typedef int INT32;
typedef short INT16;


// typedef struct point POINT {
//     INT32 a;
//     INT16 b;
// };


// #################### [Method 1] ####################
//* 구조체를 정의하고 이를 새로운 자료형으로 정의하기 위해서는 위에 주석처리한 것처럼 그냥 작성하면 안됨.
//* 먼저 자료형을 정의하고난 후에 typedef를 이용해서 새로운 자료형을 정의해주어야 함.
struct point {
    INT32 a;
    INT16 b;
};

//* struct point라는 data type을 POINT라는 새로운 자료형으로 정의한 것.
typedef struct point POINT; // 구조체의 별칭을 정의


// #################### [Method 2] ####################
//* 한 번에 정의하는 방법.
typedef struct complex{
    double real;
    double imag;
} COMPLEX;

typedef enum {FALSE, TURE} BOOL;
BOOL condition;


typedef char * STRING_PTR;
STRING_PTR p; //* char *p 와 동일 

int main(void) {

    POINT a, b;
    a.a = 10;
    printf("%d\n", a.a);

    COMPLEX x = {234.22, -9823};
    struct complex y = {1.2, -12.2};
    printf("y.imag = %lf\n", y.imag);
    printf("x.real = %lf\n\n", x.real);

    return 0;
}