#include <stdio.h>
#include <math.h>

int main()
{
    /*
    int n, S = 0;
    printf("Nhập n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        if(i % 2 != 0)
            S += i;
    }
    printf("Tổng các số lẻ từ 0 đến %d: %d", n, S);
    */
    int min, max, i;
    float tong = 0, bienDem = 0, trungBinh = 0;

    printf("Nhập giá trị min: ");
    scanf("%d", &min);
    printf("Nhập giá trị max: ");
    scanf("%d", &max);

    i = min;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }

    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("Trung bình tổng các số chia hết cho 2 từ %d đến %d là: %.2f\n", min, max, trungBinh);
    } else {
        printf("Không có số nào chia hết cho 2 trong khoảng từ %d đến %d.\n", min, max);
    }
    return 0;
}