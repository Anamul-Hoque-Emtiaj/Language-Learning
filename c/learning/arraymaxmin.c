#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,max,min,x[n];
    printf("\n\n");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    max=x[0];
    for(i=0;i<n;i++){
        if(x[i]>max){
            max=x[i];
        }
    }
    printf("Maximum is:%d\n\n\n",max);
    min=x[0];
        for(i=0;i<n;i++){
        if(x[i]<min){
            min=x[i];
        }
    }
    printf("Minimum is:%d",min);
    return 0;
}
