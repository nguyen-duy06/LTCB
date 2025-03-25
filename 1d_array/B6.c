#include <stdio.h>
void zero(int n,int a[])
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] < 0)
            a[i] = 0;
    }
}
int main()
{
    int n,x,a[1000];
    printf("nhap vao so phan tu trong mang: ");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        printf("nhap vao phan tu trong mang co chi so %d: ",i);
        scanf("%ld",&a[i]);
    }
    zero(n,a);
    printf("mang moi sau khi doi cac phan tu nho hon 0 bang so 0:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}