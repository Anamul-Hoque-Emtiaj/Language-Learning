#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("\n\n\n");
    int i,j,x[n],y[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0,j=n-1;i<n;i++,j--){
        y[j]=x[i];
    }
    for(i=0;i<n;i++){
        x[i]=y[i];
    }printf("\n\n\n");
    for(i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    return 0;
}
