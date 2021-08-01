#include<stdio.h>
#include<math.h>
int main()
{
    int v,w,x,y,z;
    scanf("%d%d%d%d",&v,&w,&x,&y);
    z=pow(16,3)*v+pow(16,2)*w+pow(16,1)*x+y;
    printf("%d",z);
    return 0;
}
