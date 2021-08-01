#include<stdio.h>
#include<string.h>
int main()
{

    //char str[]="Anamul Haque Emtiaz";
    char str[100];
    gets(str);
    int d=strlen(str);
    printf("%d",d);
    return 0;
}

