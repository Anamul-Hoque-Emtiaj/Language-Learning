#include<stdio.h>
int main()
{
    int y,a,b,c;
    scanf("%d",&y);
    a=y%400;
    b=y%100;
    c=y%4;
    (a==0)?(printf("yes")):((b==0)?(printf("No")):((c==0)?(printf("yes")):(printf("No"))));
    return 0;
}
