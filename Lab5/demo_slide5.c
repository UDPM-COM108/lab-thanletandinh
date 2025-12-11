#include <stdio.h>
#include <math.h>

int main()
{
    int a = -5, b = 10, c = 15;
    int max = a;
    if( b > max ) max = b;
    if( c > max ) max = c;
    
    int min = a;    
    if( b < min )  min = b;
    if( c < min ) min = c;
    printf("Giá trị lớn nhất giữa %d, %d và %d là: %d\n", a, b, c, max);
    printf("Giá trị nhỏ nhất giữa %d, %d và %d là: %d\n", a, b, c, min);

    double x =-5;
    printf("Giá trị tuyệt đối của %.2lf là %d\n", x, abs(x));
    return 0;
}