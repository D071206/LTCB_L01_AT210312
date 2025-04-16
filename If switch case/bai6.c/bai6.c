#include <stdio.h>
int main(){
    float a, b, c, d, e, f, g, h, D, Dx, Dy;
    printf("Nhap a, b, c, d, e, f: ");
    scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f); 
    D = a*e -b*d;
    Dx= b*f - c*e;
    Dy=a*f - c*d;
    if (D==0){
        if (Dx==0 && Dy==0){
            printf("Phuong trinh co vo so nghiem");
        }else{
            printf("Phuong trinh vo nghiem");
        }   
    }else{
        float x = Dx/D;
        float y = Dy/D;
        printf("Phuong trinh co 1 nghiem x= %f, y=%f", x, y);
    }
return 0;
}