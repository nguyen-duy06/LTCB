#include<stdio.h>
int main()
{
    printf("nhap vao diem trung binh cua ban: ");
    double dtb;
    scanf("%lf",&dtb);
    if (dtb >=0 && dtb < 5)
        printf("hoc luc yeu");
    else if (dtb >= 5 && dtb < 7)
        printf("hoc luc trung binh");
    else if (dtb >= 7 && dtb < 8 )
        printf("hoc luc kha");
    else if (dtb >= 8 && dtb < 9 )
        printf("hoc luc gioi");
    else if (dtb >=9 && dtb <= 10 )
        printf("hoc luc xuat sac");
    else
        printf("chiu roi :-]");
    return 0;
}
