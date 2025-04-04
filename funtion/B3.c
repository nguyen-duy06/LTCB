#include <stdio.h>
void input(int i,int j,int a[100][100])
{
    for (int x = 0; x < i; ++x )
    {
        for (int y = 0; y < j; ++y)
        {
            scanf("%d",&a[x][y]);
        }
    }
}
void mul_arr(int mul[][100],int a[][100],int b[][100],int i,int j,int n)

//void mul_arr(int mul[i][n],int a[i][j],int b[][n],int i,int j,int n)

{
    for (int x = 0; x < i; ++x)                    // chay hang cua ma tran a
    {                                            
        for(int y = 0; y < n; ++y)                 // chay cot cua ma tran b
        { 
            mul[x][y] = 0; 

            for (int z = 0; z < j; ++z)             //chay  cot cua ma tran a
            {                                                    
            mul[x][y] += (a[x][z] * b[z][y]);
            }         
        }        
    }
}
void sum_arr(int i,int j,int a[i][j],int b[i][j],int sum[i][j])
{
    for (int x = 0; x < i; ++x)
    {
        for (int y = 0; y < j; ++y)
        {
            sum[x][y] = a[x][y] + b[x][y];
        }
    }
}
void print_sum(int i,int j,int sum[i][j])
{
    printf("tong cua 2 ma tran tren:\n");
    for (int x = 0; x < i; ++x)
    {
        for (int y = 0; y < j; ++y)
        {
            printf("%d ",sum[x][y]);
        }
        printf("\n");
    }
}
void print_mul(int i,int n,int mul[i][n])
{
    printf("tich cua 2 ma tran tren:\n");
    for (int x = 0; x < i; ++x)
    {
        for (int y = 0; y < n; ++y)
        {
            printf("%d ",mul[x][y]);
        }
        printf("\n");
    }
}
int main()
{
    int i,j;
    int m,n;
    printf("nhap vao so hang cua ma tran a: ");
    scanf("%d",&i);

    printf("nhap vao so cot cua ma tran a:");
    scanf("%d",&j);

    printf("nhap vao so hang cua ma tran b:");
    scanf("%d",&m);

    printf("nhap vao so cot cua ma tran b:");
    scanf("%d",&n);

    int a[i][j];
    int b[m][n];
    int mul[100][100];
    int sum[100][100];

    printf("nhap cac phan tu cua ma tran a\n");
    input(i,j,a);
    printf("nhap cac phan tu cua ma tran b\n");
    input(m,n,b);

    if (m == j)
    {
        mul_arr(mul,a,b,i,j,n);
        print_mul(i,n,mul);
    }
    else 
        printf("2 ma tran tren khong the thuc hien phep nhan!\n");
    if (i == m && j == n)
    {
        sum_arr(i,j,a,b,sum);
        print_sum(i,n,sum);
    }
    else
        printf("2 ma tran tren khong the thuc hien phep cong!\n");

}