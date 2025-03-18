#include<stdio.h>
void uoc(int x)
{
    printf("cac uoc cua so da nhap: ");
    for (int i = 1; i <= x; ++i)
    {
        if ((x % i) == 0)
            printf("%ld ",i);
    }
}
int main()
{   int x;
    printf("nhap vao mot so nguyen: ");
    scanf("%ld",&x);
    uoc(x);
    return 0;
}