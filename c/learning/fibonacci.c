#include<stdio.h>
int main()
{
    int i=0,j=1,c,n,k;
    scanf("%d",&n);
    printf("0\n1\n");
    for(c=3;c<=n;c++){
        k=i+j;
        i=j;
        j=k;
        printf("%d\n",k);}
        printf("n^th:%d",k);

    return 0;
}
