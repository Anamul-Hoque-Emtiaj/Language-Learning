#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d",&a);
    b=a/100;
    c=a-b*100;
    d=c/10;
    e=c%10;
    f=b+d+e;
    printf("%d",f);
    return 0;
}
