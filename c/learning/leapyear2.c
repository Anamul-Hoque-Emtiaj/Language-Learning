#include<stdio.h>
int main()
{
    int y,a,b,c;
    scanf("%d",&y);
    a=y%400;
    b=y%100;
    c=y%4;
    if(a==0){
        printf("Leap Year");
    }
    else {
        if(b==0){
            printf("Not Leap Year");
        }else{
        if(c==0){
            printf("Leap Year");}
            else{printf("Not Leap Year");}
        }
        }
    return 0;
}
