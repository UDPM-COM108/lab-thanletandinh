#include <stdio.h>
#include <stdlib.h>
# define M 50
# define N 50

// định nghĩa hàm
void nhapmang2chieu(int a[M][N], int m, int n);
void xuatmang2chieu(int a[M][N], int m, int n);

//trien khai
void nhapmang2chieu(int a[M][N], int m, int n){
    for (int i = 0; i < m; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            printf("Nhap phan tu a[%d][%d]: ",i,j);
            scanf("%d", &a[i][j]); 
        }
    }
}

void xuatmang2chieu(int a[M][N], int m, int n){
    printf("Xuat mang a[%d][%d]: \n",m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void chia3het(int a[M][N], int m, int n);

void chia3het(int a[M][N], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] % 3 == 0)
                printf("a[%d][%d]: %d chia het cho 3\n", i, j, a[i][j]);
        }
    }
}

void chia5het(int a[M][N], int m, int n);

void chia5het(int a[M][N], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] % 5 == 0)
                printf("Phan tu cua a[%d][%d]: %d chia het cho 3\n", i, j, a[i][j]);
        }
    }
}
int main()
{
    /*
    // Sắp xếp tăng dần - BUBBLE SORT
    int a[7] = {8,2,6,2,9,1,5};
    int i, j, temp;
    for(i = 0; i < 6; i++)
    {
        for(j = i+1; j < 7; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sắp xếp tăng dần của mảng a: \n");
    for ( i = 0; i < 7; i++)
    {
        printf("Phần tử của a[%d]: %d\n", i, a[i]);
    }
    // Sắp xếp giảm dần - BUBBLE SORT
    int b[7] = {1,3,5,6,4,7,2};
    
    for(i = 0; i < 6; i++)
    {
        for(j = i+1; j < 7; j++)
        {
            if(b[i] < b[j])
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    printf("Sắp xếp giảm dần của mảng b: \n");
    for ( i = 0; i < 7; i++)
    {
        printf("Phần tử của b[%d]: %d\n", i, b[i]);
    }
    int c[4][3] = {{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d",c[i][j]);
        }
        printf("\n");
    }*/
    int a[M][N], m, n;
    printf("Nhap m va n: ");
    scanf("%d %d", &m,&n);

    nhapmang2chieu(a,m,n);
    xuatmang2chieu(a,m,n);
    chia3het(a,m,n);
    chia5het(a,m,n);
    
    return 0;
}