#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    printf("Nhap gia tri n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Khong the tinh phan tu Fibonacci cho so am.\n");
    } else {
        printf("Phan tu thu %d trong day Fibonacci la: %d\n", n, fibonacci(n));
    }

    return 0;
}