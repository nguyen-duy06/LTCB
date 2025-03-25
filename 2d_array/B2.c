#include <stdio.h>
void input(int i,int j,int a[i][j])
{
    for (int x = 0; x < i; ++x )
    {
        for (int y = 0; y < j; ++y)
        {
            scanf("%d",&a[x][y]);
        }
    }
}
void sum_arr(int i,int j,int a[i][j],int b[i][j],int c[i][j])
{
    for (int x = 0; x < i; ++x)
    {
        for (int y = 0; y < j; ++y)
        {
            c[x][y] = a[x][y] + b[x][y];
        }
    }
}
int main()
{
    int i,j;
    printf("nhap vao so hang va cot cua ma tran a va b: ");
    scanf("%d %d",&i,&j);
    int a[i][j];
    int b[i][j];
    int c[i][j];

    printf("nhap cac phan tu cau ma tran a\n");
    input(i,j,a);
    printf("nhap cac phan tu cau ma tran b\n");
    input(i,j,b);
    printf("tong cua 2 ma tran a va b:\n");
    sum_arr(i,j,a,b,c);
    for (int x = 0; x < i; ++x)
    {
        for (int y = 0; y < j; ++y)
        {
            printf("%d ",c[x][y]);
        }
        printf("\n");
    }

    return 0;
}