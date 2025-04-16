#include <stdio.h>

int main() {
    int arr[10];
    int n = 10;
    printf("Nhap 10 phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
    printf("Mang sau khi thay the: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}