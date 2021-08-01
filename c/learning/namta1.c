#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        m=n*i;
        printf("%dX%d=%d\n",n,i,m);
    }
    return 0;
}
