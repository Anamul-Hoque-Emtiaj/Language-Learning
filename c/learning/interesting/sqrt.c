#include<stdio.h>

int main()
{
    double n,l,h,r,m;
    scanf("%lf",&n);
    l=1;
    h=n;
    while(l<=h)
    {
        m=(l+h)/2;
        if(m*m-n>=-0.00001&&m*m-n<=0.00001)
        {
            r=m;
            break;
        }
        else if(m*m-n>0.00001) h=m-0.00000001;
        else if(m*m-n<-0.00001) l=m+.00000001;
    }
    printf("%.3lf",r);
}
