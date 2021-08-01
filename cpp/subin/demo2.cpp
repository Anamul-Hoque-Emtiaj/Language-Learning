#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        int a,b,s1,s2,r,c,d;
        double x;
        cin>>a>>b>>c>>d;
        s1=a*b;
        s2=c*d;
        x=sqrt(s1+s2);
        if(x*x==s1+s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}

