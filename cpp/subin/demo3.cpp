#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s1=0;
        char s[100000];
        scanf("%s",s);
        int l=strlen(s);
        for(int i=0;i<l;i++)
        {
            if((s[i]=='N'&&s[i+1]=='S')||(s[i]=='S'&&s[i+1]=='N')||(s[i]=='W'&&s[i+1]=='E')||(s[i]=='E'&&s[i+1]=='W'))
            {
                s1+=1;
            }
            else s1+=5;
        }
        cout<<s1<<endl;
    }


}

