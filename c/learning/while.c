#include<stdio.h>
int main()
{
    int i=1;
    while(i<=100){

        printf("%d%c",i,(i%10==0)?',\n':',');
         i++;
    }
    return 0;
}
