#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    int i;
    printf("Nhap vao 10 so nguyen:\n");
    for (i = 0; i < 10; i++) {
        printf("Nhap so thu %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    printf("\nBan da nhap cac so sau: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nTong cua 10 so da nhap la: %d\n", sum);
    return 0;
}