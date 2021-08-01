#include<stdio.h>
double square(int x,int y)
{
    int i=1,f=1;
    while(i<=y){
        f=f*x;
        i++;
    }
    return f;
}
int main()
{
    int d=square(10,3);
    printf("%d",d);
    return 0;
}
