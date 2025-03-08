#include <stdio.h>

int main() {
    int x,y;
    printf("nhap vao 2 so nguyen  bat ki: ");
    scanf("%d%d",&x,&y);
    printf("ket qua\n phep cong:%d\n phep tru:%d\n phep nhan:%d\n phep chia:%d\n",x+y,x-y,x*y,x/y);
    if (x % y)
        printf("*phep chia co du\n");
    else
        printf("*phep chia het");
    return 0;
}
