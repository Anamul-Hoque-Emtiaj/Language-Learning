#include<stdio.h>
int main()
{
    char str[]="Anamul Hoque Emtiaz @113!";
    int i,vow=0,cons=0,dig=0,word=1,other=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
            vow++;
        }
        else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            cons++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            dig++;
        }
       else if(str[i]==' '){
            word++;
        }else other++;

    }
    printf("Number of Vowel are %d\n",vow);
    printf("Number of Consonant are %d\n",cons);
    printf("Number of Digits are %d\n",dig);
    printf("Number of Word are %d\n",word);
    printf("Others are %d\n",other);
    return 0;
}
