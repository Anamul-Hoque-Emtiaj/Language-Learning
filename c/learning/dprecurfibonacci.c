#include<stdio.h>
#define max 20
#define emp -1
int a[max];

int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
   if(a[n]!=-1) return a[n];
    a[n]=fib(n-1)+fib(n-2);
        return a[n];

}
void init()
{
    int i;
    for(i=0;i<max;i++) a[i]=emp;
}

int main()
{
    int x,r;
    scanf("%d",&x);
    r=fib(x);
    printf("%d\n",r);
    return 0;
}
