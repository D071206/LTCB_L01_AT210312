#include <stdio.h>

int main() {
    int n, matrix[100][100];

    printf("Nhap kich thuoc ma tran (n): ");
    scanf("%d", &n);

    int value = 1;
    int startRow = 0, endRow = n - 1;
    int startCol = 0, endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol) {
        for (int i = startCol; i <= endCol; i++) {
            matrix[startRow][i] = value++;
        }
        startRow++;

        for (int i = startRow; i <= endRow; i++) {
            matrix[i][endCol] = value++;
        }
        endCol--;

        if (startRow <= endRow) {
            for (int i = endCol; i >= startCol; i--) {
                matrix[endRow][i] = value++;
            }
            endRow--;
        }

        if (startCol <= endCol) {
            for (int i = endRow; i >= startRow; i--) {
                matrix[i][startCol] = value++;
            }
            startCol++;
        }
    }

    printf("Ma tran xoan oc %dx%d:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}