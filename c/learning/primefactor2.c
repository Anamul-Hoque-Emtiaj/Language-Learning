#include<stdio.h>
int main()
{
    int n,c,i,j;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
                c=1;
            for(j=2;j<i;j++){
                if(i%j==0){
                    c=0;
                    break;
                }
            }if(c==1)printf("%d\n",i);
        }
    }
    return 0;
}
