#include<stdio.h>
int main()
{
    long long int n,k,i,c=1,d=0;
    scanf("%I64d %I64d",&n,&k);
    if(n%2==0)
    {
        if(k<=n/2)
        {
            printf("%I64d",2*k-1);
        }
        else
        {
            printf("%I64d",2*(k-(n/2)));
        }
    }
    else
    {
        if(k<=(n/2+1))
        {
            printf("%I64d",2*k-1);
        }
        else
        {
            printf("%I64d",2*(k-(n/2)-1));
        }
    }
    return 0;
}
