#include<stdio.h>
double sum(long long n)
{
    double sum = 0.0;
    for (long long i = 1; i <= n; ++i)
    {
        sum += (1.0/i);
    }
    return sum;
}
int main()
{   
    long long n;
    printf("nhap vao mot gia tri n: ");
    scanf("%lld",&n);
    printf(" 1 + 1/2 + ... + 1/n = %llf",sum(n));
    return 0;
}
