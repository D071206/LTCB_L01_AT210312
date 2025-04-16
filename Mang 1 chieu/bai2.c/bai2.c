#include <stdio.h>

int main() {
    int arr[10];
    printf("Nhap 10 phan tu cua mang:\n");
    for (int i = 0; i < 10; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang dao nguoc: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}