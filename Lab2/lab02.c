#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
    //BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    int x, y;
    printf("BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ:\n");
    printf("Nhập số nguyên x: ");
    scanf("%d", &x);
    printf("Nhập số nguyên y: ");
    scanf("%d", &y);
    printf("Tổng hai số là: %d\n", x + y);
    printf("Hiệu hai số là: %d\n", x - y);

    //BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    float cdai, crong;
    printf("\nBÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN:");
    printf("\nNhập chiều dài: ");
    scanf("%f", &cdai);
    printf("Nhập chiều rộng: ");
    scanf("%f", &crong);
    float chuvi = 2 * (cdai + crong);
    float dientich = cdai * crong;
    printf("Chu vi hình chữ nhật là: %.2f\n", chuvi);
    printf("Diện tích hình chữ nhật là: %.2f\n", dientich);

    //Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    float r;
    printf("\nBài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN:");
    printf("\nNhập bán kính hình tròn: ");
    scanf("%f", &r);
    float chuviHT = 2 * PI * r;
    float dientichHT = PI * r * r;
    printf("Chu vi hình tròn là: %.2f\n", chuviHT);
    printf("Diện tích hình tròn là: %.2f\n", dientichHT);

    return 0;
}