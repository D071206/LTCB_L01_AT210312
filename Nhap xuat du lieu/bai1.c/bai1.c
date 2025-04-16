#include <stdio.h>

int main (){
    float a;
    printf("Nhap gia tri a:");
    scanf("%f", &a);
    float b = a*a;
    float c = a*a*a;
    float d = a*a*a*a;
    printf("Gia tri cua X^2: %f, X^3: %f, X^4:%f la: ",b,c,d);

    return 0;
}