#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
struct SinhVien
{
    char ho_ten[100];
    int tuoi;
    double diem_TB;
    struct SinhVien *next;
};
typedef struct SinhVien sv;
sv *creat_sv(char ho_ten[100], int tuoi, double diem_TB)
{
    sv *new_sv = (sv*)malloc(sizeof(sv));
    strcpy(new_sv->ho_ten, ho_ten);
    new_sv->tuoi = tuoi;
    new_sv->diem_TB = diem_TB;
    new_sv->next = NULL;
    return new_sv;
}
void add(sv **head, char ho_ten[100], int tuoi, double diem_TB)
{
    sv *new_sv = creat_sv(ho_ten,tuoi,diem_TB);
    if (*head == NULL)
    {
        *head = new_sv;
        return;
    }
    sv *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_sv;
}
void print(sv *head,int so_sv)
{
    int stt = 1;
    sv *temp = head;
    printf("%50s","DANH SACH SINH VIEN\n");
    printf("%-5s %-40s %-15s %-15s\n","stt","ho ten","tuoi","diem TB");
    while (temp != NULL)
    {
        printf("%-5d %-40s %-15d %-15.2lf\n",stt,temp->ho_ten,temp->tuoi,temp->diem_TB);
        temp = temp->next;
        ++stt;
    }
}
bool insert(sv **head,char tar_ho_ten[100],sv *new_sv)
{
    sv *temp_1 = *head;
    if (strcmp(temp_1->ho_ten,tar_ho_ten) == 0)
    {
        new_sv->next = *head;
        *head = new_sv;
    }
    else
    {
        sv *temp_2;
        while (temp_1 != NULL && strcmp(temp_1->ho_ten,tar_ho_ten) != 0)
        {
            temp_2 = temp_1;
            temp_1 = temp_1->next;
        }
        if (temp_1 == NULL) return false;
        new_sv->next = temp_1;
        temp_2->next = new_sv;
    }
    return true;
}
bool del(sv **head,char tar_del_sv[100])
{
    sv *temp_1 = *head;
    if (strcmp(temp_1->ho_ten,tar_del_sv) ==  0)
    {
        (*head) = temp_1->next;
        free(temp_1);
    }
    else
    {
        sv *temp_2;
        while (temp_1 != NULL && strcmp(temp_1->ho_ten,tar_del_sv) != 0)
        {
            temp_2 = temp_1;
            temp_1 = temp_1->next;
        }
        if (temp_1 == NULL) 
        {
        return false;
        }
        temp_2->next = temp_1->next;
        free(temp_1);
        printf("xoa hoan tat!\n");
    }
    return true;
}
int main()
{
    int so_sv;
    char ho_ten[100];
    int tuoi;
    double diem_TB;
    sv *temp;
    sv *head = NULL;
    printf("nhap so sinh vien can dien thong tin: ");
    scanf("%d",&so_sv);

    for (int i = 0; i < so_sv; ++i)
    {
        printf("\nnhap thong tin cua sinh vien thu %d\n",i + 1);
        printf("nhap ho va ten cua sinh vien: ");
        getchar();
        gets(ho_ten);
        printf("nhap tuoi sinh vien: ");
        scanf("%d",&tuoi);
        printf("nhap diem sinh vien: ");    
        scanf("%lf",&diem_TB);
        add(&head,ho_ten,tuoi,diem_TB);
    }
    print(head,so_sv);
    
    int exit = 0;
    while (!exit)
    {
        printf("\n\n");
        printf("0. Thoat\n");
        printf("1. Them sinh vien\n");
        printf("2. Xoa sinh vien\n");
        printf("3. Chen sinh vien\n");

        int opt;

        printf("Nhap lua chon: ");
        scanf("%d", &opt);

        switch(opt)
        {
        case 0:
        {
            exit = 1;
            break;
        }
        case 1:
        {
            printf("nhap ho va ten cua sinh vien: ");
            getchar();
            gets(ho_ten);
            printf("nhap tuoi sinh vien: ");
            scanf("%d",&tuoi);
            printf("nhap diem sinh vien: ");    
            scanf("%lf",&diem_TB);
            add(&head,ho_ten,tuoi,diem_TB);
            print(head,so_sv + 1);
            break;
        }
        case 2:
            printf("nhap ten sinh vien can xoa: ");
            char tar_del_sv[100];
            getchar();
            gets(tar_del_sv);
            if (del(&head,tar_del_sv))  print(head,so_sv - 1);
            else    printf("ten khong hop le!\n");
            break;
        case 3:
            char tar_ho_ten[100];
            printf("tim kiem ten sinh vien can chen: ");
            getchar();
            gets(tar_ho_ten);

            printf("nhap tuoi cua sinh vien moi: ");
            scanf("%d",&tuoi);
    
            printf("nhap ho va ten sinh vien moi: ");
            getchar();
            gets(ho_ten);

            printf("nhap diem cua sinhh vien moi: ");
            scanf("%lf",&diem_TB);
            sv *new_sv = creat_sv(ho_ten,tuoi,diem_TB);
            if(insert(&head,tar_ho_ten,new_sv))
            {
                printf("chen hoan tat!\n");
                print(head,so_sv + 1);
            }
            else    printf("ten khong hop le!\n");
        }
    }
    return 0;
}