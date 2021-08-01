#include<stdio.h>
int main()
{
    char str1[]="Anamul Hoque";
    char str2[]=" Emtiaz";
    char str3[100];
    int i,j,len1=0,len2=0,k;
    /*for(i=0;str1[i]!='\0';i++){
        len1++;
    }
    for(j=0;str2[j]!='\0';j++){
        len2++;
    }condition i<len1,j<len2
    */
    for(i=0,k=0;str1[i]!='\0';i++,k++){
        str3[k]=str1[i];
    }
    for(j=0;str2[j]!='\0';j++,k++){
        str3[k]=str2[j];
    }
    str3[k]='\n';
    printf("%s",str3);
    return 0;
}
