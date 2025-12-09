#include <stdio.h>
#include <string.h>
#include <conio.h>
struct sinhvien {
    int maSV;
    char hoten[50];
    float diem;
    char hocluc[10];
};

int main()
{
    struct sinhvien SV1;
    printf("Nhap ma sinh vien: ");
    scanf("%d", &SV1.maSV);
    printf("Nhap ho va ten cua sinh vien: ");
    fflush(stdin); // Xóa bộ đệm nếu cần (tránh lỗi khi dùng sau scanf)
    fgets(SV1.hoten, sizeof(SV1.hoten), stdin);
    SV1.hoten[strcspn(SV1.hoten, "\n")] = '\0';
    getch();
    printf("Nhap so diem cua sinh vien: ");
    scanf("%f",&SV1.diem);
    // hoc luc
    if (SV1.diem >= 9){
        strcpy(SV1.hocluc, "Xuất Sắc");
    }else if (SV1.diem >= 8 && SV1.diem < 9){
        strcpy(SV1.hocluc, "Giỏi");
    }else if (SV1.diem >= 7 && SV1.diem <8){
        strcpy(SV1.hocluc, "Khá");
    }else if (SV1.diem >= 5 && SV1.diem <7){
        strcpy(SV1.hocluc, "Trung Bình");
    }else if (SV1.diem >= 3 && SV1.diem <5)
        strcpy(SV1.hocluc, "Yếu");
    // Xuat thong tin sinh vien
    printf("Ma SV: %d\nHo ten: %s\nDiem: %.2f\nHoc luc: %s\n"
        ,SV1.maSV,SV1.hoten,SV1.diem,SV1.hocluc);
    return 0;
}