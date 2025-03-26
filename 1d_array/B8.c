#include <stdio.h>
int main()
{
    int a[7] = {1,3,5,6,8,9,10};
    int b[9] = {2,4,6,7,13,16,20,25,26};
    int c[100];
    int len_a = (sizeof(a) / sizeof(a[0]));
    int len_b = (sizeof(b) / sizeof(b[0]));
    int i = 0,j = 0,z = 0;

    while ((i < len_a) && (j < len_b))
    {
        if (a[i] < b[j])
            c[z++] = a[i++];
        else
            c[z++] = b[j++];
    }
    while (i < len_a)
        c[z++] = a[i++];
    while (j < len_b)
        c[z++] = b[j++];

    printf("mang duoc ghep boi hai mang duoc sap xep theo thu tu tang dan:\n");
    for (int i = 0; i < z; ++i)
    {
        printf("%d ",c[i]);
    }
    return 0;
}