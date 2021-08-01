#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b<=c||a+c<=b||b+c<=a){
    printf("Not Possible");}
    else{
        if(a==b&&b==c){
            printf("Equilateral triangle");
        }else{
        if(a==b||b==c||c==a){
        printf("Bilateral triangle");}
        if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
            printf("Right angle triangle");
        }}
    }
    return 0;
}
