#include <stdio.h>
void take_input(long n,long a[])
{
    for (int i = 0; i < n; ++i)
    {
        printf("nhap vao phan tu trong mang co chi so %d: ",i);
        scanf("%ld",&a[i]);
    }
}
long long sum(long n,long a[])
{
    long sum = 0;
    for (long i = 0; i < n; ++i)
    {
        sum += a[i];
    } 
    return sum;
}
long long pos_sum(long n,long a[])
{
    long sum = 0;
    for (long i = 0; i < n; ++i)
    {
        if (a[i] > 0)
        sum += a[i];
    }
    return sum;
}
int main()
{
    long a[10000];
    long n,pos_res = 0;
    printf("nhap vao so phan tu trong mang: ");
    scanf("%d",&n);
    take_input(n,a);
    long total_sum = sum(n, a);
    long total_pos_sum = pos_sum(n, a);
    long total_neg_sum = total_sum - total_pos_sum;

    printf("tong cac phan tu trong mang: %ld\n",total_sum);
    printf("tong cac phan tu duong trong mang: %ld\n",total_pos_sum);
    printf("tong cac phan tu am trong mang: %ld\n",total_neg_sum);
    printf("trung binh cong cac phan tu trong mang: %lf\n",total_sum* 1.0/n);
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > 0)
            ++pos_res;
    }
    if (pos_res ==0 )
        printf("trung binh cong cac phan tu duong trong mang: 0");
    else
        printf("trung binh cong cac phan tu duong trong mang:%lf\n",total_pos_sum* 1.0/pos_res);
    if ((n - pos_res) == 0)
        printf("trung binh cong cac phan tu am trong mang: 0");
    else
        printf("trung binh cong cac phan tu am trong mang:%lf\n",total_neg_sum* 1.0/(n - pos_res));

    return 0;
}