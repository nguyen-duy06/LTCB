#include <stdio.h>
void print1(int a[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void print2(int a[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("nhap vao phan tu co chi so hang %d va cot %d: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int x;
    while ((x != 1) && (x != 2) && (x != 3))
    {
    printf("nhap 1 de in ma tran co san\nnhap 2 de nhap ma tran tu ban phim\n nhap 3 de dung chuong trinh:\n ");
    scanf("%d",&x);
    if (x == 1)
        print1(a);
    else if (x == 2)
        print2(a);
    else if (x == 3)
    return 0;
    }
    
    return 0;
}