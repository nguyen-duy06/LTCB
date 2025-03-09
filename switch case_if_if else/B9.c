#include <stdio.h>
#include <stdbool.h>
bool input_error_checking(int month,int year)
{
    if (month <= 0 || month > 12 || year < 0)
        return true;
    return false;
}
int day_cal(int month)                          
{
    if (month >= 1 && month <= 7)
    {
        if (month % 2)
            return 31;
        else
            return 30;
    }
    else 
    {   if(month % 2)
            return 30;
        else
            return 31;
    }
}
bool is_leap_year(int year)
{
    if (!(year % 4))        //a leap year contains an additional day(in feb)compared to a common year
        return true;
    return false;
}
int main()
{
    int month;
    int year;
    printf("nhap lan luot so thang va so nam: ");
    scanf("%d %d",&month,&year);
    if (input_error_checking(month,year))
    {
        printf("so thang hoac nam khong ton tai\n");
        return 0;
    }
    if (month == 2)
    {
        if (is_leap_year(year))
            printf("thang %d nam %d co 29 ngay\n",month,year);
        else
            printf("thang %d nam %d co 28 ngay\n",month,year);
    }
    else
        printf("thang %d nam %d co %d ngay\n",month,year,day_cal(month));
    return 0;
}