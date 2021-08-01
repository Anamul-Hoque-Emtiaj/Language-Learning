#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long unsigned int n,r=0,c=0;
        cin>>n;
        while(n!=1)
        {
            if(n%2==0)
            {
                 n=n/2;
                 c++;
            }
            else if(n%3==0)
            {
                n=(2*n)/3;
                c++;
            }
            else if(n%5==0)
            {
                n=(4*n)/5;
                c++;
            }
            else
            {
                r=-1;
                break;
            }
        }
        if(r==-1) cout<<"-1"<<endl;
        else cout<<c<<endl;
    }
}
