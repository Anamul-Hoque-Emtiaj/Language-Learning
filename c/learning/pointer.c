#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("Value of X=%d\n",x);
    printf("Adress of X=%d\n",&x);
    printf("Value of X=%d\n",*p);
    printf("Adress of X=%d\n",p);
    printf("Adress of X=%u\n",p);
    printf("Adress of X=%x\n",p);
    printf("Adress of Pointer=%u\n",&p);
    return 0;
}
