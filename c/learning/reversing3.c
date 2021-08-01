#include<stdio.h>
int main()
{
    int n;
    scanf("%d",n);
    int i,j,x[n],y[n];
    for(i=0;i<n;i++){
        scanf("%d",x[i]);
    }
    for(i=0,j=9;i<10;i++,j--){
        y[j]=x[i];
    }
    for(j=0;j<n;j++){
        printf("%d",y[j]);
    }
    return 0;
}
