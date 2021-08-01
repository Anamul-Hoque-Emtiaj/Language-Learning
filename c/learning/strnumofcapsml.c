#include<stdio.h>
int main()
{
    char str[]="Anamul Hoque Emtiaz 113";
    int  i,cap=0,sml=0,dig=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z')sml++;
        else if(str[i]>='A'&&str[i]<='Z')cap++;
        else if(str[i]>='0'&&str[i]<='9')
            dig++;
    }
    printf("Number of capital letter %d\n",cap);
    printf("Number of small letter %d\n",sml);
    printf("Number of digit letter %d\n",dig);
    return 0;
}
