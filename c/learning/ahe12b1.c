#include<stdio.h>
int main()
{
    int a,b;
    float c;
    scanf("%d%d",&a,&b);
    c=(100.0*a)/b;
    if(c>=60&&c<65)
    printf("12");
    else if(c>=65&&c<70)
        printf("15");
    else if(c>=70&&c<75)
        printf("18");
    else if(c>=75&&c<80)
        printf("21");
    else if(c>=80&&c<85)
        printf("24");
    else if(c>=85&&c<90)
       printf("27");
    else if(c>=90&&c<=100)
        printf("30");
    else
        printf("0");
        return 0;

}


