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
void calcu_a_multi_b(int i,int j,int n,int c[][100],int a[i][j],int b[][n])
{
    for (int x = 0; x < i; ++x)                    // chay hang cua ma tran a
    {                                            
        for(int y = 0; y < n; ++y)                  // chay cot cua ma tran b
        {
            for (int z = 0; z < j; ++z)
            {                                                    
            c[x][y] += (a[x][z] * b[z][y]);
            }         
        }
        
    }
}
void print(int i,int n,int c[][100])
{
    printf("tich cua 2 ma tran tren:\n");
    for (int x = 0; x < i; ++x)
    {
        for (int y = 0; y < n; ++y)
        {
            printf("%d ",c[x][y]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j;
    int n;
    printf("nhap vao so hang cua ma tran a: ");
    scanf("%d",&i);

    printf("nhap vao so cot cua ma tran a/hang cua ma tran b: ");
    scanf("%d",&j);

    printf("nhap vao so cot cua ma tran b: ");
    scanf("%d",&n);
    
    int a[i][j];
    int b[j][n];
    int c[100][100];
    printf("nhap cac phan tu cua ma tran a\n");
    input(i,j,a);
    printf("nhap cac phan tu cua ma tran b\n");
    input(j,n,b);

    calcu_a_multi_b(i,j,n,c,a,b);
    
    print(i,n,c);
}