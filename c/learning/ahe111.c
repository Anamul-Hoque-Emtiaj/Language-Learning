#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i;
    scanf("%d%d%d",&a,&b,&c);
    d=100*a+10*b+c;
    e=d%10;
    f=d/10;
    g=f%10;
    h=f/10;
    i=e+g+h;
    printf("%d",i);
    return 0;
}
