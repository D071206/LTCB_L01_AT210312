#include <stdio.h>
#include <math.h>
double luyThua(double x, int y) {
    return pow(x, y);
}

int main() {
    double x;
    int y;
    printf("Nhap gia tri x: ");
    scanf("%lf", &x);
    printf("Nhap gia tri y: ");
    scanf("%d", &y);
    printf("%lf^%d = %lf\n", x, y, luyThua(x, y));

    return 0;
}