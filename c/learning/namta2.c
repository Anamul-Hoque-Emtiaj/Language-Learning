#include<stdio.h>
int main()
{
    int i,n,m;
   for(n=2;n<=10;n++){
    for(i=1;i<=10;i++){
        m=n*i;
        printf("%dX%d=%d\n",n,i,m);
    }printf("\n");}
    return 0;
}

