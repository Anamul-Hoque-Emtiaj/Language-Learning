#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,k=1;
    double s=0,x,l,y;
    scanf("%d%lf",&n,&y);
    x=y*(3.1416/180);
    for(i=0;i<n;i++){
            for(j=1;j<=(2*i+1);j++){
                k=k*j;}
        l=(pow(-1.0,i)*pow(x,(2.0*i+1)))/k;
        s=s+l;
    }
    printf("sin%.2lf=%.3lf",y,s);
    return 0;
}
