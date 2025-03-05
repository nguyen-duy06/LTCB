#include <stdio.h>

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    printf("ket qua phep cong:%d\nphep tru:%d\nphep nhan:%d\nphep chia:%d\n",x+y,x-y,x*y,x/y);
    if (x % y)
        printf("phep chia co du\n");
    else
        printf("phep chia het");
    return 0;
}