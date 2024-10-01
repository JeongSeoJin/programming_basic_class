//24, September, 2024

int main(void) {
    int product, take, change;
    int M5, M1, M100;

    printf("the product : ");
    scanf("%d", &product);
    printf("take : ");
    scanf("%d", &take);

    change = take - product;

    M5 = change / 5000;

    printf("%d\n", change);
    M1 = (change - M5*5000) / 1000;
    M100 = (change - (M1 * 1000 + M5 * 5000)) / 100;

    printf("the change is 5000 : %d, 1000 : %d, 100 : %d\n", M5, M1, M100);

    // x += y;
    // printf("%d",x);
    // x =+ y;
    // printf("%d",x);

    return 0;

}