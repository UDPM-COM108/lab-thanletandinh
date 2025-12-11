#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct sinhvien
{
    int masv;
    char hoten[50];
    float diem;
    char hocluc[50];
};
void nhapsinhvien(struct sinhvien x[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Nhập MaSV [%d]: ",i);
        scanf("%d", &x[i].masv);
        getchar();
        printf("Nhập họ tên [%d]: ",i);
        fgets(x->hoten, sizeof(x->hoten), stdin);
        x->hoten[strcspn(x->hoten, "\n")] = '\0';
        printf("Nhập điểm [%d]: ",i);
        scanf("%f", &x[i].diem);
    }
}
void xuatsinhvien(struct sinhvien x[], int n)
{
    for(int i = 0; i <n; i++)
    {
        printf("Mã sinh viên [%d]: %d\nHọ tên: %s\nĐiểm TB: %f\nHọc lực: %s\n"
            ,i,x->masv,x->hoten,x->diem,x->hocluc);
    }
}
void phanloaihocluc(struct sinhvien x[], int n){
    for(int i = 0; i < n; i++)
    {
        if (x[i].diem >= 9 && x[i].diem <10){
            strcpy(x[i].hocluc, "Xuất Sắc");
        }else if (x[i].diem >= 8 && x[i].diem < 9){
            strcpy(x[i].hocluc, "Giỏi");
        }else if (x[i].diem >= 7 && x[i].diem <8){
            strcpy(x[i].hocluc, "Khá");
        }else if (x[i].diem >= 5 && x[i].diem <7){
            strcpy(x[i].hocluc, "Trung Bình");
        }else if (x[i].diem > 0 && x[i].diem <5){
            strcpy(x[i].hocluc, "Yếu");
        }else
            strcpy(x[i].hocluc, "Điểm trung bình không hợp lệ: (0-10)");       
    }
}
// Hàm sắp xếp sinh viên theo học lực (giảm dần điểm TB)
void sapXepHocLuc(struct sinhvien x[100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (x[i].diem < x[j].diem) {
                struct sinhvien temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
}
int main()
{
    int n;
    struct sinhvien x[100];
    printf("Nhập số lượng sinh viên: ");
    scanf("%d", &n);
    nhapsinhvien(x,n);
    phanloaihocluc(x,n);
    sapXepHocLuc(x,n);
    xuatsinhvien(x,n);
    return 0;
}