#include <stdio.h>
#include <stdlib.h>

int tenHam(int a, int b, int c)
{
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c; 
    return max;
}

void nhapmang(int a[50][50], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Nhập phần tử a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
        
    }
}

void xuatmang(int a[50][50], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("Phần tử của a[%d][%d]: %d\n", i, j, a[i][j]);
        }
        
    }
    
}

int tongmang(int a[50][50], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        
    }
    return sum;
}

int GTLN(int a[50][50], int m, int n)
{
    int max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(max < a[i][j])
                max = a[i][j];
        }
        
    }
    return max;
}

int main()
{
    int a, b, c, m, n;
    /*
    printf("Nhập ba số bất kỳ: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Giá trị lớn nhất của 3 số (%d, %d, %d): %d\n",a,b,c,tenHam(a,b,c));
    */
    printf("Nhập số phần tử mảng: ");
    scanf("%d %d", &m, &n);
    int p[50][50];
    printf("Nhập mảng: \n");
    nhapmang(p,m,n);
    printf("Xuất mảng: \n");
    xuatmang(p,m,n);
    printf("Tổng cộng các phần tử trong mảng: %d\n",tongmang(p,m,n));

    printf("Giá trị lớn nhất của mảng: %d\n", GTLN(p,m,n));


    return 0;
}