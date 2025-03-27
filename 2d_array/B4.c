#include <stdio.h>
void cacul_mat(int h_t,int h_d,int c_t,int c_p,int count,int n,int a[n][n])
{
    while ((h_t <= h_d) && (c_t <= c_p))
    {
        for (int i = c_t; i <= c_p; ++i)
            {
                a[h_t][i] = count;
                ++count;
            }
        ++h_t;
        for (int i = h_t; i <= h_d; ++i)
        {
            a[i][c_p] = count;
                ++count;
        }
        --c_p;
        for (int i = c_p; i >= c_t; --i)
        {
            a[h_d][i] = count;
                ++count;
        }
        --h_d;
        for (int i = h_d; i >= h_t; --i)
        {
            a[i][c_t] = count;
                ++count;
        }
        ++c_t;
    }

}
void print(int n,int a[n][n])
{
    printf("ma tran xoay oc bac n:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n = -1;
    while (n < 0)
    {
    printf("nhap 1 so nguyen duong n: ");
    scanf("%d",&n);
    }
    int a[n][n];
    int h_t = 0,h_d = n - 1;
    int c_t = 0,c_p = n - 1;
    int count = 1;
    cacul_mat(h_t,h_d,c_t,c_p,count,n,a);
    print(n,a);
    return 0;
}