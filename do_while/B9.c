#include<stdio.h>
double sum(long long n)
{
    long long fac = 1;
    double sum = 0.0;
    for (long long i = 1; i <= n; ++i)
    {
        fac *= i;
        sum += (1.0/fac);
    }
    return sum;
}
int main()
{   long long n;
    printf("nhap vao mot gia tri n: ");
    scanf("%d",&n);
    printf(" 1 + 1/2! + ... + 1/n! = %lf",sum(n));
    return 0;
}