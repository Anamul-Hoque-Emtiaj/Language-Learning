#include<bits/stdc++.h>
using namespace std;

int lcm(int a[],int n)
{
    int mx=0,i,x;
    for(i=0;i<n;i++)
    {

        if(mx<a[i]) mx=a[i];
    }
    long long unsigned int r=1;
    x=2; ///current factor
    while(x<=mx)
    {
        vector<int>v;
        for(i=0;i<n;i++)
        {
            if(a[i]%x==0) v.push_back(i);
        }
        if(v.size()>=2)
        {
            for(i=0;i<v.size();i++)
            {
                a[v[i]]/=x;
            }
            r=r*x;
            v.clear();
        }
        else x++;
    }
    for(i=0;i<n;i++) r*=a[i];
    return r;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i;
        for(i=0;i<n;i++) cin>>a[i];
        cout<<lcm(a,n)<<endl;
    }
}
