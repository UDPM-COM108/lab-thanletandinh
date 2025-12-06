#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// ===== MAIN MENU =====
int main() {
    int chon;
    do {
        printf("\n===== MENU CHƯƠNG TRÌNH =====\n");
        printf("1. Kiểm tra số nguyên\n");
        printf("2. Tìm ước số của số nguyên\n");
        printf("3. Tính tiền Karaoke\n");
        printf("4. Tính tiền điện\n");
        printf("5. Đổi tiền thành mệnh giá\n");
        printf("6. Tính lãi suất vay ngân hàng\n");
        printf("7. Tính vay tiền mua xe\n");
        printf("8. Sắp xếp thông tin sinh viên\n");
        printf("9. Game FPOLY-LOTT\n");
        printf("10. Tính toán phân số\n");
        printf("0. Thoát chương trình\n");
        printf("Chọn chức năng (0–10): ");
        scanf("%d", &chon);

        switch (chon) {
            case 1: 
                //kiemTraSoNguyen(); 
                break;
            case 2: 
                //timUocSo(); 
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
                //tinhLaiSuatVay(); 
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
                //tinhPhanSo(); 
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