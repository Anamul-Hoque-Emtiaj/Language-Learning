#include<stdio.h>
int main()
{
    char str1[]="Alhamdulillah";
    char str2[100];
    int i,j,len=0;
    for(i=0;str1[i]!='\0';i++){
        len++;
    }
    for(i=0,j=0;i<len;i++,j++){
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("%s",str2);
    return 0;
}
