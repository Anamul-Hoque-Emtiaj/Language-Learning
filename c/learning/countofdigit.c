#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    while(n!=0){
        c++;
        n=n/10;
    }
    printf("count of digit %d",c);
    return 0;
}