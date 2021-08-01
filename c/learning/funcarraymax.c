#include<stdio.h>
int max(int n)
{
    int i,m,x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    m=x[0];
    for(i=0;i<n;i++){
        if(m<x[i]){
            m=x[i];
        }
    }
    printf("\n\nMax:%d",m);
}
int main()
{
    max(5);
}
