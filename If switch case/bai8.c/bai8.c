#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, p, s, v;

    printf("Nhap a, b, c:");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("La tam giac\n");

        if (a == b && b == c) {
            printf("La tam giac deu\n");
        } else if (a == b || a == c || b == c) {
            if (fabs(a * a + b * b - c * c) < 1e-6 || fabs(a * a + c * c - b * b) < 1e-6 || fabs(b * b + c * c - a * a) < 1e-6) {
                printf("La tam giac vuong can\n");
            } else {
                printf("La tam giac can\n");
            }

        } else if (fabs(a * a + b * b - c * c) < 1e-6 || fabs(a * a + c * c - b * b) < 1e-6 || fabs(b * b + c * c - a * a) < 1e-6) {
            printf("La tam giac vuong\n");
        } else {
            printf("La tam giac thuong\n");
        }

        v = a + b + c;
        p = v / 2;
        s = sqrt(p * (p - a) * (p - b) * (p - c));
        printf("Chu vi tam giac la: %f\n", v);
        printf("Dien tich tam giac la: %f\n", s);
    } else {
        printf("Khong phai la tam giac\n");
    }

    return 0;
}