#include<stdio.h>
int main()
{
    int i,n,r,s,t,u,a,j,p,c,k;
    scanf("%d%d",&n,&r);
    if(n>r)
    {
        for(i=1,s=1; i<=n; i++)
        {
            s=s*i;
        }
        for(j=1,t=1; j<=r; j++)
        {
            t=t*j;
        }
        a=n-r;
        for(k=1,u=1; k<=a; k++)
        {
            u=u*k;
        }
        p=s/u;
        c=s/(t*u);
        printf("permutation:%d\ncombination:%d",p,c);
    }
    else printf("Impossible");
    return 0;
}

