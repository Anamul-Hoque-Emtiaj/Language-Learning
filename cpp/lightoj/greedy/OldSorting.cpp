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
        ll n,i,j,c=0,f;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n;i++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if(a[j]!=j+1)
                {
                    swap(a[j],a[a[j]-1]);
                    c++;
                    f++;
                }
            }
            if(f==0) break;
        }
       cout<<"Case "<<cs<<": "<<c<<endl;
    }
}

