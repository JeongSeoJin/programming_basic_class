#include <stdio.h>
#include <stdlib.h>

void getSensorData(double *p);


int main(void) {

    double sensorData[3];
    getSensorData(sensorData); // 배열의 이름은 근본적으로 포인터의 개념과 같다.

    printf("distance between obstacles and left sensor : %4.2lf \n", sensorData[0]);
    printf("distance between obstacles and center sensor : %4.2lf \n", sensorData[1]);
    printf("distance between obstacles and right sensor : %4.2lf \n", sensorData[2]);

    return 0;
}

void getSensorData(double *p) {

    srand((unsigned)time(NULL));
    
    for (int i = 0; i < 3; i ++) {
        *p = rand() % 101;
        p += 1;
        // printf("%lf", *p);
    }
}

// 다시 제출로 제목 작성