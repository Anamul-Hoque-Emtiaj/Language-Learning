#include<stdio.h>
char reverse(char str[])
{
   int i,j,l=0;
   for(i=0;str[i]!='\0';i++) l++;
   char rev[l];
   for(i=0,j=l-1;str[i]!='\0';i++,j--){
    rev[j]=str[i];
   }
   //rev[j]='\0';
   printf("%s",rev);
}
int main()
{
    char x[300];
    gets(x);
    reverse(x);
    return 0;
}
