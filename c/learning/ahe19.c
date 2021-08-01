#include<stdio.h>
int main()
{
    int r,a;
    printf("Enter Your Roll: ");
    scanf("%d",&r);
    a=r/30;
    if(a==0)
        printf("Section:a1");
    else if(a==1)
        printf("Section:a2");
    else if(a==2)
        printf("Section:b1");
    else if(a==3)
        printf("Section:b2");
    else
        printf("unavailable");
    return 0;


}

