#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i=0,y;
    scanf("%d",&n);
    x=log2(n);
   int r[x+1];
    while(n!=0)
    {
        r[i]=n%2;
         i++;
        n=n/2;
    }
    for(i=x;i>=0;i--) printf("%d",r[i]);
    return 0;
}
