#include <stdio.h>

int main() {
    int matrix[3][3];

    printf("Truong hop 1: Khai bao gia tri truc tiep\n");
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    printf("\nTruong hop 2: Nhap gia tri tu ban phim\n");
    printf("Nhap cac phan tu cua ma tran 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran vua nhap:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}