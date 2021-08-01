#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);

       for (i=2;i<=n/2;i++){
        if(n%i==0)
            c++;
       }
       if(c==0&&n!=1)
            printf("prime");
        else
        printf("Not");
    return 0;
}

