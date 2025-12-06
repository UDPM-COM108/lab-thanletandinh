#include <stdio.h>
#include <stdlib.h>

void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhập phần tử a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void bai1(int a[], int n) {
    int tong = 0, dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0) {
            tong += a[i];
            dem++;
        }
    }
    if (dem == 0) {
        printf("Không có phần tử nào chia hết cho 3 trong mảng.\n");
    } else {
        float tb = (float)tong / dem;
        printf("Trung bình các số chia hết cho 3 là: %.2f\n", tb);
    }
}

void bai2(int a[], int n) {
    int min = a[0], max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) min = a[i];
        if (a[i] > max) max = a[i];
    }
    printf("Giá trị nhỏ nhất trong mảng: %d\n", min);
    printf("Giá trị lớn nhất trong mảng: %d\n", max);
}
void bai3(int a[], int n)
{
    int i, j, temp;
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sắp xếp theo thứ tự giảm dần trong mảng: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
}
int main() {
    int n, choice;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    int a[n];
    nhapMang(a, n);

    do {
        printf("\n===== MENU =====\n");
        printf("1. Tính trung bình các số chia hết cho 3\n");
        printf("2. Tìm giá trị lớn nhất và nhỏ nhất trong mảng\n");
        printf("3. Sắp xếp theo thứ tự giảm dần trong mảng\n");
        printf("0. Thoát\n");
        printf("Chọn chức năng: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bai1(a, n);
                break;
            case 2:
                bai2(a, n);
                break;
            case 3:
                bai3(a, n);
                break;
            case 0:
                printf("Thoát chương trình.\n");
                exit(0);
                break;
            default:
                printf("Lựa chọn không hợp lệ. Vui lòng nhập lại.\n");
        }
    } while (choice != 0);

    return 0;
}