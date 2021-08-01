#include<stdio.h>
int main()
{
    int i,j,n,s=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++)
            s=s+i*j;
    }
    printf("%d",s);
    return 0;


}
