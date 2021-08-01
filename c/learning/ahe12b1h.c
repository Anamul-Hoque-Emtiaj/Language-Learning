#include<stdio.h>
int main()
{
    int a,b,c,d;

    scanf("%d%d",&a,&b);
    c=(100.0*a)/b;
    d=c/5;
    switch(d){
        case12:
         printf("12");
         break;
        case13:
         printf("15");
         break;
        case14:
         printf("18");
         break;
        case15:
         printf("21");
         break;
        case16:
         printf("24");
         break;
        case17:
         printf("27");
         break;
        case18:
         printf("30");
         break;
        case19:
         printf("30");
         break;
         case20:
         printf("30");
         break;
    default:
        printf("0");
        break;
    }
    return 0;
}
