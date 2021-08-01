#include<stdio.h>
int main()
{
    int i,n,c,j;
    scanf("%d",&n);
        for(j=1;j<=n;j++){
                c=0;
       for(i=2;i<j;i++){
        if(j%i==0){
            c++;
             break;
            }}
       if(c==0&&j!=1){
            printf("%d\n",j);
            }
        }

    return 0;
}


