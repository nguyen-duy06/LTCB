#include<stdio.h>
#include<math.h>
int main()
{
    printf("nhap vao lan luot cac tham so cua phuong trinh bac hai ax^2 + bx + c = 0: ");
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double denta = b*b - 4*a*c;
    if (denta > 0)
    {
        double x_1 = ((-b + sqrt(denta))/(2 * a));
        double x_2 = ((-b - sqrt(denta))/(2 * a));
        printf("phuong trinh co 2 nghiem phan biet:\n");
        printf("%lf\n%lf",x_1,x_2);
    }
    else if (denta == 0)
    {
        double nghiem_kep = (-b / (2 * a));
        printf("phuong trinh co nghiem kep");
        printf("%lf\n",nghiem_kep);
    }
    else 
    {
        printf("phuong trinh vo nghiem");
    }
    return 0;

}