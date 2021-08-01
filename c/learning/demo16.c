#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,x,y,z;
    scanf("%d/%d/%d",&a,&b,&c);
    scanf("%d/%d/%d",&d,&e,&f);
    g=a+b*30+c*365;
    h=d+e*30+f*365;
    i=g-h;
    x=i/365;
    j=i%365;
    y=j/30;
    z=j%30;
    printf("Difference:%d/%d/%d",z,y,x);
    return 0;
}
