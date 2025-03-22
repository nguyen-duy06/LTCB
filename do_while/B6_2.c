#include<stdio.h>
#include<stdbool.h>
bool tong_uoc(int x)
{
    if (x > 0)
    {
        int sum = 0;
        for (int i = 1; i <= x; ++i)
        {
            if ((x % i) == 0)
            sum += i;
        }
        if (((sum / x) == 2) && ((sum % x) == 0))
            return true; 
        return false;
    }
    return false;
}
int main()
{   int x;
    printf("nhap vao mot so nguyen: ");
    scanf("%ld",&x);
    if (tong_uoc(x))
        printf("day la so hoan hao\n");
    else
        printf("day khong phai la so hoan hao\n");
    return 0;
}