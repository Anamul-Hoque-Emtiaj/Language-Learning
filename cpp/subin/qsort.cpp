#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char x[20];

int compare(const void *a,const void *b)
{
    return *(char*)a-*(char*)b;
}
int main()
{
   gets(x);
   int l=strlen(x);
   qsort(x,l,sizeof(char),compare) ;
   for(int i=0;i<20;i++) cout<<x[i]<<endl;
}
