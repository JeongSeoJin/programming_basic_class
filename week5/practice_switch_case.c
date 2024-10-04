#include <stdio.h>

int main(void) {
    int number = 2;
    switch(number){
        case 0:
            printf("none");
            break;
        case 1:
            printf("1");
            break;
        case 2:
        case 3:
            printf("3");
            break;
        default:
            printf("plenty");
            break;
    }
}

/* 일반적으로 switch case문을 사용할 때에는 되도록이면 break 문으로 끝내야한다.
만일 break 문이 없다면 위의 경우와 같이 case 2가 참이므로 case 2:의 문장들만 출력하지 않고
그 다음 문장인 case 3: 의 문장들도 출력한 후에 break 문으로 끝난다. 때문에 적절하게 사용하여 
코드를 작성하는 것이 중요하다. */