#include<stdio.h>
#include<math.h>
int main()
{
    int a,i=0,j=0,x,z;
    double b,n,y;
    scanf("%lf",&n);
    a=floor(n);
    b=(double)(n-a);

    x=log2(a);
    int r[x+1];
    while(a!=0)
    {
        r[i]=a%2;
         i++;
        a=a/2;
    } for(i=x;i>=0;i--)
    {
         printf("%d",r[i]);
    }
    printf(".");
    while(b!=0)
    {
       y=2*b;
       z=floor(y);
       printf("%d",z);
       b=y-z;
       j++;
       if(j==6) {break;}
    }
    return 0;
}
