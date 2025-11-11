#include <stdio.h>
#include <math.h>

int main()
{
    float cdai, crong;
    printf("Nhập chiều dài: ");
    scanf("%f", &cdai);
    printf("Nhập chiều rộng: ");
    scanf("%f", &crong);
    float chuvi = 2 * (cdai + crong);
    float dientich = cdai * crong;
    printf("Chu vi hình chữ nhật là: %.2f\n", chuvi);
    printf("Diện tích hình chữ nhật là: %.2f\n", dientich);
    return 0;
}