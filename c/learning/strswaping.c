#include<stdio.h>
int main()
{
    char str1[50]="Anamul Hoque";
    char str2[50]="Emtiaz";
    char temp[50];
    int i;
    printf("Before Swaping\n");
    printf("%s\n",str1);
    printf("%s\n",str2);
    for(i=0;str1[i]!='\0'||str2[i]!='\0';i++){
        temp[i]=str1[i];
        str1[i]=str2[i];
        str2[i]=temp[i];
    }
     printf("\n\n\nAfter Swaping\n");
    printf("%s\n",str1);
    printf("%s\n",str2);
    return 0;
}
