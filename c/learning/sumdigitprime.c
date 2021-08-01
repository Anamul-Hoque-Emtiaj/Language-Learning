#include<stdio.h>
int main()
{
    int a,s,r,c,d;
    scanf("%d",&a);
    while(a!=0){
        r=a%10;
        a=a/10;
      if(r>2) {
            for(c=2;c<r;c++){
            if(r%c==0){d++;
            }
        }//s=0;
        if(d==0&&a!=1){
        printf("%d",r);}
        }
    }//printf("%d",s);
    return 0;
}
