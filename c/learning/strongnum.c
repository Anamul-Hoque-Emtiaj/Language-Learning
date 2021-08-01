#include<stdio.h>
int main()
{
    int n,r,f,t,i,s=0;
    scanf("%d",&n);
    t=n;
    while(t!=0){
        r=t%10;
        f=1;
        for(i=1;i<=r;i++){
            f=f*i;
        }
        s=s+f;
        t=t/10;
    }
    if(s==n)printf("%d is strong number",n);
    else printf("%d is not strong number",n);
    return 0;

}
