#include<stdio.h>
int main()
{
    int x[10]={10,15,7,35,20,50,37,75,47,90},value=48,i,p;
    for(i=0;i<10;i++){
        p=-1;
        if(x[i]==value){
            p=i+1;
            break;
        }
    }
    if(p==-1)printf("Not Found");
    else printf("possition:%d",p);
    return 0;

}
