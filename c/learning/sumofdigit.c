#include<stdio.h>
int main()
{
    int n,t,r,s=0;
    scanf("%d",&n);
    t=n;
    while(t!=0){
        r=t%10;
        t=t/10;
        s=s+r;

    } printf("%d\n",s);
    return 0;
}
