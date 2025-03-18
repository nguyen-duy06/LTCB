#include<stdio.h>
#include<stdbool.h>
bool prime_num_check(int x)
{
    int count = 0;
    for(int i = 2; i < x; ++i)
    {
        if ((x % i) == 0)
        ++count;
    }
    if (count > 0)
        return false;
    else 
        return true;
}
int main()
{
    int x;
    printf("nhap vao 1 so nguyen bat ki: ");
    scanf("%ld",&x);
    if (prime_num_check(x))
        printf("day la so nguyen to");
    else 
        printf("day khong phai la so nguyen to");
    return 0;
}