#include<stdio.h>
int main()
{
    int n,i;
    float a,r;
    scanf("%f%f%d",a,r,n);
    for(i=1;i<=n;i++){
        a=a+a*(r/100);
    }printf("monafa-asol:%f",a);
    return 0;
}
