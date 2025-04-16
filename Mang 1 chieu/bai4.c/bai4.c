#include <stdio.h>

int main() {
    int arr[10];
    int n = 10;
    int max, min, viTriMax, viTriMin;
    printf("Nhap 10 phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    viTriMax = 0;
    viTriMin = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            viTriMax = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            viTriMin = i;
        }
    }
    printf("Phan tu lon nhat: %d, Vi tri: %d\n", max, viTriMax);
    printf("Phan tu be nhat: %d, Vi tri: %d\n", min, viTriMin);

    return 0;
}