#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int i,j,x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(x[i]>x[j]){
                a=x[i];
                x[i]=x[j];
                x[j]=a;
            }
        }
    }
    printf("\n\nAssending Order:\n");
        for(i=0;i<n;i++){
        printf("%d\n",x[i]);
    }
    printf("\n\nDesending Order:\n");
        for(i=n-1;i>=0;i--){
        printf("%d\n",x[i]);
    }
    return 0;
}
