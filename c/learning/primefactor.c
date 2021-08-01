#include<stdio.h>
int main()
{
    int n,c=0,i,j;
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        if(n%i==0){
            for(j=2;j<i;j++){
                if(i%j==0){
                    c++;
                    break;
                }
            }if(c==0)printf("%d\n",i);
        }
    }
    return 0;
}
