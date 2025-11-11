#include <stdio.h>
#include <math.h>

void tinhHocLuc() {
    float dtb;
    printf("Nhap diem trung binh (0-10): ");
    scanf("%f", &dtb);

    if (dtb >= 9)
        printf("Hoc luc: Xuat Sac\n");
    else if (dtb >= 8)
        printf("Hoc luc: Gioi\n");
    else if (dtb >= 6.5)
        printf("Hoc luc: Kha\n");
    else if (dtb >= 5)
        printf("Hoc luc: Trung Binh\n");
    else
        printf("Hoc luc: Yeu\n");
}

void giaiPTBacNhat() {
    float a, b;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo so nghiem\n");
        else
            printf("Phuong trinh vo nghiem\n");
    } else {
        float x = -b / a;
        printf("Phuong trinh co mot nghiem: x = %.2f\n", x);
    }
}

void giaiPTBacHai() {
    float a, b, c;
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo nghiem\n");
        else {
            float x = -c / b;
            printf("Phuong trinh tro thanh bac nhat, nghiem: x = %.2f\n", x);
        }
    } else {
        float delta = b*b - 4*a*c;
        if (delta < 0)
            printf("Phuong trinh vo nghiem\n");
        else if (delta == 0) {
            float x = -b / (2*a);
            printf("Phuong trinh co nghiem kep: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\n MENU CHUONG TRINH\n");
        printf("1. Tinh hoc luc sinh vien\n");
        printf("2. Giai phuong trinh bac nhat\n");
        printf("3. Giai phuong trinh bac hai\n");
        printf("4. Thoat\n");
        printf("Chon chuc nang (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                tinhHocLuc();
                break;
            case 2:
                giaiPTBacNhat();
                break;
            case 3:
                giaiPTBacHai();
                break;
            case 4:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 4);

    return 0;
}