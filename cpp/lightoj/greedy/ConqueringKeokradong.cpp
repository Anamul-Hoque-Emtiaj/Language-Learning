#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    io;
    ll t,j;
    cin>>t;
    for(j=1; j<=t; j++)
    {
        ll n,k,it,cur,mini,d,in,i;
        cin>>n>>k;
        d=n-k;
        vector<ll>v1,v2;
        vector<ll> :: iterator mx;
        for(i=0; i<=n; i++)
        {
            cin>>in;
            v1.push_back(in);
        }
        while(d--)
        {
            mini=v1[0]+v1[1];
            it=0;
            for(i=1; i<v1.size()-1; i++)
            {
                cur=v1[i]+v1[i+1];
                if(cur<mini)
                {
                    mini=cur;
                    it=i;
                }
            }
            for(i=0; i<v1.size();)
            {
                if(i==it)
                {
                    in=v1[i]+v1[i+1];
                    v2.push_back(in);
                    i+=2;
                }
                else
                {
                    in=v1[i];
                    v2.push_back(in);
                    i++;
                }
            }
            copy(v2.begin(),v2.end(),v1.begin());
            v1.pop_back();
            v2.clear();
        }
        mx=max_element(v1.begin(),v1.end());
        cout<<"Case "<<j<<": "<<*mx<<endl;
        for(i=0;i<v1.size();i++)
            cout<<v1[i]<<endl;
    }
}
