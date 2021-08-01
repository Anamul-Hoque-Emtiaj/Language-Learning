#include<stdio.h>
int main()
{
    int j;
    scanf("%d",&j);
    int i,x[j],m;
    for(i=0;i<j;i++){
        scanf("%d",&x[i]);
    }m=x[0];
    for(i=0;i<j;i++){
        if(x[i]>m){
        //continue;
         m=x[i];}
            }
            printf("%d\n",m);
            return 0;

}
