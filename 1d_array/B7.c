#include <stdio.h>
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

    for (int i = 0; i < n; ++i)
    {
        int min_index = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < a[min_index])
                min_index = j;
        }
        if (min_index != i)
        {
        int tempt = a[i];
        a[i] = a[min_index];
        a[min_index] = tempt;
        }
    }

    printf("mang duoc sap xep theo thu tu tang dan:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("%d ",a[i]);
    }
}
