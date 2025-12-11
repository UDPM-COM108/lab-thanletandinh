#include <stdio.h>
#include <stdlib.h>

int main()
{
    long tienvay;
    int thang = 12;
    float laisuat = 0.05;
    printf("Nhập số tiền vay: ");
    scanf("%ld", &tienvay);
    long gocphaitra = tienvay/12;
    long tienconlai = tienvay;
    printf("Kỳ hạn  Lãi phải trả  Góc phải trả  Số tiền phải trả  Số tiền còn lại\n");
    for(int i = 1; i<= thang; i++)
    {
        long laiphaitra = laisuat * tienconlai;
        long sotienphaitra = gocphaitra + laiphaitra;
        tienconlai -= gocphaitra;
        printf("%3d %10d %15d %15d %15d\n",
        i, laiphaitra, gocphaitra, sotienphaitra, tienconlai);
    }
    return 0;
}