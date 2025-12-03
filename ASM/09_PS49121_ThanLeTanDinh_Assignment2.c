#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Các chức năng

bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

int laSoChinhPhuong(int n) {
    int can = sqrt(n);
    return can * can == n;
}

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}

void kiemTraSoNguyen() {
    int x;
    printf("Nhập số bất kỳ: ");
    scanf("%d", &x);
    printf("Số %d là số nguyên.\n", x);
    if (laSoNguyenTo(x))
        printf("Số %d là số nguyên tố.\n", x);
    else
        printf("Số %d không phải là số nguyên tố.\n", x);

    if (laSoChinhPhuong(x))
        printf("Số %d là số chính phương.\n", x);
    else
        printf("Số %d không phải là số chính phương.\n", x);

}

void timUocVaBoi() {
    int x, y;
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &x, &y);

    printf("Ước chung lớn nhất của %d và %d là: %d\n", x, y, ucln(x, y));
    printf("Bội chung nhỏ nhất của %d và %d là: %d\n", x, y, bcnn(x, y));
}

// ===== MAIN MENU =====
int main() {
    int chon;
    do {
        printf("\n===== MENU CHƯƠNG TRÌNH =====\n");
        printf("1. Kiểm tra số nguyên\n");
        printf("2. Tìm ước, bội số chung của 2 số\n");
        printf("3. Tính tiền Karaoke\n");
        printf("4. Tính tiền điện\n");
        printf("5. Đổi tiền thành mệnh giá\n");
        printf("6. Tính lãi suất vay ngân hàng\n");
        printf("7. Tính vay tiền mua xe\n");
        printf("8. Sắp xếp thông tin sinh viên\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tính toán phân số\n");
        printf("0. Thoát chương trình\n");
        printf("Chọn chức năng (0-10): ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: 
                kiemTraSoNguyen(); 
                break;
            case 2: 
                timUocVaBoi(); 
                break;
            case 3: 
                //tinhTienKaraoke(); 
                break;
            case 4: 
                //tinhTienDien(); 
                break;
            case 5: 
                //doiTien(); 
                break;
            case 6: 
                //tinhlaiSuatVay(); 
                break;
            case 7: 
                //tinhVayMuaXe(); 
                break;
            case 8: 
                //sapXepSinhVien(); 
                break;
            case 9: 
                //gameFPOLY_LOTT(); 
                break;
            case 10: 
                //tinhPhanSố(); 
                break;
            case 0: 
                printf("Đã thoát chương trình.\n"); 
                exit(0);
                break;
            default: 
                printf("Lựa chọn không hợp lệ.\n");
        }
    } while (chon != 0);

    return 0;
}