#include <stdio.h>

int main() {
    int matrix1[3][2], matrix2[2][3], result[3][3];

    printf("Nhap ma tran 1 (3x2):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Nhap ma tran 2 (2x3):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matrix2[%d][%d] = ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Tich hai ma tran:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}