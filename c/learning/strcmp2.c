#include<stdio.h>
int main()
{
    char str1[]="Anamu";
    char str2[]="Anamul";
    int i,d;
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
    if(str1[i]!=str2[i])
        {d=1;
        break;}

    }
    if(d==1)printf("Not Equal");
    else printf("Equal");
    return 0;
}
