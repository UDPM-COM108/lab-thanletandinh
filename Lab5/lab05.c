#include <stdio.h>
#include <stdlib.h>

// ===== BÀI 1: Hàm tìm min, max =====
int myMin(int a, int b, int c) {
    int min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    return min;
}

int myMax(int a, int b, int c) {
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}

void bai1() {
    int x, y, z;
    printf("Nhập 3 số: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Số lớn nhất: %d\n", myMax(x, y, z));
    printf("Số nhỏ nhất: %d\n", myMin(x, y, z));
}

// ===== BÀI 2: Hàm kiểm tra năm nhuận =====
int isLeapYear(int year) {
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

void bai2() {
    int year;
    printf("Nhập năm: ");
    scanf("%d", &year);
    if(isLeapYear(year))
        printf("%d là năm nhuận.\n", year);
    else
        printf("%d không phải năm nhuận.\n", year);
}

// ===== BÀI 3: Kiểm tra số chia hết cho 5 và 9 =====
void bai3() {
    int n;
    printf("Nhập số trong khoảng [1,1000]: ");
    scanf("%d", &n);
    if(n < 1 || n > 1000) {
        printf("Số không nằm trong khoảng [1,1000]!\n");
        return;
    }
    if(n % 5 == 0 && n % 9 == 0)
        printf("%d chia hết cho 5 va 9.\n", n);
    else
        printf("%d không chia hết cho 5 va 9.\n", n);
}

// ===== MAIN MENU =====
int main() {
    int choice;
    do {
        printf("\n===== MENU =====\n");
        printf("1. Tìm min, max trong 3 so\n");
        printf("2. Kiểm tra năm nhuận\n");
        printf("3. Kiểm tra số chia hết cho 5 va 9\n");
        printf("0. Thoát\n");
        printf("Nhập lựa chọn: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: 
                bai1(); 
                break;
            case 2: 
                bai2(); 
                break;
            case 3: 
                bai3(); 
                break;
            case 0: 
                printf("Thoát chương trình.\n");
                exit(0); 
                break;
            default: 
                printf("Lựa chọn không hợp lệ!\n");
        }
    } while(choice != 0);

    return 0;
}