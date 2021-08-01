#include<stdio.h>

void swap(int *p1,int *p2)
{
    int temp;

     temp=*p1;
    *p1=*p2;
    *p2=temp;

}

int main()
{
    int x=10,y=20;

    printf("Before Swaping:\n");
    printf("X=%d\n",x);
    printf("Y=%d\n",y);

    swap(&x,&y);

    printf("\n\nAfter Swaping:\n");
    printf("X=%d\n",x);
    printf("Y=%d\n",y);

    return 0;
}

