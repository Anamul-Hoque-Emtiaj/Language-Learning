#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    printf("Before\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("\n\n\nAfter\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
