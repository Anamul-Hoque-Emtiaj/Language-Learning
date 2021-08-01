#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,i,f,s1=0,s2=0,c=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        f=a[0];
        if(a[i]<=(f/2))
            {
                s2=s2+a[i];
                c++;
            }
        s1=s1+a[i];
    }
    if(f>s1/2) cout<<"1"<<endl<<"1"<<endl;
    else if((s2+f)<=s1/2) cout<<"0"<<endl;
    else
    {
       cout<<c+1<<endl<<"1 ";
       for(i=1;i<n;i++)
       {
            if(a[i]<=(f/2))
            {
                cout<<i+1<<" ";
            }
       }
       cout<<endl;
    }
}
