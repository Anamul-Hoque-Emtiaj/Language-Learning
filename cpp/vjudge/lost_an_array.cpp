#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,l,r,m1,m2,i,s1=0,s2;
    cin>>n>>l>>r;
    m1=n-l+1;
    for(i=1;i<=l-1;i++)
        s1=s1+pow(2,i);
    cout<<m1+s1<<" ";
    m2=n-r+1;
    s2=pow(2,r-1)*m2;
    for(i=0;i<r-1;i++)
        s2=s2+pow(2,i);
    cout<<s2<<endl;
}
