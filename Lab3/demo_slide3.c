#include <stdio.h>

int main()
{
    /*
    double diem;
    printf("Nhập điểm học lực của bạn (0-10): ");
    scanf("%lf", &diem);

    if (diem >= 9){
        printf("Học Lực: Xuất Sắc\n");
    }else if (diem >= 8 && diem < 9){
        printf("Học Lực: Giỏi\n");
    }else if (diem >= 7 && diem <8){
        printf("Học Lực: Khá\n");
    }else if (diem >= 5 && diem <7){
        printf("Học Lực: Trung Bình\n");
    }else if (diem >= 3 && diem <5)
        printf("Học Lực: Yếu\n");
    */
    printf("Hết lab 03\n");
    printf("Việt Nam có bao nhiêu dân tộc anh em: \n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin mời bạn chọn đáp án (a,b,c,d): \n");
    char dapAn;
    scanf("%s", &dapAn);
    switch (dapAn)
    {
    case 'a':
        printf("Bạn đã chọn sai\n");
        break;
    case 'b':
        printf("Bạn đã chọn sai\n");
        break;
    case 'c':
        printf("Bạn đã chọn đúng\n");
        break;
    case 'd':
        printf("Bạn đã chọn sai\n");
        break;
    default:
    printf("Bạn chọn không đúng bộ đáp án (a,b,c,d)\ng");
        break;
    }
    return 0;
}