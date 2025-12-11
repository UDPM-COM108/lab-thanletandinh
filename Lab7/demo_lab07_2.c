#include <stdio.h>
#include <stdlib.h>

void nhapmang2chieu(int a[50][50], int m, int n){
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            printf("Nhap phan tu a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]); 
        }
    }
}

void xuatmang2chieu(int a[50][50], int m, int n){
    printf("Xuat mang a[%d][%d]: \n",m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]: %d",i,j,a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[50][50], m, n;
    printf("Nhap m va n: ");
    scanf("%d %d", &m,&n);

    nhapmang2chieu(a,m,n);
    xuatmang2chieu(a,m,n);
    return 0;
}