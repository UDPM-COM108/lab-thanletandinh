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
    
    // BÀI 4: Tính điểm trung bình các điểm toán, Lý, Hoá
    float toan, ly, hoa;
    float dtb;
    printf("\nBÀI 4:Tính điểm trung bình các điểm toán, Lý, Hoá:\n");

    // Nhập điểm các môn
    printf("Nhập điểm môn Toán: ");
    scanf("%f", &toan);

    printf("Nhập điểm môn Lý: ");
    scanf("%f", &ly);

    printf("Nhập điểm môn Hoá: ");
    scanf("%f", &hoa);

    // Tính điểm trung bình có hệ số
    dtb = (toan * 3 + ly * 2 + hoa * 1) / 3;

    // In kết quả
    printf("Diem trung binh 3 mon: %.2f\n", dtb);
    
    // BÀI 5: Tính chu vi, diện tích tam giác vuông
    float a, b, c, chuVi, dienTich;
    printf("\nBÀI 5:Tính chu vi, diện tích tam giác vuông:\n");
    // Nhập độ dài hai cạnh góc vuông
    printf("Nhap do dai canh a: ");
    scanf("%f", &a);

    printf("Nhap do dai canh b: ");
    scanf("%f", &b);

    // Tính cạnh huyền theo định lý Pythagoras
    c = sqrt(a * a + b * b);

    // Tính chu vi: P = a + b + c
    chuVi = a + b + c;

    // Tính diện tích: S = 1/2 * a * b
    dienTich = 0.5 * a * b;

    // In kết quả
    printf("Chu vi tam giac vuong: %.2f\n", chuVi);
    printf("Dien tich tam giac vuong: %.2f\n", dienTich);
    return 0;
}
