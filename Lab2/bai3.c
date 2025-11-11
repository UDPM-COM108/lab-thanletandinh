#include <stdio.h>
#include <math.h>

int main()
{
    float r;
    printf("Nhập bán kính hình tròn: ");
    scanf("%f", &r);
    float chuviHT = 2 * M_PI * r;
    float dientichHT = M_PI * r * r;
    printf("Chu vi hình tròn là: %.2f\n", chuviHT);
    printf("Diện tích hình tròn là: %.2f\n", dientichHT);
    return 0;
}