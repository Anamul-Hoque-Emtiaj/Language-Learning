#include<stdio.h>

int main()
{
    int x=10,y=20,temp;
    int *p1,*p2;

    p1=&x;
    p2=&y;

    printf("Before Swaping:\n");
    printf("X=%d\n",x);
    printf("Y=%d\n",y);

    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("\n\nAfter Swaping:\n");
    printf("X=%d\n",x);
    printf("Y=%d\n",y);

    return 0;

}
