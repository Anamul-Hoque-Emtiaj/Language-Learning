#include<stdio.h>
int main()
{
    int i,l=10;
    char c[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    printf("%s\n",c);
    for(i=0;i<l;i++){
        if(c[i]>='a'&&c[i]<='z'){
            c[i]='A'+c[i]-'a';
        }
    }printf("%s",c);
    return 0;
}
