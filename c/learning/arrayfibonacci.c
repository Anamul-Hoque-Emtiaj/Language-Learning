#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,x[n+1];
    x[0]=0;
    x[1]=1;
    for(i=2;i<n;i++){
        x[i]=x[i-2]+x[i-1];
    }
    for(i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    return 0;
}
