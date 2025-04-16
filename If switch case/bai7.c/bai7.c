#include <stdio.h>
int main(){
    int a;
    printf("Nhap a: ");
    scanf("%d", &a);
    if (a < 5) {
        printf("Diem trung binh");
    } else if (a >= 5 && a <= 7) { 
        printf("Diem kha");
    } else if (a > 8 && a <= 9) {
        printf("Diem gioi");
    } else if (a > 9 && a <= 10) {
        printf("Diem xuat sac");
    } else {
        printf("Gia tri khong hop le");
    }
}