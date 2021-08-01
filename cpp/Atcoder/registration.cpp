#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    if(t.size()==s.size()+1)
    {
        int i,c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]==t[i]) c++;
        }
        if(c==s.size()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
}



