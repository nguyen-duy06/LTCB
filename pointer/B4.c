#include <stdio.h>
void take_input(int sz,int *a)
{
    printf("nhap cac phan tu trong mang: ");
    for (int i = 0; i < sz; ++i)
    {
        scanf("%d",&a[i]);
    }
}
void tang_dan(int *a,int sz)
{
    for (int i = 0; i < sz; ++i)
    {
        for (int j = i + 1; j < sz; ++j)
        {
            if (a[j] < a[i])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }
}
void print(int *a,int sz)
{
    for (int i = 0; i < sz; ++i)
    {
        printf("%d ",a[i]);
    }
}
int main()
{
    int sz;
    printf("nhap vao so phan tu trong mang: ");
    scanf("%d",&sz);
    int a[sz];

    take_input(sz,a);
    tang_dan(a,sz);
    print(a,sz);
    return 0;
}