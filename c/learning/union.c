#include<stdio.h>

union test
{
    int x,y;
    int z;
};

int main()
{
    union test t;
    scanf("%d",&t.x);
    printf("\n\nX=%d\n",t.x);
    printf("Y=%d\n",t.y);
    printf("Z=%d\n",t.z);
    return 0;
}
