#include<stdio.h>
int main()
{
    int x=10,y=20,z=30;
    int *p;

    p=&x;
    printf("Value of X=%d\n",*p);
    printf("Adress of X=%u\n",p);

    p=&y;
    printf("Value of Y=%d\n",*p);
    printf("Adress of Y=%u\n",p);

    p=&z;
    printf("Value of Z=%d\n",*p);
    printf("Adress of Z=%u\n",p);

    return 0;
}
