#define SIZE 3
int get_array_sum(int *p, int n);

int main(void) {
    int expense[SIZE] = {100, 200, 200};
    printf("%d\n", get_array_sum(expense, SIZE));
}

int get_array_sum(int *p, int n) {
    int i, result = 0;
    for (i = 0; i < n; i ++) {
        result += p[i];
    }

    return result;
}