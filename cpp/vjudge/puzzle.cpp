#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,l,h,mn,t;
    cin>>n>>m;
    long long int a[m],i;
    for(i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    l=0;
    h=n-1;
    mn=a[h]-a[l];
    for(i=1;h+i<m;i++)
    {
        t=a[h+i]-a[l+i];
        if(t<mn) mn=t;
    }
    cout<<mn<<endl;
}
