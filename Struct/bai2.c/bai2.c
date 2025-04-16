#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct SinhVien {
    char hoTen[50];
    int tuoi;
    float diemTB;
    struct SinhVien *next;
} SinhVien;

SinhVien *taoNodeSinhVien(char hoTen[], int tuoi, float diemTB) {
    SinhVien *newNode = (SinhVien *)malloc(sizeof(SinhVien));
    strcpy(newNode->hoTen, hoTen);
    newNode->tuoi = tuoi;
    newNode->diemTB = diemTB;
    newNode->next = NULL;
    return newNode;
}

void inDanhSachSinhVien(SinhVien *head) {
    printf("%-5s %-20s %-5s %-10s\n", "STT", "Ho ten", "Tuoi", "Diem TB");
    int stt = 1;
    SinhVien *current = head;
    while (current != NULL) {
        printf("%-5d %-20s %-5d %-10.2f\n", stt++, current->hoTen, current->tuoi, current->diemTB);
        current = current->next;
    }
}

void chenSinhVien(SinhVien **head, char hoTenMoi[], int tuoiMoi, float diemTBMoi, char hoTenTruoc[]) {
    SinhVien *newNode = taoNodeSinhVien(hoTenMoi, tuoiMoi, diemTBMoi);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    if (strcmp((*head)->hoTen, hoTenTruoc) == 0) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    SinhVien *current = *head;
    while (current->next != NULL && strcmp(current->next->hoTen, hoTenTruoc) != 0) {
        current = current->next;
    }

    if (current->next == NULL) {
        printf("Khong tim thay sinh vien co ten %s.\n", hoTenTruoc);
    } else {
        newNode->next = current->next;
        current->next = newNode;
    }
}

void xoaSinhVien(SinhVien **head, char hoTenXoa[]) {
    if (*head == NULL) {
        return;
    }

    if (strcmp((*head)->hoTen, hoTenXoa) == 0) {
        SinhVien *temp = *head;
        *head = (*head)->next;
        free(temp);
        return;
    }

    SinhVien *current = *head;
    while (current->next != NULL && strcmp(current->next->hoTen, hoTenXoa) != 0) {
        current = current->next;
    }

    if (current->next == NULL) {
        printf("Khong tim thay sinh vien co ten %s.\n", hoTenXoa);
    } else {
        SinhVien *temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
}

int main() {
    SinhVien *head = NULL;

    chenSinhVien(&head, "Nguyen Van A", 20, 7.5, "");
    chenSinhVien(&head, "Tran Thi B", 21, 8.0, "Nguyen Van A");
    chenSinhVien(&head, "Le Van C", 22, 6.5, "Tran Thi B");

    printf("DANH SACH SINH VIEN (Ban dau):\n");
    inDanhSachSinhVien(head);

    chenSinhVien(&head, "Pham Thi D", 20, 9.0, "Tran Thi B");

    printf("\nDANH SACH SINH VIEN (Sau khi chen):\n");
    inDanhSachSinhVien(head);

    xoaSinhVien(&head, "Le Van C");

    printf("\nDANH SACH SINH VIEN (Sau khi xoa):\n");
    inDanhSachSinhVien(head);

    SinhVien *current = head;
    while (current != NULL) {
        SinhVien *temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}