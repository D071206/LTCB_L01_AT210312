#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char tenHang[50];
    float donGia;
    int soLuong;
    float thanhTien;
} MatHang;

void nhapSoLieu(MatHang *matHang, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin mat hang thu %d:\n", i + 1);
        printf("Ten hang: ");
        scanf(" %[^\n]s", matHang[i].tenHang);
        printf("Don gia: ");
        scanf("%f", &matHang[i].donGia);
        printf("So luong: ");
        scanf("%d", &matHang[i].soLuong);
        matHang[i].thanhTien = matHang[i].donGia * matHang[i].soLuong;
    }
}

void inSoLieu(MatHang *matHang, int n) {
    printf("%-5s %-20s %-10s %-10s %-10s\n", "STT", "Ten Hang", "Don gia", "So luong", "Thanh tien");
    float tongTien = 0;
    for (int i = 0; i < n; i++) {
        printf("%-5d %-20s %-10.2f %-10d %-10.2f\n", i + 1, matHang[i].tenHang, matHang[i].donGia, matHang[i].soLuong, matHang[i].thanhTien);
        tongTien += matHang[i].thanhTien;
    }
    printf("%45s %.2f\n", "Tong tien", tongTien);
}

int soSanhTenHang(const void *a, const void *b) {
    return strcmp(((MatHang *)a)->tenHang, ((MatHang *)b)->tenHang);
}

void sapXepTheoTenHang(MatHang *matHang, int n) {
    qsort(matHang, n, sizeof(MatHang), soSanhTenHang);
}

int main() {
    int n;

    printf("Nhap so luong mat hang: ");
    scanf("%d", &n);

    MatHang *matHang = (MatHang *)malloc(n * sizeof(MatHang));

    nhapSoLieu(matHang, n);

    printf("\nSO LIEU BAN HANG (Ban dau):\n");
    inSoLieu(matHang, n);

    sapXepTheoTenHang(matHang, n);
    printf("\nSO LIEU BAN HANG (Sau khi sap xep):\n");
    inSoLieu(matHang, n);
    free(matHang);

    return 0;
}