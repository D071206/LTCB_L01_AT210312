#include <stdio.h>
#include <stdlib.h>

void nhapDaThuc(int *heSo, int bac) {
    printf("Nhap he so cua da thuc:\n");
    for (int i = bac; i >= 0; i--) {
        printf("He so x^%d: ", i);
        scanf("%d", &heSo[i]);
    }
}

int tinhGiaTriDaThuc(int *heSo, int bac, int x) {
    int giaTri = 0;
    for (int i = bac; i >= 0; i--) {
        giaTri = giaTri * x + heSo[i];
    }
    return giaTri;
}

void inDaThuc(int *heSo, int bac) {
    printf("Da thuc: ");
    for (int i = bac; i >= 0; i--) {
        printf("%dx^%d ", heSo[i], i);
        if (i > 0) {
            printf("+ ");
        }
    }
    printf("\n");
}

int main() {
    int bacP, bacQ, x;

    printf("Nhap bac cua da thuc P: ");
    scanf("%d", &bacP);

    int *heSoP = (int *)malloc((bacP + 1) * sizeof(int));

    nhapDaThuc(heSoP, bacP);

    printf("Nhap bac cua da thuc Q: ");
    scanf("%d", &bacQ);

    int *heSoQ = (int *)malloc((bacQ + 1) * sizeof(int));
    nhapDaThuc(heSoQ, bacQ);
    printf("Nhap gia tri x: ");
    scanf("%d", &x);
    int bacT = (bacP > bacQ) ? bacP : bacQ;
    int *heSoT = (int *)malloc((bacT + 1) * sizeof(int));
    for (int i = 0; i <= bacT; i++) {
        heSoT[i] = 0;
        if (i <= bacP) {
            heSoT[i] += heSoP[i];
        }
        if (i <= bacQ) {
            heSoT[i] += heSoQ[i];
        }
    }
    inDaThuc(heSoP, bacP);
    inDaThuc(heSoQ, bacQ);
    inDaThuc(heSoT, bacT);
    printf("Gia tri x: %d\n", x);
    printf("Gia tri P(%d): %d\n", x, tinhGiaTriDaThuc(heSoP, bacP, x));
    printf("Gia tri Q(%d): %d\n", x, tinhGiaTriDaThuc(heSoQ, bacQ, x));
    printf("Gia tri T(%d): %d\n", x, tinhGiaTriDaThuc(heSoT, bacT, x));
    free(heSoP);
    free(heSoQ);
    free(heSoT);

    return 0;
}