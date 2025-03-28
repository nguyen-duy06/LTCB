#include <stdio.h>
#include <stdlib.h>
void cacul_min_max(int sz,int *a,int *min,int *max)
{
    for (int i = 0; i < sz; ++i)
    {
        if (a[i] < *min)
            *min = a[i];
        if (a[i] > *max)
            *max = a[i];
    }
}
int main() {
    int sz = 5;
    int min = INT_MAX;
    int max = INT_MIN;
    int a[5] = {1,26,75,-35,57};

    cacul_min_max(sz,a,&min,&max);
    printf("gia tri nho nhat la %d lon nhat la %d",min,max);
    
}