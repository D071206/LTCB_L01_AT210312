#include <stdio.h>
void gopMang(int arr1[], int n1, int arr2[], int n2, int arr3[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        arr3[k++] = arr1[i++];
    }

    while (j < n2) {
        arr3[k++] = arr2[j++];
    }
}

int main() {
    int arr1[100], arr2[100], arr3[200];
    int n1, n2;
    printf("Nhap so luong phan tu cua mang 1: ");
    scanf("%d", &n1);
    printf("Nhap %d phan tu cua mang 1 (da sap xep tang dan):\n", n1);
    for (int i = 0; i < n1; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Nhap so luong phan tu cua mang 2: ");
    scanf("%d", &n2);
    printf("Nhap %d phan tu cua mang 2 (da sap xep tang dan):\n", n2);
    for (int i = 0; i < n2; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    gopMang(arr1, n1, arr2, n2, arr3);
    printf("Mang sau khi gop va sap xep tang dan: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}