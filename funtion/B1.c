#include<stdio.h>
double mul(double x,double y)
{
    int temp = x;

    for (int i = 1; i < y; ++i)
    {
        x *= temp;
    }
    return x;
}
int main()
{
    double y;
    double x;
    printf("nhap vao 2 so x va y: ");
    scanf("%lf%lf",&x,&y);
    printf("x^y = %lf",mul(x,y));
    return 0;
}