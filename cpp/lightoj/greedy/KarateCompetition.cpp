#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    io;
    ll t,cs;
    cin>>t;
    for(cs=1;cs<=t;cs++)
    {
        ll n,i,in,s=0,me,enm,eql=0;
        cin>>n;
        list<ll>v1,v2;
        for(i=1;i<=n;i++)
        {
            cin>>in;
            v1.push_back(in);
        }
        v1.sort();
                for(i=1;i<=n;i++)
        {
            cin>>in;
            v2.push_back(in);
        }
        v2.sort();
        for(i=1;i<=n;i++)
        {
            me=v1.front();
            enm=v2.front();
            if(me>enm)
            {
                s+=2;
                v1.pop_front();
                v2.pop_front();
            }
            else if(me==enm)
            {
                s++;
                v1.pop_front();
                v2.pop_front();
                eql++;
            }
            else
            {
                v1.pop_front();
                v2.pop_back();
            }
        }
        if(eql>2)
            s=s-eql+((eql-1)*2);
        else s=s;
        cout<<"Case "<<cs<<": "<<s<<endl;
    }
}


