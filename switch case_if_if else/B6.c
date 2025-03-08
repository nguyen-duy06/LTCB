#include<stdio.h>
int main()
{
    printf("nhap lan luot cac tham so vao he phuong trinh sau:\n");
    printf("ax + by = c\n");
    printf("dx + ey = f\n");
    double a,b,c,d,e,f;
    scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
    double y = ((a*f - c*d)/(a*e - b*d));
    double x = ((c - b*y) / a);
    printf("nghiem x  = %lf\n",x);
    printf("nghiem y  = %lf\n",y);
    return 0;
}
