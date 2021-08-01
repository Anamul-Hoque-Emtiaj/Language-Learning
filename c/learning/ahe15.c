#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,e,f,g;
    float d;
    printf("1st point:");
    scanf("%d%d%d",&a,&b,&c);
    printf("2nd point:");
    scanf("%d%d%d",&e,&f,&g);
    d=sqrt((e-a)*(e-a)+(f-b)*(f-b)+(g-c)*(g-c));
    printf("Distance:%f",d);
    return 0;

}
