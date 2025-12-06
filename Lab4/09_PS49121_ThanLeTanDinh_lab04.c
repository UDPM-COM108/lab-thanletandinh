#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Bài 1: Tính trung bình tổng các số chia hết cho 2 từ min đến max
void bai1() {
    int min, max, i;
    float tong = 0, bienDem = 0, trungBinh = 0;

    printf("Nhập giá trị min: ");
    scanf("%d", &min);
    printf("Nhập giá trị max: ");
    scanf("%d", &max);

    i = min;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }

    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("Trung bình tổng các số chia hết cho 2 từ %d đến %d là: %.2f\n", min, max, trungBinh);
    } else {
        printf("Không có số nào chia hết cho 2 trong khoảng từ %d đến %d.\n", min, max);
    }
}

// Bài 2: Xác định số nguyên tố
void bai2() {
    int x, count = 0, i;

    printf("Nhập một số nguyên: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("%d không phải là số nguyên tố.\n", x);
        return;
    }

    for (i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0) {
        printf("%d là số nguyên tố.\n", x);
    } else {
        printf("%d không phải là số nguyên tố.\n", x);
    }
}

// Bài 3: Xác định số chính phương
void bai3() {
    int x, i, laChinhPhuong = 0;

    printf("Nhập một số nguyên: ");
    scanf("%d", &x);

    for (i = 1; i * i <= x; i++) {
        if (i * i == x) {
            laChinhPhuong = 1;
            break;
        }
    }

    if (laChinhPhuong) {
        printf("%d là số chính phương.\n", x);
    } else {
        printf("%d không phải là số chính phương.\n", x);
    }
}

// Menu chương trình
int main() {
    int luaChon;

    do {
        printf("\n--- CHƯƠNG TRÌNH TỔNG HỢP ---\n");
        printf("1. Tính trung bình tổng các số chia hết cho 2\n");
        printf("2. Kiểm tra số nguyên tố\n");
        printf("3. Kiểm tra số chính phương\n");
        printf("0. Thoát\n");
        printf("Lựa chọn của bạn: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 0:
                printf("Thoát!\n");
                exit(0);
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
        }
    } while (luaChon != 0);

    return 0;
}