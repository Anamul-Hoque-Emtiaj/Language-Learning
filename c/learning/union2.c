#include<stdio.h>

union test1
{
    int x;
    int y;
};

union test2
{
    int a;
    double b;
};

union test3
{
    char c[12];
    double d;
};

struct test4
{
    int e;
    int f;
};

struct test5
{
    int i;
    double j;
};

struct test6
{
    char k[20];
    double l;
};

int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    struct test4 t4;
    struct test5 t5;
    struct test6 t6;
    t2.a=5;
    t3.d=15.52;
    printf("A=%d\n",t2.a);
    printf("B=%d\n",t2.b);
    printf("C=%s\n",t3.c);
    printf("D=%d\n",t3.d);
    printf("Size1:%d\n",sizeof(t1));
    printf("Size2:%d\n",sizeof(t2));
    printf("Size3:%d\n",sizeof(t3));
    printf("Size4:%d\n",sizeof(t4));
    printf("Size5:%d\n",sizeof(t5));
    printf("Size6:%d\n",sizeof(t6));
    printf("Size:%d",sizeof(double));
    return 0;
}

