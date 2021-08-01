#include<stdio.h>
int main()
{
    int n,r,t,i,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;){
            t=i;
    while(t!=0){
        r=t%10;
        s=s+r*r*r;
        t=t/10;
    }
    if(s==i){printf("%d ",i);}s=0;i++;
    }
    return 0;
}

