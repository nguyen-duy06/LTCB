#include <stdio.h>
#include <stdlib.h>
int main()
{
    int sz = 10;
    int *ptr = (int*)malloc(sz * sizeof(int));

    for (int i = 0; i < sz; ++i)
    {
        ptr[i] = i + 1;
    }

    for (int i = 0; i < sz; ++i )
    {
        printf("%d ",ptr[i]);
    }
    free(ptr);
    return 0;
}