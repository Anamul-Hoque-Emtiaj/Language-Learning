#include<stdio.h>
int main()
{
    int a,b,i;
    scanf("%d",&i);
    a=i;
    for(a=i;a>=2;a=a-((a+b)/2)){
             b=a%2;
             printf("%d",b);
           }
            if(a<2){
            b=a;
            printf("%d",b);
}
    return 0;
}


