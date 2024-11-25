#include <stdio.h>
#define SIZE 5

void translate_image1(int *pointer_);
void translate_image2(int frame[SIZE][SIZE]);
void print_image(int *pointer_);

int main(void) {
    int frame[SIZE][SIZE] = { 
        {10, 20, 30, 40, 50}, 
        {11, 21, 31, 41, 51},
        {12, 22, 32, 42, 52},
        {13, 23, 33, 43, 53},
        {14, 24, 34, 44, 54}};

    int *p = NULL; // NULL pointer로 정의
    p = frame;

    // printf("%d\n", p);
    // printf("%d\n\n", *p);
    // 이렇게 실행했을 때 *p의 값이 10이 나오는 것은 배열의 첫 번째 요소의 주소와 포인터가 가리키는 주소(배열의 주소)가 같기 때문

    // for (int i = 0; i < SIZE; i ++) {
    //     for (int j = 0; j < SIZE; j++) {
    //         // printf("%d", *p++);
    //         printf("%d ", frame[i][j]);
    //     }
    //     printf("\n");
    // }

    printf("[Before increasing values]\n");
    print_image(p);
    translate_image1(p);
    printf("[After increasing values]\n");
    print_image(p);
    translate_image2(frame);
    printf("[Using another method]\n");
    print_image(p);
    
    return 0;
}

void print_image(int *pointer_) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", *pointer_++);
        }
        printf("\n");
    }
}

void translate_image1(int *pointer_) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (j == 0) {
                *pointer_ = *pointer_ + 10;
            }
            *pointer_ = *++pointer_ + 10;
        }
        printf("\n");
    }
}

void translate_image2(int frame[SIZE][SIZE]) {
    int *p = NULL;
    p = frame;
    // p = &frame[0][0]; another method

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            *p = *p + 10;
            p++;
        }
        printf("\n");
    }
}