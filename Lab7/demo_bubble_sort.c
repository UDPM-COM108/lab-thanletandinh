#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[50], n, temp;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);
    
////Sắp xếp mảng tăng dần bằng bubble sort ////////////////
    for(int i = 0; i < n; i++)
    {
        printf("Nhập phần tử của a[%d]: ");
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n; j++)
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
    for (int i = 0; i < n; i++)
    {
        printf("Phần tử của a[%d]: %d\n", i, a[i]);
    }
////////////////////////////////////////////////////////////

    return 0;
}