#include<stdio.h>
int main()
{
    char str[]="Anamul Hoque";
    int i;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]='A'+str[i]-'a';
        }
    }
    printf("%s\n",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]='a'+str[i]-'A';
        }
    }
    printf("%s\n",str);
    return 0;
}
