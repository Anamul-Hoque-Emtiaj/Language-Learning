#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define io ios_base::sync_with_stdio(false);cin.tie(NULL)

struct str
{
    ll x,y;
};

bool cmp(str a,str b)
{
    return a.y<b.y;
}

int main()
{
    io;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        ll n,w,j,cur,r,c=1;
        cin>>n>>w;
        struct str a[n];
        for(j=0;j<n;j++)
        {
            cin>>a[j].x>>a[j].y;
        }
        sort(a,a+n,cmp);
        cur=a[0].y;
        for(j=1;j<n;j++)
        {

            if((cur+w)<a[j].y)
            {
                c++;
                cur=a[j].y;
            }
        }
        cout<<"Case "<<i<<": "<<c<<endl;
    }
}
