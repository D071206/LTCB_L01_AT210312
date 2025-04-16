#include <stdio.h>

void doiCoSo(int n, int a) {
    int remainder;
    char result[100];
    int i = 0;

    while (n > 0) {
        remainder = n % a;
        if (remainder < 10) {
            result[i++] = remainder + '0';
        } else {
            result[i++] = remainder - 10 + 'A';
        }
        n /= a;
    }
    printf("Dang bieu dien o co so %d: ", a);
    for (int j = i - 1; j >= 0; j--) {
        printf("%c", result[j]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &n);
    doiCoSo(n, 2);
    doiCoSo(n, 8);
    doiCoSo(n, 16);

    return 0;
}