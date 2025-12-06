#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Hàm kiểm tra nguyên âm
int laNguyenAm(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Bài 1: Đếm nguyên âm và phụ âm
void bai1() {
    char str[100];
    int nguyenAm = 0, phuAm = 0;

    printf("Nhập vào một chuỗi: ");
    fflush(stdin);
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { // chỉ xét ký tự chữ cái
            if (laNguyenAm(str[i]))
                nguyenAm++;
            else
                phuAm++;
        }
    }

    printf("Số nguyên âm: %d\n", nguyenAm);
    printf("Số phụ âm: %d\n", phuAm);
}

// Bài 2: Đăng nhập
void bai2() {
    char username[50], password[50];
    char correctUser[] = "admin";
    char correctPass[] = "12345";

    printf("Nhập username: ");
    fflush(stdin);
    fgets(username, sizeof(username), stdin);
    username[strcspn(username, "\n")] = '\0'; // bỏ ký tự xuống dòng

    printf("Nhập password: ");
    fflush(stdin);
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    if (strcmp(username, correctUser) == 0 && strcmp(password, correctPass) == 0) {
        printf("Đăng nhập thành công!\n");
    } else {
        printf("Đăng nhập không thành công!\n");
    }
}

int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Đếm nguyên âm và phụ âm\n");
        printf("2. Đăng nhập\n");
        printf("0. Thoát\n");
        printf("Chọn chức năng: ");
        scanf("%d", &choice);
        getchar(); // loại bỏ ký tự Enter còn lại

        switch (choice) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 0:
                printf("Thoát chương trình.\n");
                exit(0);
                break;
            default:
                printf("Lựa chọn không hợp lệ!\n");
        }
    } while (choice != 0);

    return 0;
}