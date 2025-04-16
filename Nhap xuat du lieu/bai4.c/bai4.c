#include <stdio.h>

int main(){
    printf("Nhap ban kinh r:");
    float r;
    scanf("%f", &r);
    float s =4*3.14*r*r;
    float v = 4/3*3.14*r*r*r;
    printf("Dien tich hinh tron la:%f\n", s);
    printf("The tich hinh tron la:%f\n", v);
    return 0;   
}