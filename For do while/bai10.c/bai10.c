#include <stdio.h>

long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    long long fib_n_minus_1 = 1;
    long long fib_n_minus_2 = 0;
    long long fib_n;
    for (int i = 2; i <= n; i++) {
        fib_n = fib_n_minus_1 + fib_n_minus_2;
        fib_n_minus_2 = fib_n_minus_1;
        fib_n_minus_1 = fib_n;
    }
    return fib_n;
}

int main() {
    int n;
    printf("Nhập số n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("n phải là số không âm.\n");
    } else {
        printf("Số Fibonacci thứ %d là: %lld\n", n, fibonacci(n));
    }
    return 0;
}