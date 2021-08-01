#include<stdio.h>
int main()
{
    int a,r,q;
    float p;
    scanf("%d",&a);
    if(a<=100){
        p=a*0.5;
    }
    else if(a>100&&a<200){
        q=a-100;
        p=50+q*0.8;
    }
    else{
        r=a-200;
        p=130+r*1.2;
    }
    printf("%.2f",p);
    return 0;


}
