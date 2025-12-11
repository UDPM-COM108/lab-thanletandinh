#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// bảng cửu chương
void bangcuuchuong()
{
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    for(int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",n,i, n * i);
    }
}
// Phương trình bậc hai
int giaiPTBacHai() {
    float a, b, c;
    printf("Nhập hệ số a: ");
    scanf("%f", &a);
    printf("Nhập hệ số b: ");
    scanf("%f", &b);
    printf("Nhập hệ số c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0){
            printf("Phương trình vô nghiệm\n");
            return 0;
        }
        else {
            float x = -c / b;
            printf("Phương trình trở thành bậc nhất, nghiệm: x = %.2f\n", x);
        }
    } else {
        float delta = b*b - 4*a*c;
        if (delta < 0){
            printf("Phương trình vô nghiệm\n");
            return 0;
        }
        else if (delta == 0) {
            float x = -b / (2*a);
            printf("Phương trình có nghiệm kép: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phương trình có 2 nghiệm phân biệt: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
    return 0;
}
// Giá trị lớn nhất trong mảng và vị trí nó
void giatrilonnhat(){    
    int n;
    printf("nhập số phần tử: ");
    scanf("%d", &n);   // 

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);   // nhập từng phần tử
    }

    int maxVal = a[0];   // giả sử phần tử đầu tiên là lớn nhất
    int index = 1;       // chỉ số bắt đầu từ 1

    for (int i = 1; i < n; i++) {
        if (a[i] > maxVal) {
            maxVal = a[i];
            index = i + 1;   // cộng thêm 1 vì chỉ số bắt đầu từ 1
        }
    }

    printf("Gia tri lon nhat: %d\n", maxVal);
    printf("Chi so xuat hien dau tien: %d\n", index);
}
// học viên
struct hocvien
{
    int mahv;
    char hoten[50];
    float diem;
    char hocluc[50];
};
void nhaphocvien(struct hocvien a[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Hoc vien so %d.\n", i);
        printf("Nhap ma hoc vien: ");
        scanf("%d", &a[i].mahv);
        
        printf("Nhap ho ten cua hoc vien: ");
        getchar();
        fgets(a[i].hoten, sizeof(a[i].hoten), stdin);
        a[i].hoten[strcspn(a[i].hoten, "\n")] = '\0';
        printf("Nhap diem trung binh: ");
        scanf("%f",&a[i].diem);
    }   
}
void xuathocvien(struct hocvien a[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nHoc vien so %d\nMa hoc vien: %d\nHo ten: %s\nDiem TB: %.2f\nHoc luc: %s\n"
        ,i,a[i].mahv,a[i].hoten,a[i].diem,a[i].hocluc);
    }
}
void phanloaihocvien(struct hocvien a[100], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i].diem < a[j].diem)
            {
                struct hocvien temp = a[j];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
        
}
void xeploaihocluc(struct hocvien a[100], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i].diem >= 8 && a[i].diem < 10){
            strcpy(a[i].hocluc, "Giỏi");
        }
        else if (a[i].diem < 8 && a[i].diem >= 7){
            strcpy(a[i].hocluc, "Kha");
        }
        else if (a[i].diem < 7 && a[i].diem >= 5){
            strcpy(a[i].hocluc, "Trung binh");
        }
        else if (a[i].diem < 5 && a[i].diem > 0){
            strcpy(a[i].hocluc, "Yeu");
        }    
        else{
            strcpy(a[i].hocluc, "Loi");
        }
            
    }
}


int main()
{
    bangcuuchuong();
    giaiPTBacHai();
    giatrilonnhat();
    struct hocvien a[100];
    int n;
    printf("Nhap so hoc vien: ");
    scanf("%d",&n);
    nhaphocvien(a,n);
    phanloaihocvien(a,n);
    xeploaihocluc(a,n);
    
    xuathocvien(a,n);
    return 0;
}