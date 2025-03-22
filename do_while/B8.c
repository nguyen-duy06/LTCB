#include<stdio.h>
int  fac(int x)
{
    long long fac = 1;
    for (long long i = 1; i <= x; ++i)
    {
        fac *= i;
    }
    return fac;
}
int main()
{ 
    long long x;
    printf("nhap vao 1 so nguyen: ");
    scanf("%d",&x);
    printf("x! = %d",fac(x));
    return 0;
}