#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]="Anamul Hoqu";
    char str2[]="Anamul Hoque";
    int d=strcmp(str1,str2);
    /*if(d==0)printf("Equal");
    else printf("Not Equal");*/
    printf("%d",d);
    return 0;
}
