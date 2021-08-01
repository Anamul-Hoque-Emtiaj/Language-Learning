#include<stdio.h>
int main()
{
    float a;
    int b,c,d,e;
    scanf("%f",&a);
    b=a*10;
    c=b/10;
    d=c+1;
    e=b%10;
    if(e>=5)
        printf("rounded value:%d\n",d);
    else
        printf("rounded value:%d\n",c);
    printf("floor:%d\n",c);
    printf("ceiling:%d\n",d);
    return 0;
}
