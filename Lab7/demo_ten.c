#include <stdio.h>
#include <conio.h>
int main()
{
    char ten[20];
    int tuoi, diem;
    printf("Nhập tên: ");
    scanf("%s", ten);
    fflush(stdin);
    printf("Nhập tuổi: ");
    scanf("%d", &tuoi);
    printf("Nhập điểm: ");
    scanf("%d", &diem);
    getch();
    
    printf("Họ và tên: %c\nTuổi: %d\nĐiểm: %d\n", ten, tuoi, diem);
    return 0;
}