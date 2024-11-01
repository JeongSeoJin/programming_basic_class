#include <stdio.h>
#include <stdlib.h>
// #include <windows.h>
#include <time.h>
#include <unistd.h>


void disp_car(int car_num, int dist);

int main(void) {
    int i;
    int car1_dist = 0, car2_dist = 0;

    srand((unsigned)time(NULL));

    for (i = 0; i < 20; i ++) {
        system("clear");
        car1_dist = rand() % 100;
        car2_dist = rand() % 100;
        disp_car(1, car1_dist);
        disp_car(2, car2_dist);
        sleep(1);
    }
}

void disp_car(int car_num, int dist) {
    int i;
    printf("Car #%d:", car_num);
    for(i = 0; i < dist/10; i ++) {
        printf("*");
    }
    printf("\n");
}