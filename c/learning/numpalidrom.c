#include<stdio.h>
int main()
{
    int a,b,r,s=0;
    scanf("%d",&a);
    b=a;
    while(a!=0){
        r=a%10;
        s=s*10+r;
        a=a/10;
    }
    if(s==b){
        printf("palidrom number");
    }
    else{
        printf("not palidrom number");
    }
    return 0;
}

