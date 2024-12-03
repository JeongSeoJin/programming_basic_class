#include <stdio.h>

void encrypt(char cipher[], int shift);

int main(void) {
    char cipher[50];
    int shift = 3;
    printf("input string : ");
    gets(cipher, 50); 
    encrypt(cipher, shift);
    return 0;
}

void encrypt(char cipher[], int shift) { // 배열의 경우 원본이 변함.
    int i = 0;
    while(cipher[i] != NULL) {
        if (cipher[i] >= 'A' && cipher[i] <= 'z') {
            cipher[i] += shift;
            if(cipher[i] >= 'z')
                cipher[i] -= 26;
        }
        i ++;
    }
    printf("encrypted string : %s", cipher);
}
