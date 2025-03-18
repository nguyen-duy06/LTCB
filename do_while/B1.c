#include <stdio.h>
#include <stdbool.h>
int main()
{
    int count = 1;
    int total = 0;
    while (count <= 10)
    {
        int x;
        if (count == 1)
            printf("nhap vao mot so nguyen(enter de nhap so tiep theo): ");
        else   
            printf("nhap vao mot so nguyen khac(enter de nhan so tiep theo); ");
        scanf("%d",&x);
        total += x;
        ++count;
    }
    printf("tong cua 10 so la: %d",total);
    return 0;
}
