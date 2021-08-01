#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,x,y,z;
    printf("Enter 1st date:\n ");
    scanf("%d%d%d",&a,&b,&c);
    printf("Enter 2nd date:\n ");
    scanf("%d%d%d",&d,&e,&f);
    g=a+b*30+c*365;
    h=d+e*30+f*365;
    i=g-h;
    if(i>1)
    printf("2nd person is older");
    else
        printf("1st person is older");
    return 0;
}

