#include<stdio.h>
int main()
{
    int i,x[]={1,2,3,4,5,6,7,8,9},u=8,l=0,m,v=6;
    while(l<=u){
        m=(l+u)/2;
        if(v==x[m]){break;}
        if(v>x[m])
            {l=m+1;}
            else {u=m-1;}

    }
    if(l>u)printf("%d is not in the array",v);
    else printf("%d is %d th possition",x[m],m+1);
    return 0;
}
