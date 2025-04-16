#include <stdio.h>

int main(){
    int a,b;
    printf("Nhap a va b:");
    scanf("%d", &a);
    scanf("%d", &b);
    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b;
    int g = a%b;
    printf("Tong: %d, Hieu:%d, Tich: %d, Thuong:%d, Du:%d", c, d ,e, f, g);
    return 0;
}