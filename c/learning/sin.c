#include<stdio.h>
#include<math.h>
int main()
{
    int n,g=1,h=1,i,j,m,l,e,f,a,b;
    float x,c,d,s=0,t=0,z;
    double y;

    scanf("%d%f",&n,&z);
    x=z*(3.1416/180);
    if(n%2==0){
        m=n/2;
        l=n/2;
    }
    else{
      m=(n+1)/2;
      l=(n-1)/2;
    }
    for(i=1;i<=m;i++){
        a=4*i-3;
        for(e=1;e<=a;e++){
            g=g*e;
        }
        c=pow(x,a)*1.0/g;
        s=s+c;
    }
    for(j=1;j<=l;j++){
        b=4*j-1;
        for(f=1;f<=b;f++){
            h=h*f;
        }
        d=pow(x,b)*1.0/h;
        t=t+d;
    }
    y=s-t;
    printf("sin%.2f=%lf",z,y);
    return 0;
}
