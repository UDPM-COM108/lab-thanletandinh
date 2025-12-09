#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <time.h>
// Các chức năng

// Hàm chức năng 1
// Kiểm tra số nguyên tố
bool laSoNguyenTo(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}
// Kiểm tra số chính phương
bool laSoChinhPhuong(int n) {
    int can = sqrt(n);
    return can * can == n;
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

// Hàm chức năng 2
// Ước số chung lớn nhất của 2 số
int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Bội số chung nhỏ nhất của 2 số
int bcnn(int a, int b) {
    return (a * b) / ucln(a, b);
}
void timUocVaBoi() {
    int x, y;
    printf("Nhập hai số nguyên: ");
    scanf("%d %d", &x, &y);

    printf("Ước chung lớn nhất của %d và %d là: %d\n", x, y, ucln(x, y));
    printf("Bội chung nhỏ nhất của %d và %d là: %d\n", x, y, bcnn(x, y));
}

// Hàm chức năng 3
// Tính tiền quán karaoke
float tinhTien(int gioBD, int gioKT) {
    if (gioBD < 12 || gioKT > 23 || gioBD >= gioKT) {
        printf("Thời gian không hợp lệ. Quán chỉ hoạt động từ 12h đến 23h.\n");
        return -1;
    }
    int soGio = gioKT - gioBD;
    float tongTien = 0;
    if (soGio <= 3) {
        tongTien = soGio * 150000;
    } else {
        tongTien = 3 * 150000 + (soGio - 3) * 150000 * 0.7; // giảm 30% từ giờ thứ 4
    }
    if (gioBD >= 14 && gioBD <= 17) {
        tongTien *= 0.9; // giảm thêm 10%
    }
    return tongTien;
}
void tinhTienKaraoke() {
    int gioBD, gioKT;
    printf("Nhập giờ bắt đầu (12-23): ");
    scanf("%d", &gioBD);
    printf("Nhập giờ kết thúc (12-23): ");
    scanf("%d", &gioKT);

    float tien = tinhTien(gioBD, gioKT);
    if (tien != -1)
        printf("Tổng tiền cần thanh toán: %.0f VND\n", tien);
}
// Hàm chức năng 4
// Tính tiền điện
void tinhTienDien() {
    int kwh;
    float tongTien = 0;
    printf("Nhập số kWh điện sử dụng: ");
    scanf("%d", &kwh);
    int bac[] = {50, 50, 100, 100, 100};
    float gia[] = {1678, 1734, 2014, 2536, 2834, 2927};
    for (int i = 0; i < 6 && kwh > 0; i++) {
        int dungLuong = (i < 5) ? bac[i] : kwh;
        int suDung = (kwh > dungLuong) ? dungLuong : kwh;
        tongTien += suDung * gia[i];
        kwh -= suDung;
    }
    printf("Số tiền phải trả là: %.0f đồng\n", tongTien);
}
// Hàm chức năng 5
// Đổi tiền
void doiTien() {
    int soTien;
    int menhGia[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    printf("Nhập số tiền cần đổi: ");
    scanf("%d", &soTien);

    printf("Kết quả đổi tiền:\n");
    for (int i = 0; i < 9; i++) {
        int soTo = soTien / menhGia[i];
        if (soTo > 0) {
            printf("%d tờ %d đồng\n", soTo, menhGia[i]);
            soTien %= menhGia[i];
        }
    }
}
// Hàm chức năng 6
// Tính lãi suất vay ngân hàng vay trả góp
void tinhlaiSuatVay(){
    long tien_vay;
    int ky_han = 12;
    float lai_suat = 0.05;
    // Nhập số tiền muốn vay
    printf("Nhập số tiền muốn vay (VND): ");
    scanf("%ld", &tien_vay);
    // Tiền gốc phải trả = tiền vay / kỳ hạn (12 tháng)
    long goc_phai_tra = tien_vay / ky_han;
    long so_tien_con_lai = tien_vay;
    printf("\n%-7s %-18s %-18s %-25s %-25s\n",
         "Kỳ hạn", "|Lãi phải trả", "|Gốc phải trả",
          "|Số tiền phải trả", "|Số tiền còn lại");
    for (int thang = 1; thang <= ky_han; thang++) {
        // Tiền lãi = số tiền còn lại * lãi suất
        // Tổng phải trả = Tiền lãi + Tiền gốc phải trả 
        long lai_phai_tra = (long)(so_tien_con_lai * lai_suat);
        long tong_phai_tra = lai_phai_tra + goc_phai_tra;
        so_tien_con_lai -= goc_phai_tra;
        printf("%-7d %-13ld %-13ld %-13ld %-50ld\n",
               thang, lai_phai_tra, goc_phai_tra, tong_phai_tra, so_tien_con_lai);
    }
}
// Hàm chức năng 7
// Tính tiền vay mua xe
void tinhVayMuaXe(){
    float ptVay, giaXe = 500000000, laiNam = 0.15;
    int nam = 24;
    int soThang = nam * 12; // tổng số tháng
    printf("Nhập phần trăm vay (VD: 80): ");
    scanf("%f", &ptVay);
    // Tính số tiền vay
    // 500tr = Giá xe * tỷ lệ vay -> Giá xe = 500tr / tỷ lệ vay
    float tienVay = giaXe * ptVay / 100;
    // Số tiền trả trước lần đầu
    float traTruoc = giaXe - tienVay;
    printf("Trả trước: %.f VND\n", traTruoc);
    // Gốc trả đều mỗi tháng
    float gocThang = tienVay / soThang;
    float laiThang = laiNam / 12; // lãi suất theo tháng
    float soDuNo = tienVay;
    printf("\n%-7s %-18s %-18s %-25s %-20s\n",
           "Tháng", "|Lãi phải trả", "|Gốc phải trả",
           "|Tổng phải trả", "|Số dư nợ còn lại");
    for (int i = 1; i <= soThang; i++) {
        float laiPhaiTra = soDuNo * laiThang;
        float tongPhaiTra = gocThang + laiPhaiTra;
        soDuNo -= gocThang;
        printf("%-7d %-13.0f %-13.0f %-20.0f %-15.0f\n",
               i, laiPhaiTra, gocThang, tongPhaiTra, soDuNo);
    }
}

// Hàm chức năng 8
// Định nghĩa struct SinhVien
struct Sinhvien {
    char hoTen[50];
    float diemTB;
    char hocluc[50];
};
// Hàm nhập thông tin sinh viên
void nhapSinhVien(struct Sinhvien *sv) {
    printf("Nhập họ tên: ");
    getchar();
    fgets(sv->hoTen, sizeof(sv->hoTen), stdin);
    sv->hoTen[strcspn(sv->hoTen, "\n")] = '\0'; // bỏ ký tự xuống dòng

    printf("Nhập điểm trung bình: ");
    scanf("%f", &sv->diemTB);
}
// Hàm in thông tin sinh viên
void inSinhVien(struct Sinhvien sv) {
    printf("\nHọ tên: %s\nĐiểm TB: %.2f\nHọc lực: %s\n"
        , sv.hoTen, sv.diemTB, sv.hocluc);
}
// Hàm sắp xếp sinh viên theo học lực (giảm dần điểm TB)
void sapXepHocLuc(struct Sinhvien ds[100], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].diemTB < ds[j].diemTB) {
                struct Sinhvien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}
// Phân loại học lực
void phanloaihocluc(struct Sinhvien ds[100], int n){
    for(int i = 0; i < n; i++)
    {
        if (ds[i].diemTB >= 9 && ds[i].diemTB <10){
            strcpy(ds[i].hocluc, "Xuất Sắc");
        }else if (ds[i].diemTB >= 8 && ds[i].diemTB < 9){
            strcpy(ds[i].hocluc, "Giỏi");
        }else if (ds[i].diemTB >= 7 && ds[i].diemTB <8){
            strcpy(ds[i].hocluc, "Khá");
        }else if (ds[i].diemTB >= 5 && ds[i].diemTB <7){
            strcpy(ds[i].hocluc, "Trung Bình");
        }else if (ds[i].diemTB > 0 && ds[i].diemTB <5){
            strcpy(ds[i].hocluc, "Yếu");
        }else
            strcpy(ds[i].hocluc, "Điểm trung bình không hợp lệ: (0-10)");       
    }
}
// Hàm phân loại học lực và sắp xếp giảm dần theo điểm TB
void sapXepSinhVien(){
    int n;
    struct Sinhvien ds[100];
    printf("Nhập số lượng sinh viên: ");
    scanf("%d", &n);
    getchar(); // loại bỏ ký tự Enter còn lại
    for (int i = 0; i < n; i++) {
        printf("\nNhập thông tin sinh viên thứ %d:\n", i + 1);
        nhapSinhVien(&ds[i]);
    }
    phanloaihocluc(ds,n);
    sapXepHocLuc(ds,n);
    for (int i = 0; i < n; i++) {
        inSinhVien(ds[i]);
    }    
}
// Hàm chức năng 9
// Xây dựng game FPOLY-LOTT
void gameFPOLY_LOTT(){
    int soThuong;
    printf("Nhập số phần thưởng cần rút (tối đa 15): ");
    scanf("%d", &soThuong);
    if (soThuong < 1 || soThuong > 15) {
        printf("Dữ liệu không hợp lệ.\n");
        return;
    }
    // Khởi tạo seed để rand() sinh số khác nhau mỗi lần chạy
    srand(time(NULL));
    // Sinh số ngẫu nhiên từ 1 đến 15
    int r = rand() % 15 + 1;
    printf("Số bốc thăm là: %d\n", r);
    printf("\nKết quả rút thưởng:\n");
    if(soThuong == r)
        printf("Chúc mừng bạn đã trúng thưởng.\n");
    else
        printf("Chúc bạn may mắn lần sau.\n");
}
// Hàm chức năng 10
// Struct Phân số
struct phanso
{
    int tu;
    int mau;
};
// Hàm nhập phân số
void nhapPhanso(struct phanso *ptu) {
    int tu, mau;
    printf("Nhập tử: ");
    scanf("%d", &ptu->tu);
    printf("Nhập mẫu: ");
    scanf("%d", &ptu->mau);
}
// Các phép toán
// Rút gọn
struct phanso rutGon(struct phanso ptu) {
    int UCLN = ucln(abs(ptu.tu), abs(ptu.mau));
    ptu.tu /= UCLN;
    ptu.mau /= UCLN;
    if (ptu.mau < 0) {
        ptu.tu = -ptu.tu;
        ptu.mau = -ptu.mau;
    }
    return ptu;
}
//Tổng
struct phanso cong(struct phanso a, struct phanso b) {
    struct phanso kq;
    kq.tu = a.tu * b.mau + b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}
//Hiệu
struct phanso tru(struct phanso a,struct phanso b) {
    struct phanso kq;
    kq.tu = a.tu * b.mau - b.tu * a.mau;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}
// Thương
struct phanso nhan(struct phanso a,struct phanso b) {
    struct phanso kq;
    kq.tu = a.tu * b.tu;
    kq.mau = a.mau * b.mau;
    return rutGon(kq);
}
//Tích
struct phanso chia(struct phanso a,struct phanso b) {
    struct phanso kq;
    kq.tu = a.tu * b.mau;
    kq.mau = a.mau * b.tu;
    return rutGon(kq);
}
// Tính tổng, hiệu, tích, thương của 2 phân số
void tinhPhanSo(){
    struct phanso a, b;
    printf("Nhập phân số thứ nhất (tử mẫu): \n");
    nhapPhanso(&a);
    printf("Nhập phân số thứ hai (tử mẫu): \n");
    nhapPhanso(&b);
    if (a.mau == 0 || b.mau == 0)
        printf("Phân số không hợp lệ (mẫu phải khác 0).\n");
    struct phanso tong = cong(a, b);
    struct phanso hieu = tru(a, b);
    struct phanso tich = nhan(a, b);
    struct phanso thuong = chia(a, b);
    printf("\nKết quả:\n");
    printf("Tổng: %d/%d\n", tong.tu, tong.mau);
    printf("Hiệu: %d/%d\n", hieu.tu, hieu.mau);
    printf("Tích: %d/%d\n", tich.tu, tich.mau);
    printf("Thương: %d/%d\n", thuong.tu, thuong.mau);
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
                tinhTienKaraoke(); 
                break;
            case 4: 
                tinhTienDien(); 
                break;
            case 5: 
                doiTien(); 
                break;
            case 6: 
                tinhlaiSuatVay(); 
                break;
            case 7: 
                tinhVayMuaXe(); 
                break;
            case 8: 
                sapXepSinhVien(); 
                break;
            case 9: 
                gameFPOLY_LOTT(); 
                break;
            case 10: 
                tinhPhanSo(); 
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