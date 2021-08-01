#include<stdio.h>
int main()
{
    char str1[]="Anamul Hoque Emtiaz";
    char str2[100];
    int i,j,len=0;
    for(i=0;str1[i]!='\0';i++){
        len++;
    }
    for(i=0,j=len-1;str1[i]!='\0';i++,j--){
        str2[j]=str1[i];
    }str2[j]='\0';
    for(i=0;str2[i]!='\0';i++){
        str1[i]=str2[i];
    }
    printf("%s",str1);
    return 0;
}
