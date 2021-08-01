#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    printf("\n\n\n");
    int i,j,x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0,j=n-1;i<n/2;i++,j--){
        a=x[i];
        x[i]=x[j];
        x[j]=a;
    }printf("\n\n\n");
    for(i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    return 0;


}
