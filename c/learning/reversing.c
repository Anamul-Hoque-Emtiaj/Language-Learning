#include<stdio.h>
int main()
{
    int n,x[n],i,a,m;
    scanf("%d",&n);
    m=n-1;
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n/2;i++){
        a=x[i];
        x[i]=x[m];
        x[m]=a;
        m--;
    }
    printf("reverse :\n");
    for(i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    return 0;
}
