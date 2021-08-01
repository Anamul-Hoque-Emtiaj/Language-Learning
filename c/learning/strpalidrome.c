#include<stdio.h>
int main()
{
    char str1[]="mimimim";
    char str2[100];
    int i,j,len=0;
    for(i=0;str1[i]!='\0';i++){
        len++;
    }
    for(i=0,j=len-1;str1[i]!='\0';i++,j--){
        str2[j]=str1[i];
    }str2[j]='\0';
    int d=strcmp(str2,str1);
    if(d==0)printf("palidrome");
    else printf("not palidrome");
    return 0;
}

