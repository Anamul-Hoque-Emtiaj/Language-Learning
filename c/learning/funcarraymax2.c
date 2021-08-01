#include<stdio.h>
int max(int x[],int n)
{
    int i,m;
    m=x[0];
    for(i=0;i<n;i++){
        if(m<x[i]){
            m=x[i];
        }
    }
    return m;

}
int main()
{
    int b,i;
    scanf("%d",&b);
    int a[b];
    for(i=0;i<b;i++){
        scanf("%d",&a[i]);
    }
    int maxx=max(a,b);
    printf("\n\nMax:%d",maxx);
    return 0;
}

