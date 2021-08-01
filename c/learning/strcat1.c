#include<stdio.h>
#include<string.h>
int main()
{
    //char str1[100]="Anamul Hoque";
    //char str2[]=" Emtiaz";
    char str1[200];
    gets(str1);
    char str2[100];
    gets(str2);
    strcat(str1,str2);
    printf("%s\n\n",str1);
     printf("%s",str2);
     return 0;

}
