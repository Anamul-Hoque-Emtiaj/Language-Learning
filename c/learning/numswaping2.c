#include<stdio.h>
int main()
{
    int a,b;\
    scanf("%d%d",&a,&b);
    printf("Before\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    a=a-b;
    b=a+b;
    a=b-a;
     printf("\n\n\nAfter\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    return 0;
}
