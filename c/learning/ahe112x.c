#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&i);
    a=i;
    while(a>=2){
          b=a%2;
          printf("%d",b);
          a=a-((a+b)/2);
          if(a<2){
            b=a;
            printf("%d",b);
          }
          }

    return 0;
}

