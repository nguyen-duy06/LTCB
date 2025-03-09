#include<stdio.h>
#include <stdbool.h>
#include <math.h>
bool is_triangle(double a,double b,double c)
{
    if ((a + b > c) && (a + c > b) && (b + c > a))
        return true;
    return false;
}
bool is_right_triangle(double a,double b,double c)
{
    if (a*a + b*b == c*c)
        return true;
    else if (a*a + c*c == b*b)
        return true;
    else if (c*c + b*b == a*a)
        return true;
    else 
        return false;
}
bool is_isosceles_triangle(double a,double b,double c)
{
    if (a == b || a == c || b == c)
        return true;
    return false;
}
bool is_equilateral_triangle(double a,double b,double c)
{
    if (a == b && a == c)
        return true;
    return false;
}
int main()
{
    double a,b,c;
    printf("nhap vao lan luot 3 so thuc: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    double chu_vi = a + b + c;
    double dien_tich = (sqrt(chu_vi/2*(chu_vi/2-a)*(chu_vi/2-b)*(chu_vi/2-c)));
    if (is_triangle(a,b,c))
    {
        if (is_right_triangle(a,b,c))
        {
            if (is_isosceles_triangle(a,b,c))
                printf("day la 3 canh cua tam giac vuong can\n");
            else
                printf("day la 3 canh cua tam giac vuong\n");
        }
        else if (is_equilateral_triangle(a,b,c))
        {
        printf("day la 3 canh cua tam giac deu\n");
        }
        else if (is_isosceles_triangle(a,b,c))
        {
            printf("day la 3 canh cua tam giac can\n");
        }
        else
        { 
            printf("day la 3 canh cua tam giac thuong\n");
        }
        printf("dien tich cua tam giac:%lf\n",dien_tich);
        printf("chu vi cua tam giac:%lf\n",chu_vi);
    }
    else 
        printf("day khong phai la 3 canh cua 1 tam giac");
    return 0;
}