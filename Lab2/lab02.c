#include <stdio.h>
#include <math.h>

void bai1() {
    int x, y;
    printf("Nhập số nguyên x: ");
    scanf("%d", &x);
    printf("Nhập số nguyên y: ");
    scanf("%d", &y);
    printf("Tổng hai số là: %d\n", x + y);
    printf("Hiệu hai số là: %d\n", x - y);
}

void bai2() {
    float cdai, crong;
    printf("Nhập chiều dài: ");
    scanf("%f", &cdai);
    printf("Nhập chiều rộng: ");
    scanf("%f", &crong);
    float chuvi = 2 * (cdai + crong);
    float dientich = cdai * crong;
    printf("Chu vi hình chữ nhật là: %.2f\n", chuvi);
    printf("Diện tích hình chữ nhật là: %.2f\n", dientich);
}

void bai3() {
    float r;
    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &r);
    float chuviHT = 2 * M_PI * r;
    float dientichHT = M_PI * r * r;
    printf("Chu vi hình tròn là: %.2f\n", chuviHT);
    printf("Diện tích hình tròn là: %.2f\n", dientichHT);
}

int main() {
    int chon;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Bài 1: Cộng và trừ hai số nguyên\n");
        printf("2. Bài 2: Tính chu vi và diện tích hình chữ nhật\n");
        printf("3. Bài 3: Tính chu vi và diện tích hình tròn\n");
        printf("0. Thoát\n");
        printf("Chọn bài làm (0-3): ");
        scanf("%d", &chon);

        switch (chon) {
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
                printf("Kết thúc chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
        }
    } while (chon != 0);

    return 0;
}