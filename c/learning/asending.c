#include<stdio.h>
int main()
{
    int n,x[n],a,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        for(k=1+i;k<n;k++){
            if(x[i]>x[k]){
                a=x[i];
                x[i]=x[k];
                x[k]=a;
            }
        }
    }
    printf("asending order:\n");
    for(i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    printf("desending order:\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",x[i]);
    }
    return 0;
}
