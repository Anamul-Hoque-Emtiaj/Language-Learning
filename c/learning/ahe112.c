#include<stdio.h>
int main()
{
    int a,b,i,s,p;
    scanf("%d",&i);
    for(a=i,s=0;a>2;a=a-((a+b)/2)){
        b=a%2;

        s=s+b;
    }
    p=s+1;
    printf("%d",p);
    return 0;
}
