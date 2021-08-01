#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    switch(a){
    case 1:
        b=31;
        break;
    case 2:
        b=28;
        break;
    case 3:
        b=31;
        break;
    default:
        b=30;
        break;

    }
    printf("%d",b);
    return 0;
}
