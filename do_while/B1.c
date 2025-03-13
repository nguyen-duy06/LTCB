#include <stdio.h>
int main()
{
    int count = 1;
    int total = 0;
    while (count <= 10)
    {
        int x;
        printf("nhap vao mot so nguyen:");
        scanf("%d",&x);
        total += x;
        ++count;
    }
    printf("tong cua 10 so la: %d",total);
    return 0;
}