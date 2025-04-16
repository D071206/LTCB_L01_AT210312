#include <stdio.h>
int main(){
    int a;
    printf("Nhap a");
    scanf("%d",a);
    if(a%2==0 || a%3==0 || a%5==0 ) {
        printf("a la so nguyen to\n");
    } else {
        printf("a khong phai la so nguyen to\n");
    }
    return 0;
} 