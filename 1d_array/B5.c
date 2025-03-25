#include <stdio.h>
int count(int n,int a[],int x)
{
    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i]== x)
            ++count;
    }
    return count;
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
    printf("chon 1 phan tu x bat ki trong mang: ");
    scanf("%d",&x);
    printf("phan tu x xuat hien %d lan trong mang",count(n,a,x));
    return 0;
}