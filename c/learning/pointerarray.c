#include<stdio.h>
#include<string.h>

int main()
{
     int x[]={10,20,30,40,50};
     int i,*p;
     p=&x[0];
     for(i=0;i<5;i++)
     {
        printf("%d\n",*p);
        p++;
     }
     return 0;
}
