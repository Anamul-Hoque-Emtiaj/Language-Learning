#include<stdio.h>
int main()
{
    int n,r,f,j,t,i,s=0;
    scanf("%d",&n);
    for(i=0;i<=n;){
            t=i;
    while(t!=0){
        r=t%10;
        f=1;
        for(j=1;j<=r;j++){
            f=f*j;
        }
        s=s+f;
        t=t/10;
    }
    if(s==i){printf("%d\n",i);}s=0;i++;
    }
    return 0;

}

