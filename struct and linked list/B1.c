#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct DonHang 
{
    long quan,pr,sum;
    char name[100];
};
typedef struct DonHang prod;
void input(prod *db,long n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("mat hang thu %d\n",i + 1);
        printf("ten hang: ");
        getchar();
        gets(db[i].name);
        printf("don gia: ");
        scanf("%d",&db[i].pr);
        printf("so luong: ");
        scanf("%d",&db[i].quan);
    }
}
void sort_name(prod *db,long n)
{
    prod temp;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (strcmp(db[j].name,db[i].name) < 0)
            {
                temp = db[i];
                db[i] = db[j];
                db[j] = temp;
            }
        }
    }
}
void print(prod *db,long n)
{
    sort_name(db,n);
    long sum_db = 0;
    printf("%40s","SO LIEU BAN HANG\n");
    printf("%-3s %-15s %-15s %-15s %-15s\n","STT","ten hang","don gia","so luong","thanh tien");
    for (int i = 0; i < n; ++i)
    {
        db[i].sum = (db[i].quan * db[i].pr);
        printf("%-3ld %-15s %-15ld %-15ld %-15ld\n",i + 1,db[i].name,db[i].pr,db[i].quan,db[i].sum);
        sum_db += db[i].sum;
    }
    printf("%-3s %-15s %-15s %-15s %-15ld\n","","","","TONG TIEN",sum_db);
}
int main()
{
    int n;
    printf("nhap so loai don hang: ");
    scanf("%d",&n);
    prod *db = (prod*)malloc(n * sizeof(prod));
    input(db,n);
    print(db,n);
    return 0;
}