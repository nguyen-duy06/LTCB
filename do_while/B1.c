#include <stdio.h>
#include <stdbool.h>
static bool s_isFirstCall = true;
int main()
{
    int count = 1;
    int total = 0;
    while (count <= 10)
    {
        int x;
        if (s_isFirstCall)
        {
            printf("nhap vao mot so nguyen:");
            s_isFirstCall = false;
        }
            else   
            printf("nhap vao mot so nguyen khac:");
        scanf("%d",&x);
        total += x;
        ++count;
    }
    printf("tong cua 10 so la: %d",total);
    return 0;
}
