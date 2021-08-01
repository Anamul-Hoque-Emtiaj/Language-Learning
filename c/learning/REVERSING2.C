#include<stdio.h>
int main()
{
    int n,x[n],i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    printf("reversing:\n");
    for(i=n-1;i>=0;i--){
        printf("%d\n",x[i]);
    }
    return 0;
}
