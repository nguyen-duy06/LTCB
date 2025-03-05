#include <stdio.h>
const int pi = 3.14;
int main() {
    printf("nhap vao ban kinh hinh cau:");
    double r;
    scanf("%lf",&r);
    printf("dien tich hinh cau:%lf\n",4*pi*r*r);
    printf("the tich hinh cau:%lf\n",(4*pi*r*r*r)/3);
    return 0;
}