#include <stdio.h>

int main() {
    int arr[10];
    int n = 10;
    int tong = 0, tongDuong = 0, tongAm = 0;
    int demDuong = 0, demAm = 0;
    printf("Nhap 10 phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        tong += arr[i];
        if (arr[i] > 0) {
            tongDuong += arr[i];
            demDuong++;
        } else if (arr[i] < 0) {
            tongAm += arr[i];
            demAm++;
        }
    }
    printf("Tong cac so trong mang: %d\n", tong);

    if (demDuong > 0) {
        printf("Tong cac so duong: %d\n", tongDuong);
        printf("Trung binh cong cac so duong: %.2f\n", (float)tongDuong / demDuong);
    } else {
        printf("Khong co so duong trong mang.\n");
    }

    if (demAm > 0) {
        printf("Tong cac so am: %d\n", tongAm);
        printf("Trung binh cong cac so am: %.2f\n", (float)tongAm / demAm);
    } else {
        printf("Khong co so am trong mang.\n");
    }

    printf("Trung binh cong ca mang: %.2f\n", (float)tong / n);

    return 0;
}