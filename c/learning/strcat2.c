#include<stdio.h>
int main()
{
    char str1[100]="Anamul Hoque";
    char str2[]=" Emtiaz";
    int i,j=0,len=0;
    for(i=0;str1[i]!='\0';i++){
        len++;
    }
    while(str2[j]!='\0'){
        str1[len+j]=str2[j];
        j++;
    }/*noton str nile sathe str1[i]='\0' dite hobe*/
    printf("%s",str1);
    return 0;
}
