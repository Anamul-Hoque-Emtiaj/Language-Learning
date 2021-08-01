#include<stdio.h>
int main()
{
    int y;
    scanf("%d",&y);
    ((y%400==0)||((y%100!=0)&&(y%4==0)))?printf("Leap Year"):printf("Not Leap Year");
    return 0;
}
