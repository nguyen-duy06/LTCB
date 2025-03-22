#include<stdio.h>
double sum(int n)
{
    double sum = 0.0;
    for (int i = 1; i <= n; ++i)
    {
        sum += (1.0/i);
    }
    return sum;
}
int main()
{   int n = 5;
    printf("nhap vao mot gia tri n: ");
    scanf("%d",&n);
    printf(" 1 + 1/2 + ... + 1/n = %lf",sum(n));
    return 0;
}