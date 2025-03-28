#include <stdio.h>
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a;
    int b;
    printf("nhap 2 so nguyen a va b: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("2 gia tri hoan doi a va b lan luot la:%d %d",a,b);
    return 0;
}