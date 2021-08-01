#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{
    ll t,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        ll n,m,i,r=0,c=0,mn,it;
        cin>>n>>m;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        it=n-m+1;
        for(i=0;i<it;i++)
            r+=a[i];
        mn=r;
        for(i=it;i<n;i++)
        {
            r=r+a[i]-a[c];
            if(mn>r) mn=r;
            c++;
        }
        cout<<"Case "<<j<<": "<<mn<<endl;
    }
}
