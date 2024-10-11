#include <stdio.h>

int main(void) {
    float ori = 1;
    int i = 0;

    while(1) {
        printf("%.3f\n", ori);
        ori *= 0.5;

        if(ori < 0.01) {
            break;
        }
        i++;
    }
    printf("%.40f\n", ori);
    printf("종이를 %d번 접어야 원래 면적의 1/100으로 줄어듭니다.", i+1);
}