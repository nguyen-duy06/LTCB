#include <stdio.h>
long long fin_cacul(int n)
{ 
    long long fn,f0 = 0,f1 = 1;
    if (n == 1)
        return f0;
    if (n == 2 )
        return f1;
    for (int i = 0; i < (n - 2); ++i)
    {
        fn = f0 + f1;
        f0 = f1;
        f1 = fn;
    }
    return fn;
}
int main()
{
    int n;
    printf("ban muon tim so finbonacci thu may ? ");
    scanf("%d",&n);
    printf("so finbonacci thu %d la: %lld",n,fin_cacul(n));
    return 0;
}