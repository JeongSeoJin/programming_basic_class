#include <stdio.h>

int get_sum1(int a[], int n);
int get_sum2(int a[], int n);

int main(void) {
    int summation1 = 0, summation2 = 0;
    
    int a[] = {1,2,3,4,5,6,7,8,9};
    summation1 = get_sum1(a, 9);
    summation2 = get_sum2(a, 9);

    printf("%d\n", summation1);
    printf("%d\n", summation2);

    return 0;
}

int get_sum1(int a[], int n) {
    int i;
    int sum = 0;

    for(i = 0; i<n; i++){
        sum += a[i];
    }

    return sum;
}

int get_sum2(int a[], int n) {
    int i;
    int sum = 0;
    int *p;

    p = a;

    for(i = 0; i<n; i++){
        sum += *p++;
    }

    return sum;
}