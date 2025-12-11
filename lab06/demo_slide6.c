#include <stdio.h>

int main()
{
    
    //Khởi tạo mảng 1 chiều với n phần tử
    int n, p;
    printf("Nhập số mảng để khởi tạo 2 chiều: ");
    scanf("%d %d", &n, &p);
    int c[n][p];
    for(int j = 0; j < n; j++)
    {
        for (int i = 0; i < p; i++)
        {
            printf("Nhập phần tử của c[%d][%d]: ", j, i);
            scanf("%d", &c[j][i]);
        }
        
    }
    // Xuất mảng 2 chiều
    for(int j = 0; j < n; j++)
    {
        for (int i = 0; i < p; i++)
        {
            printf("Xuất phần tử của mảng c[%d][%d]: %d\n", j, i, c[j][i]);
        }
        
    }
    //Khởi tạo mảng 1 chiều 
    
    printf("Nhập số mảng để khởi tạo: ");
    scanf("%d", &n);
    int b[n];
    for(int j = 0; j < n; j++)
    {
        printf("Nhập phần tử b[%d]: ", j);
        scanf("%d", &b[j]);
    }
    // Xuất mảng 1 chiều
    int a[5] = {9,5,7,7,6};
    printf("Xuất mảng a:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
    return 0;
}