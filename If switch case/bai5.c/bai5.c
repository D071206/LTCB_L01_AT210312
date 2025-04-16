#include <stdio.h>
#include <math.h>

int main(){
    printf("Nhap a,b,c:");
    float a,b,c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float d = b*b-4*a*c;
    if (d<0){
        printf("Phuong trinh vo nghiem");
    }else if (d==0){
        float x = -b/(2*a);
        printf("phuong trinh co 1 nghiem x= %f",x);
    }else{
        float e = sqrt(d);
        float f = (-b + e) / (2 * a);
        float g = (-b - e) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet x1= %f, x2=%f", f, g);
    }
    return 0;

}