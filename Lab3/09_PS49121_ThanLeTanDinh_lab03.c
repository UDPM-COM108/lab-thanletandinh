#include <stdio.h>
#include <math.h>

void tinhHocLuc() {
    float dtb;
    printf("Nhập điểm học lực của bạn (0-10): ");
    scanf("%f", &dtb);

    if (dtb >= 9)
        printf("Học Lực: Xuất Sắc\n");
    else if (dtb >= 8 && dtb <9)
        printf("Học Lực: Giỏi\n");
    else if (dtb >= 6.5 && dtb <8)
        printf("Học Lực: Khá\n");
    else if (dtb >= 5 && dtb <6.5)
        printf("Học Lực: Trung Bình\n");
    else
        printf("Học Lực: Yếu\n");
}

void giaiPTBacNhat() {
    float a, b;
    printf("Nhập hệ số a: ");
    scanf("%f", &a);
    printf("Nhập hệ số b: ");
    scanf("%f", &b);

    if (a == 0) {
        if (b == 0)
            printf("Phương trình vô số nghiệm\n");
        else
            printf("Phương trình vô nghiệm\n");
    } else {
        float x = -b / a;
        printf("Phương trình có một nghiệm: x = %.2f\n", x);
    }
}

void giaiPTBacHai() {
    float a, b, c;
    printf("Nhập hệ số a: ");
    scanf("%f", &a);
    printf("Nhập hệ số b: ");
    scanf("%f", &b);
    printf("Nhập hệ số c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0)
            printf("Phương trình vô nghiệm\n");
        else {
            float x = -c / b;
            printf("Phương trình trở thành bậc nhất, nghiệm: x = %.2f\n", x);
        }
    } else {
        float delta = b*b - 4*a*c;
        if (delta < 0)
            printf("Phương trình vô nghiệm\n");
        else if (delta == 0) {
            float x = -b / (2*a);
            printf("Phương trình có nghiệm kép: x = %.2f\n", x);
        } else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("Phương trình có 2 nghiệm phân biệt: x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
}

int main() {
    int choice;
    do {
        printf("\n MENU CHƯƠNG TRÌNH\n");
        printf("1. Tính Học Lực sinh viên\n");
        printf("2. Giải phương trình bậc nhất\n");
        printf("3. Giải phương trình bậc hai\n");
        printf("4. Thoát\n");
        printf("Chọn chức năng (1-4): ");
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
                printf("Tạm biệt!\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng chọn lại.\n");
        }
    } while (choice != 4);

    return 0;
}