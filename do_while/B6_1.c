#include<stdio.h>
int ucln(long long a,long long b)
{
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int bcnn(long long a,long long b)
{
    return ((a * b) / ucln(a,b));
}
int main()
{   
    long long a,b;
    printf("nhap 2 so nguyen: ");
    scanf("%d %d",&a,&b);
    printf("uoc chung lon nhat cua 2 so la: %d\n",ucln(a,b));
    printf("boi chung nho cua 2 so la: %d\n",bcnn(a,b));
    return 0;
}
