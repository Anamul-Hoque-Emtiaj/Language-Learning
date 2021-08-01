#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c-b>0&&c-a>0&&b-a>0)
        printf("%d<%d<%d",a,b,c);
    else if(b-c>0&&b-a>0&&c-a>0)
        printf("%d<%d<%d",a,c,b);
    else if(c-a>0&&c-b>0&&a-b>0)
        printf("%d<%d<%d",b,a,c);
    else if(a-b>0&&a-c>0&&c-b>0)
        printf("%d<%d<%d",b,c,a);
    else if(b-a>0&&b-c>0&&a-c>0)
        printf("%d<%d<%d",c,a,b);
    else
        printf("%d<%d<%d",c,b,a);
    return 0;
}
