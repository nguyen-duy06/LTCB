#include <stdio.h>
void print(int n,int a[])
{
    int max = -1e4;
    int pos;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > max)
        {          
            max = a[i];
            pos = i;
        }
    }
    printf("phan tu lon nhat trong mang: %d\nco chi so %d",max,pos);
}
int main()
{
    int n,a[1000];
    printf("nhap vao so phan tu trong mang: ");
    scanf("%d",&n);
    for (int i = 0; i < n; ++i)
    {
        printf("nhap vao phan tu trong mang co chi so %d: ",i);
        scanf("%ld",&a[i]);
    }
    print(n,a);
    return 0;
}