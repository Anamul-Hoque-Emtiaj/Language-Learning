#include<stdio.h>
int main()
{
    int a,b,c,i,j,k,l,m,n;
    scanf("%d",&n);
    k=(n+1)/2;
    l=n-k;
    for(i=1;i<=k;i++){
        for(j=1;j<=k-i;j++)printf(" ");
        for(m=1;m<=2*i-1;m++)printf("*");
        printf("\n");
    }
    for(a=1;a<=l;a++){
        for(b=1;b<=a;b++)printf(" ");
        for(c=1;c<=2*(l-a)+1;c++)printf("*");
        printf("\n");
    }
    return 0;
}
