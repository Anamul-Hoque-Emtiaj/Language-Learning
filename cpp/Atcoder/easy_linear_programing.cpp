#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,k;
    cin>>a>>b>>c>>k;
    if(a>=k)
        cout<<k<<endl;
    else
    {
        if(b>=(k-a))
        {
            cout<<a<<endl;
        }
        else
        {
            cout<<a-(k-a-b)<<endl;
        }
    }

}

