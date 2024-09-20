//18, December, 2024

#include <stdio.h>

int main(void) {
    int x;
    printf("size of variable x : %d\n", sizeof(x));

    short year = 0;
    int sale = 0;
    long total_sale = 0L;

    year = 10; //약 3만2천을 넘지 않도록 주의
    sale = 200000000;  // 약 21억을 넘지 안도록 해야함. 
    total_sale = year * sale; // 약 21억을 넘지 안도록 해야함. 

    printf("total_sale = %d\n", total_sale);

    unsigned short valid_a = 60000;
    short unvalid_b = 60000;

    unsigned int c = 4000000000;
    printf("c : %d\n", c); //unsigned형 변수를 출력할 경우에는 형식 지정자로 %u를 사용해야한다. 값이 약 21억이 넘어가면 음수로 출력되기 때문이다. 
    printf("c : %u\n", c); // unsigned 수식자를 통해 0부터 2^32 -1까지표현할 수 있도록 범위가 확장됨 

    printf("a, b = %d, %d\n", valid_a, unvalid_b); // unsigned 수식자를 이용해서 표현할 수 있는 비트를 약 2배 증가시켰다.

    return 0;
}

