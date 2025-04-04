#include<stdio.h>
int fac(int x)
{
    int fac = 1;
    for (int i = 1; i <= x; ++i)
    {
        fac *= i;
    }
    return fac;
}
int main()
{
    int x;
    printf("nhap vao so nguyen x: ");
    scanf("%d",&x);
    printf("x! = %d",fac(x));
    return 0;
}