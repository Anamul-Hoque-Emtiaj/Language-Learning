#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char c[100];
    gets(c);
    int l,i,j,p=0;
    l=strlen(c);
    for(i=0;i<l;i++)
    {
        if(c[i]==' ')
        {
            for(j=i-1;j>=p;j--)
            {
                cout<<c[j];
                if(j==0) cout<<" ";
            }
            p=i;
        }
    }
    for(i=l-1;i>=p;i--) cout<<c[i];
}
